#include "fillit.h"

void	relink_link(t_link *link)
{
	if (!link)
		return ;
	link->col->size++;
	if ((link->col)->size == 1 || link->col->d->row > link->row)
		link->col->d = link;
	link->u->d = link;
	link->d->u = link;
}
