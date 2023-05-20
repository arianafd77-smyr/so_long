/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:53:31 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 12:49:56 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s)
{
	char	*c;

	c = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (c == NULL)
		return (NULL);
	return (ft_strcpy(c, s));
}
/*
int	main()
{
	char	*str = "Hollywood";
	char	*result;
	result = ft_strdup(str);
	printf ("The string : %s", result);
	return (0);
}*/