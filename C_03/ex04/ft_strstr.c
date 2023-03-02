/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:30:29 by jichew            #+#    #+#             */
/*   Updated: 2023/02/21 14:21:44 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	fail;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			fail = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					fail++;
				i++;
			}
			if (fail == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
