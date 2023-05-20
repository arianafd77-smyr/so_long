/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:27:05 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 12:20:25 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)str)[i]) == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	str[] = "http://www.tutorialspoint.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_memchr(str, ch, ft_strlen(str));

	printf ("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}*/
