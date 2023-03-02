/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 03:10:22 by jichew            #+#    #+#             */
/*   Updated: 2023/02/13 18:39:37 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char n1, char n2, char n3)
{
	write (1, &n1, 1);
	write (1, &n2, 1);
	write (1, &n3, 1);
	if (n1 == '7' && n2 == '8' && n3 == '9')
		return ;
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		while (n2 <= '8')
		{
			while (n3 <= '9')
			{
				print(n1, n2, n3);
				n3 ++;
			}
			n2 ++;
			n3 = n2 + 1;
		}
		n1 ++;
		n2 = n1 + 1;
		n3 = n2 + 1;
	}
}

int main(void)
{
	ft_print_comb();
}