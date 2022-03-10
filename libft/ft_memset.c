/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:53:17 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 11:53:17 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)b;
	while (i < len)
	{
		d[i] = c;
		i++;
	}
	b = (void *)d;
	return (b);
}

/* int main() {

    int array [] = { 54, 85, 20, 63, 21, 77};
    size_t size = sizeof( int ) * 6;
    int length;

    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
	printf( "\n" );

    memset( array, 0, size );
	for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
	printf( "\n" );
	printf( "\n" );

    ft_memset( array, 0, size );
	for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
	printf( "\n" );
    return 0;
} */