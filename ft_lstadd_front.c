#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!(*lst))
		new->next = NULL;
	else
		new->next = *lst;
	*lst = new;
}
