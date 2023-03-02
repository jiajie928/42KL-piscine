/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:18:23 by jichew            #+#    #+#             */
/*   Updated: 2023/02/15 14:13:23 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	if (size == 1)
		return ;
	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		--j;
		++i;
	}
}
