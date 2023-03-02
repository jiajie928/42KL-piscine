/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:59:19 by jichew            #+#    #+#             */
/*   Updated: 2023/02/21 14:05:15 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !is_alpha(str[i]))
			++i;
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		if (i > 0 && is_number(str[i - 1]) && is_alpha(str[i]))
			str[i] += 32;
		else
			++i;
		while (str[i] && is_alpha(str[i]))
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
			++i;
		}
	}
	return (str);
}
