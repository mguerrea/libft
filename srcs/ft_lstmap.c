#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list  *first;
    t_list  *tmp;

    if (!lst)
        return (NULL);
    if (!(tmp = f(lst)))
        return (NULL);
    first = tmp;
    lst = lst->next;
    while (lst)
    {
        if(!(tmp->next = f(lst)))
            return (NULL);
        lst = lst->next;
        tmp = tmp->next;
    }
    return (first);
}