/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:11:34 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:57:02 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/* 
#include <stdio.h>

int main(void)
{
    char str1[] = "ShiraMelonSoda";
    char str2[] = "ShiraMelonWater";
    int n = 13; // Number of bytes to compare

    int result = ft_memcmp(str1, str2, n);

    if (result == 0)
        printf("The first %d bytes of str1 and str2 are equal.\n", n);
    else if (result < 0)
        printf("str1 is less than str2 in the first %d bytes.\n", n);
    else
        printf("str2 is less than str1 in the first %d bytes.\n", n);

    return 0;
} */