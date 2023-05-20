/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:00:49 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/06 19:15:22 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (dest);
	if (dest <= src)
	{
		ft_memcpy(dest, src, n);
		return (dest);
	}
	while (n--)
	{
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	return (dest);
}
/*
int	main ()
{
	const char src[40] = "http.wwws lorem ipsim asasd";
	char dest[40] = "the dest is large";

	//printf("%s\n", memmove(dest, src, 30));
	printf("%s", ft_memmove(((void *)0), ((void *)0), 5));
	return (0);
}*/
