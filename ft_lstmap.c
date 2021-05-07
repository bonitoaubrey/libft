#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*p;

	(void)del;
	if (!lst || !f)
		return (NULL);
	new = ft_calloc(sizeof(t_list), 1);
	if (!new)
		return (NULL);
	new->content = f(lst->content);
	p = new;
	while (lst->next)
	{
		lst = lst->next;
		tmp = ft_calloc(sizeof(t_list), 1);
		if (!tmp)
			return (NULL);
		tmp->content = f(lst->content);
		p->next = tmp;
		p = p->next;
	}
	return (new);
}
