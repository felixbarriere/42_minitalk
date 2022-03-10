/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <fbarrier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:24:20 by fbarrier          #+#    #+#             */
/*   Updated: 2021/12/17 18:27:15 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sys/signal.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

static void	handler(int sig_id)
{
	static char	c = 0;
	static int	j = 7;

	if (sig_id == SIGUSR1)
	{
		c += (1 << j);
		j--;
	}
	else if (sig_id == SIGUSR2)
		j--;
	if (j < 0)
	{
		ft_putchar_fd(c, 1);
		if (!c)
			ft_putchar_fd('\n', 1);
		c = 0;
		j = 7;
	}
}

int	main(void)
{
	if (getpid() != 0)
	{
		ft_putstr_fd("PID Server:", 1);
		ft_putnbr_fd(getpid(), 1);
		ft_putchar_fd('\n', 1);
	}
	else
		ft_putstr_fd("Error\n", 2);
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
