/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:36:55 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:36:42 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i != n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char s1[] = "ShiraMelonSoda";
	char s2[] = "ShiraMelonWater";
	int	n = 10;
	int returnT = ft_strncmp(s1, s2, n);

	if(returnT == 0)
	printf("sao iguais %i", returnT);
	else if (returnT == 1)
	printf("o s1 e maior que o s2 %i", returnT);
	else 
	printf("o s2 e maior que s1 %i", returnT);
	return(0);
}*/