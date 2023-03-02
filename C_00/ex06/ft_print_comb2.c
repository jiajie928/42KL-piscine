/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:33:14 by jichew            #+#    #+#             */
/*   Updated: 2023/02/13 18:40:34 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nb1, int nb2)
{
	char	ch1;
	char	ch2;
	char	ch3;
	char	ch4;

	ch1 = nb1 / 10 + '0';
	ch2 = nb1 % 10 + '0';
	ch3 = nb2 / 10 + '0';
	ch4 = nb2 % 10 + '0';
	write (1, &ch1, 1);
	write (1, &ch2, 1);
	write (1, " ", 1);
	write (1, &ch3, 1);
	write (1, &ch4, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_print (n1, n2);
			if (! (n1 == 98 && n2 == 99))
				write (1, ", ", 2);
			n2 ++;
		}
		n1 ++;
		n2 = n1 + 1;
	}
}

int main(void)
{
	ft_print_comb2();
}