/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:36:40 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:48:56 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	length(int n)
{
	long	nb;
	int		i;

	nb = n;
	i = 0;
	if (nb <= 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;
	long	j;

	i = length(n);
	result = ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (NULL);
	j = n;
	result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		j = (-j);
	}
	i--;
	while (j > 0)
	{
		result[i] = (j % 10) + '0';
		j /= 10;
		i--;
	}
	return (result);
}
/* #include <stdio.h>
#include <stdlib.h>

int main() {
    int num = -0; // Replace with the integer you want to convert

    char *str = ft_itoa(num);
    if (str) {
        printf("Integer: %d\n", num);
        printf("String: %s\n", str);
        free(str); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
} */
