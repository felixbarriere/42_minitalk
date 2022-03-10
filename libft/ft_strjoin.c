/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:20:35 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 18:20:35 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if ((s1 == NULL && s2 == NULL) || !(s1))
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1 && s1[++j])
		str[++i] = s1[j];
	j = -1;
	while (s2 && s2[++j])
		str[++i] = s2[j];
	str[++i] = '\0';
	return (str);
}

/* int main()
{
    char *s1;
    char *s2;

    s1 = "salut ";
    s2 = "les gens!";
    printf("%s", ft_strjoin(s1, s2));
    return (0);
} */