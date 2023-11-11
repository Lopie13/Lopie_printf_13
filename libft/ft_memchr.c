/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:29:17 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:56:51 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char block[] = "ShiraMelonSoda";
    int find = 'W'; // Character to find
    size_t size = strlen(block);

    // Search for the character 'W' in the block of memory
    void *result = memchr(block, find, size);

    if (result != NULL)
    {
        size_t index = (size_t)(result - (void *)block);
        printf("Character '%c' found at index %zu\n", find, index);
    }
    else
    {
        printf("Character '%c' not found.\n", find);
    }

    return 0;
} */