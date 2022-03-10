/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 14:43:25 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/27 18:54:43 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *)malloc(sizeof(*elt));
	if (!(elt))
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

/* static void	print_list(t_list t)
{
	while (t != NULL)
	{
		printf("", t->content);
		t = t->next;
	}
}

int	main ()
{
	char *data= "hello";
	t_list	*test = ft_lstnew(data);
	print_list(test);
	return (0);
} */