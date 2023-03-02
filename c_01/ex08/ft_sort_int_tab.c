/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:32:01 by jichew            #+#    #+#             */
/*   Updated: 2023/02/15 14:14:07 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = -1;
	while (++start < size)
	{
		end = size;
		while (--end > start)
		{
			if (tab[start] > tab[end])
			{
				temp = tab[end];
				tab[end] = tab [start];
				tab [start] = temp;
			}
		}
	}
}
