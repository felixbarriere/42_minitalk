/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:00:33 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 15:00:33 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	ptr = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			ptr = (char *)&s[i];
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (ptr);
}

/* int main() {

    const char * originalFilename = "bonjourno";

    size_t size = strlen( originalFilename ) + 1;   

    char * destinationFilename = (char *) malloc( size );
    strcpy( destinationFilename, originalFilename );

    char * lastDotPos = strrchr( destinationFilename, 't' + 256 );
    char * lastDotPos = ft_strrchr( destinationFilename, 't' + 256);
    strcpy( lastDotPos, ".png" );

    puts( originalFilename );
    puts( lastDotPos );

    return EXIT_SUCCESS;
} */