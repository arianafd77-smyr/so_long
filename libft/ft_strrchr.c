/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:07:34 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 12:11:12 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		len;

	len = ft_strlen((char *)str) + 1;
	while (len--)
	{
		if (str[len] == (char) c)
			return ((char *)&str[len]);
	}
	return (0);
}
/*
int	main()
{
	//const char	str[] = "http://www.tutorialspoint.com";
	//int			ch = 't';
	//char	*ret; //str is a pointer to the first character in string
	char	src[] = "abbbbbbb";
	int		d =  'a';

	printf ("%s|\n", ft_strrchr(src, d));
	return (0);
}*/
