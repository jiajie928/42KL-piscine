/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yetay <yetay@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 15:58:39 by yetay             #+#    #+#             */
/*   Updated: 2023/02/11 16:05:13 by yetay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int i, int j)
{
	if (j == 0)
	{
		if (i == 0)
			write(1, "/", 1);
		else if (i == (x - 1))
			write(1, "\\", 1);
		else
			write(1, "*", 1);
	}
	else if (j == (y - 1))
	{
		if (i == 0)
			write(1, "\\", 1);
		else if (i == (x - 1))
			write(1, "/", 1);
		else
			write(1, "*", 1);
	}
	else
	{
		if (i == 0 || i == (x - 1))
			write(1, "*", 1);
		else
			write(1, " ", 1);
	}
}
