/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:32:38 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:03:58 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int main(void)
{
    char src[] = "ShiraMelonSoda";
    char dest[20];
    unsigned int size = 10;

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Result: %s\n", dest);
    printf("Return Value: %u\n", result);

    return 0;
}*/