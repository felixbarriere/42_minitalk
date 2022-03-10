/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:30:08 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 13:30:08 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dst;
	src2 = (char *)src;
	i = -1;
	if (!dst && !src)
		return (NULL);
	if (dest2 > src2)
		while ((int)(--len) >= 0)
			dest2[len] = src2[len];
	else
		while (++i < len)
			dest2[i] = src2[i];
	return (dst);
}

/* int main() {

    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };
	int *data2 = NULL;

    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data2[i] );
    }
    puts( "" ); 

    void * source = (void *) data2;
    void * destination = (void *) ( data2 + 1 );
    size_t size = ELEMENT_COUNT * sizeof( int );
	size_t size = ELEMENT_COUNT * sizeof( int );;
    memmove( destination, source, size );
    ft_memmove( destination, source, size );

    data2[0] = 10;

    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data2[i] );
    }
    puts( "" );  

    return EXIT_SUCCESS;
} */