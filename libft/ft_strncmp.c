/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:40:51 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 11:40:51 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	while (i + 1 < n && (s1[i] == s2[i] && (s1[i] && s2[i])))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int	main()
{
	char *s1;
	char *s2;

	s1 = "hello";
	s2 = "hello les gens";
	printf("%d\n", strncmp("1234", "1235", -2));
	printf("%d\n", ft_strncmp("1234", "1235", -2));
	return (0);
} */
