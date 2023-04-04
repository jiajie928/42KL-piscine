/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiman-m <maiman-m@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:30:14 by maiman-m          #+#    #+#             */
/*   Updated: 2023/02/11 15:57:54 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int j)
{
	if (j == 0 || j == (y - 1))
	{
		if (i == 0)
			write(1, "A", 1);
		else if (i == (x - 1))
			write(1, "C", 1);
		else
			write(1, "B", 1);
	}
	else
	{
		if (i == 0 || i == (x - 1))
			write(1, "B", 1);
		else
			write(1, " ", 1);
	}
}
