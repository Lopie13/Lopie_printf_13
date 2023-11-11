/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:17 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:37:24 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void) {
    const char *str = "ShiraMelonSoda";
    int target = 'M';

    char *result = ft_strrchr(str, target);

    if (result != NULL) {
        printf("Character '%c' found at position %ld\n", target, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}*/