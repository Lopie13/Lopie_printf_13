/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmata-al <mmata-al@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:36:16 by mmata-al          #+#    #+#             */
/*   Updated: 2023/10/13 16:57:28 by mmata-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*str;
	const char		*scrr;
	unsigned int	i;	

	scrr = src;
	str = dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		str[i] = scrr[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char shira[] = "ShiraMelonSoda";
	char dest[20];
	ft_memcpy(dest, shira, 14);
	printf("%s", dest);
	return (0);
}*/