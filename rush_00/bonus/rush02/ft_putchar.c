/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-amee <mal-amee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:29:20 by mal-amee          #+#    #+#             */
/*   Updated: 2023/02/12 13:25:40 by maiman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int j)
{
	if (j == 0)
	{
		if (i == 0)
			write(1, "A", 1);
		else if (i == (x - 1))
			write(1, "A", 1);
		else
			write(1, "B", 1);
	}
	else if (j == (y - 1))
	{
		if (i == 0)
			write(1, "C", 1);
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
