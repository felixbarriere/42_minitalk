/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:50:31 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:50:31 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;
	char	*haystack2;

	haystack2 = (char *)haystack;
	if (*needle == '\0')
		return (haystack2);
	i = 0;
	while (haystack2[i] && i <= len)
	{
		y = 0;
		while ((haystack2[i + y] == needle[y]) && (i + y <= len - 1))
		{
			if (needle[y + 1] == '\0')
				return (haystack2 + i);
			y++;
		}
		i++;
	}
	return (0);
}

/* int	main ()
{
	char *	big = "aaabcabcd";
	char *	little = "c";
	size_t	max = -1;
	char 	*s1 = strnstr(big, little, max);
	char 	*s2 = ft_strnstr(big, little, max); 
	printf("%s\n", s1);
	printf("%s\n", s2);
} */
