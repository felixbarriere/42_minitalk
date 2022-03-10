/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:34:37 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:34:37 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *)s;
	while (*chr)
	{
		if (*chr == (char)c)
		{
			return (chr);
		}
		chr++;
	}
	if (c == 0)
		return (chr);
	return (NULL);
}

/* int main ()
{
    char *s;
    char c;

    s = "hello you";
    c = '\0';
    printf("%s\n", strchr(s, c));
    printf("%s", ft_strchr(s, c));
} */