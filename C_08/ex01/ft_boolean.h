/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jichew <jichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:15:55 by jichew            #+#    #+#             */
/*   Updated: 2023/03/01 18:24:11 by jichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments .\n"
# define ODD_MSG  "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(x) (X % 2 == 0)

#endif