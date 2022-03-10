/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:19:22 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 18:19:22 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*fr;
	size_t	len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	fr = malloc((len + 1) * sizeof(char));
	if (fr == NULL)
		return (NULL);
	fr[len] = '\0';
	while (s[i] != '\0')
	{
		fr[i] = (*f)(i, s[i]);
		i++;
	}
	return (fr);
}

/* char my_func(unsigned int i, char str)
{
	 	printf("My inner function: index = %d and %c\n", i, str);
	 	return str - 32;
}
a
 int main()
{
	 	char str[10] = "hello.";
	 	printf("The result is %s\n", str);
	 	char *result = ft_strmapi(str, my_func);
	 	printf("The result is %s\n", result);
	 	return (0);
} */