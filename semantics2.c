#include "fillit.h"

static void	free_tet(t_tet *tet)
{
	tet->l = NULL;
	tet->r = NULL;
	ft_strclr(tet->pos);
	tet = (void *)0;
}

void		free_tets(t_tet **tets)
{
	t_tet	*tmp;

	if (*tets == (void *)0)
	{
		free(*tets);
		tets = (void *)0;
		return ;
	}
	tmp = *tets;
	*tets = (*tets)->r;
	free_tet(tmp);
	free_tets(tets);
}
