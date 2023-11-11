/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:02:19 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:03:46 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned char	*str;
	size_t			i;
	size_t			j;
	size_t			total;

	str = (unsigned char *)src;
	j = 0;
	i = 0;
	while (dest[j] != '\0' && j < size)
		j++;
	while ((j + i + 1) < size && str[i])
	{
		dest[j + i] = str[i];
		i++;
	}
	if (j != size)
		dest[j + i] = '\0';
	total = ft_strlen(src);
	return (j + total);
}

/* #include <stdio.h>

int main() {
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t size = sizeof(dest);

    size_t result = strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
} */