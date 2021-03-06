#include "fillit.h"

static int	overlapping(t_link *link1, t_link *link2)
{
	t_link	*tmp1;
	t_link	*tmp2;

	tmp1 = link1;
	tmp2 = link2;
	while (tmp1->l)
		tmp1 = tmp1->l;
	while (tmp2->l)
		tmp2 = tmp2->l;
	while (tmp1)
	{
		if (tmp1->col->id == tmp2->col->id ||
				tmp1->col->id == tmp2->r->col->id ||
				tmp1->col->id == tmp2->r->r->col->id ||
				tmp1->col->id == tmp2->r->r->r->col->id)
			return (1);
		tmp1 = tmp1->r;
	}
	return (0);
}

void		unlink_row(t_link *link, t_env *env)
{
	t_link	*tmp;

	tmp = link;
	while (tmp->l)
		tmp = tmp->l;
	while (tmp)
	{
		unlink_link(tmp, env->unlinked_links);
		tmp = tmp->r;
	}
}

static void	unlink_tet3(t_link *tmp, t_env *env)
{
	while (tmp)
	{
		unlink_col(tmp->col, env);
		tmp = tmp->r;
	}
}

static void	unlink_tet2(t_link *tmp, t_link *link, t_env *env)
{
	if (tmp->id == link->id || overlapping(tmp, link))
		if (link->row != tmp->row)
			unlink_row(tmp, env);
}

void		unlink_tet(t_link *link, t_env *env)
{
	t_col	*col;
	t_link	*tmp;
	int		num_cols;
	int		num_links;

	col = *(env->grid);
	if (!(num_cols = env->num_cols))
		return ;
	while (num_cols--)
	{
		if ((num_links = col->size))
		{
			tmp = col->d;
			while (num_links-- > 0)
			{
				unlink_tet2(tmp, link, env);
				tmp = tmp->d;
			}
		}
		col = col->r;
	}
	tmp = link;
	unlink_tet3(tmp, env);
}
