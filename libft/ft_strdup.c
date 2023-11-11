/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:31:14 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 17:02:31 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dupstr;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dupstr = ft_calloc(i + 1, sizeof(char));
	if (!dupstr)
		return (NULL);
	dupstr[i] = '\0';
	i--;
	while (i >= 0)
	{
		dupstr[i] = src[i];
		i--;
	}
	return (dupstr);
}
/* 
#include <stdio.h>

int main(void)
{
	char src[] = "Shira Melon Soda";
	char *destt = ft_strdup(src);

	printf("%s", destt);
	return (0);
} */