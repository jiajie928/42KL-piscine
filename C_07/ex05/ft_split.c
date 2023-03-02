/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:50:54 by jichew            #+#    #+#             */
/*   Updated: 2023/02/28 15:05:05 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	get_num_row(char *str, char *sep)
{
	int	i;
	int	row;

	i = 0;
	row = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
			++i;
	}
	return (row + 1);
}

int	get_num_col(char *str, char *sep, int curr_row)
{
	int	i;
	int	k;
	int	row;

	i = 0;
	row = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
		{
			if (row == curr_row)
				++k;
			++i;
		}
		if (row == curr_row)
			break ;
	}
	return (k + 1);
}

void	ft_copy(char *s, char *str, char *sep, int curr_row)
{
	int	i;
	int	k;
	int	row;

	i = 0;
	row = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			++i;
		if (str[i] && !is_sep(str[i], sep))
			row++;
		while (str[i] && !is_sep(str[i], sep))
		{
			if (row == curr_row)
				s[k++] = str[i];
			++i;
		}
		s[k] = 0;
		if (row == curr_row)
			return ;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	arr = malloc(sizeof(char *) * get_num_row(str, charset));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < get_num_row(str, charset) - 1)
	{
		arr[i] = malloc(sizeof(char) * get_num_col(str, charset, i + 1));
		if (!arr[i])
			return (NULL);
		ft_copy(arr[i], str, charset, i + 1);
		++i;
	}
	arr[i] = 0;
	return (arr);
}
