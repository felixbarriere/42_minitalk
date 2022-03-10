/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:50:38 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:50:38 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/* int main ()
{
    char d[] = "hello world";
    char e[] = "0123456789";

    printf("%zu\n", ft_strlen(d));
    printf("%zu\n", ft_strlen(e));
    printf("%zu\n", strlen(d));
} */