/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:39:24 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:37:03 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen((char *)to_find) == 0)
		return ((char *)str);
	while (str[i] && (i < (int)n || (int)n == -1))
	{
		j = 0;
		while (str[i + j] == to_find[j] 
			&& str[i + j]
			&& ((i + j) < (int)n || (int)n == -1))
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
/* 
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n);

int main(void)
{
    const char *haystack = "MZIRIBMZIRIBMZE123";
    const char *needle1 = "MZIRIBMZE";
    const char *needle2 = "Melon";
    const char *needle3 = "soda";

    char *result1 = ft_strnstr(haystack, needle1, 10);
    char *result2 = ft_strnstr(haystack, needle2, 30);
    char *result3 = ft_strnstr(haystack, needle3, 30);

    printf("Result 1: %s\n", result1 ? result1 : "Not found");
    printf("Result 2: %s\n", result2 ? result2 : "Not found");
    printf("Result 3: %s\n", result3 ? result3 : "Not found");

    return 0;
} */
