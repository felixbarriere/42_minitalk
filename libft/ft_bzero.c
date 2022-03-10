/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:26:28 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 11:26:28 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}

/* int main() {

    int array [] = { 54, 85, 20, 63, 21, 77};
    size_t size = sizeof( int ) * 6;
    int length;

    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    ft_memset( array, 0, size );
    memset( array, 0, size );
    ft_bzero( array, size );

    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    return 0;
} */