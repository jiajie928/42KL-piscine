/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:00:36 by jichew            #+#    #+#             */
/*   Updated: 2023/02/21 14:00:36 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	not_printable(char c)
{
	return (c < 32 || c > 126);
}

void	print_hex(int ch)
{
	char	*base;

	base = "0123456789abcdef";
	if (ch > 16)
	{
		print_hex(ch / 16);
		print_hex(ch % 16);
	}
	else
		write(1, &base[ch], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (not_printable(str[i]))
		{
			write(1, "\\", 1);
			if (str[i] < 17)
				write(1, "0", 1);
			print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
	}
}
