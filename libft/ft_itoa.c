/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:12:56 by fbarrier          #+#    #+#             */
/*   Updated: 2021/11/23 18:12:56 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_nbrlen(long n)
{
	int		i;
	long	nb;

	nb = n;
	i = 0;
	if (n < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	i++;
	return (i);
}

static void	ft_putnbr2(char *str, int count, int nt)
{
	long long	n;

	n = nt;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[count] = '\0';
	while (1)
	{
		str[count - 1] = n % 10 + '0';
		n = n / 10;
		if (!n)
			break ;
		count--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	nb;

	nb = n;
	count = ft_nbrlen(nb);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!(str))
		return (NULL);
	ft_putnbr2(str, count, n);
	return (str);
}

/* int main()
{
    int		arg;
s
	arg = -2147483648LL;
	printf("%s", ft_itoa(arg));
} */