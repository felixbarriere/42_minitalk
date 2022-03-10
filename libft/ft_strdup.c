/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:01:13 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 14:01:13 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;

	dest = malloc((ft_strlen(s1) + 1) * sizeof (char));
	if (!(dest))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int main() {

    const char * original = "The original string.";

    char * copy = ft_strdup( original );

    printf( "%s\n", copy );

    free( copy );

    return EXIT_SUCCESS;
} */