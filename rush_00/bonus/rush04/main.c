/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:30:26 by maiman-m          #+#    #+#             */
/*   Updated: 2023/02/12 17:31:12 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	check(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < '0' || s1[i] > '9')
			return (0);
		++i;
	}
		i = 0;
	while (s2[i])
	{
		if (s2[i] < '0' || s2[i] > '9')
			return (0);
		++i;
	}
	return (1);
}

int	ft_atoi(char *str)
{
	long	total;
	int		i;

	total = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (i > 9)
			return (-1);
		total = total * 10 + str[i] - '0';
		if (total > 2147483647)
			return (-1);
		++i;
	}
	return (total);
}

int	main(int ac, char **av)
{
	int	n1;
	int	n2;

	if (ac != 3 || !check(av[1], av[2]))
	{
		write(1, "WRONG ARGUMENTS\n", 16);
		return (1);
	}
	n1 = ft_atoi(av[1]);
	n2 = ft_atoi(av[2]);
	if (n1 == -1 || n2 == -1)
	{
		write(1, "ERROR NUMBER\n", 14);
		return (1);
	}
	rush(n1, n2);
	return (0);
}
