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

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	if (argc != 3)
	{
		ft_printf("Uso: ./client [PID] [mensagem]\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
}
