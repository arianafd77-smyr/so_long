/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:50:47 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 17:45:38 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	len = ft_strlen((char *)src);
	while (dst[i] && i < dstsize)
		i++;
	j = 0;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j != 0)
		dst[i + j] = '\0';
	return (len + i);
}
/*
int	main(void)
{
	char d[8] = "tomorrow";
	char s[] = "tomorrow";

	//printf("%u\n%s", ft_strlcat(d, s, 3), d);
	printf("%lu\n%s", ft_strlcat(d, s, 3), d);
	return (0);
}*/