/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:28:28 by jichew            #+#    #+#             */
/*   Updated: 2023/02/13 18:45:28 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (++i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		++i;
	}
	return (1);
}

void	print_la(char *s1, char *s2, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		write(1, &s1[i], 1);
	if (!check(s1, s2, n))
		write(1, ", ", 2);
}

void	cmpr(char *mycomb, char *comb, int n)
{
	int	m;
	int	j;

	while (1)
	{
		j = n - 1;
		while (mycomb[j] <= comb[j])
		{
			print_la(mycomb, comb, n);
			if (mycomb[j] == comb[j])
				break ;
			mycomb[j]++;
		}
		if (check(comb, mycomb, n))
			break ;
		m = j - 1;
		while (mycomb[m] == comb[m])
			--m;
		mycomb[m]++;
		while (++m < n)
			mycomb[m] = mycomb[m - 1] + 1;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	char	mycomb[10];
	int		i;
	int		j;

	if (n < 1 || n > 9)
		return ;
	i = -1;
	j = n;
	while (++i < 10)
	{
		if (i < n)
		{
			comb[i] = 10 - j + '0';
			mycomb[i] = i + '0';
		}
		else
		{
			comb[i] = 'a';
			mycomb[i] = 'a';
		}
		--j;
	}
	cmpr(mycomb, comb, n);
}

int main(void)
{
	ft_print_combn(5);
}