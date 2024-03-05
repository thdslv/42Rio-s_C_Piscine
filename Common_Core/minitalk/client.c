/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thda-sil <thda-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:04:54 by thda-sil          #+#    #+#             */
/*   Updated: 2024/02/05 15:04:58 by thda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	mhandler(int signum)
{
	if (signum == SIGUSR1)
		ft_printf("Message received!\n");
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	if (argc != 3)
	{
		ft_printf("Usage: ./client [PID] [menssage]\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	if (PID < 0 || !message)
	{
		ft_printf("ERROR: invalid arguments\n");
		return (1);
	}
	signal(SIGUSR1, &mhandler);
	send_message(pid, str);
	return (0);
}
