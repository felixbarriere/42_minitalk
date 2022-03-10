/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:24:18 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/17 18:32:50 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sys/signal.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include "libft/libft.h"

static void	ft_send_sentence_bit_by_bit(char *str, int pid)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		j = 7;
		while (j >= 0)
		{
			if ((str[i] >> j) & 1)
				kill(pid, SIGUSR1);
			else if (!((str[i] >> j) & 1))
				kill(pid, SIGUSR2);
			j--;
			usleep(50);
		}	
		i++;
	}	
}

static int	ft_check(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac != 3 || ft_check(av[1]) == 0)
	{
		ft_putstr_fd("Error!\nInvalid arguments number ", 2);
		ft_putstr_fd("or invalid PID format", 2);
		return (1);
	}
	else if (ac == 3 && (ft_atoi(av[1]) > 4294967295))
	{
		ft_putstr_fd("Incorrect PID.\n", 2);
		return (1);
	}
	else
		ft_send_sentence_bit_by_bit(av[2], ft_atoi(av[1]));
	return (0);
}
