#include "fillit.h"

void	create_env(t_env **env, t_tet **tets)
{
	if ((*env = (t_env *)malloc(sizeof(t_env))))
	{
		(*env)->grid_size = 0;
		(*env)->num_tets = 0;
		(*env)->num_cols = 0;
		(*env)->num_rows = 0;
		(*env)->tets = (t_tet **)malloc(sizeof(t_tet *));
		(*env)->grid = (t_col **)malloc(sizeof(t_col *));
		*((*env)->grid) = NULL;
		(*env)->tets = tets;
		(*env)->unlinked_cols = (void *)0;
		(*env)->unlinked_links = (t_link **)malloc(sizeof(t_link *));
		(*(*env)->unlinked_links) = (void *)0;
	}
}
