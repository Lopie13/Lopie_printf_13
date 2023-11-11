/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:04:31 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:42:51 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (
		c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r');
}

int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	j;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	j = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -j;
		i++;
	}
	res = 0;
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (j * res);
}
/* 
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int result;

        result = argc;
	result = atoi(argv[1]);
	printf("%d \n", result);
	return (0);
} */