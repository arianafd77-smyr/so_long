/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:36:32 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 11:32:44 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

/*
int	main()
{makigas listas c
	const char	str[] = "teste";
	int 		c = '\0';
	char		*ret; //str is a pointer to the first character in string

	ret = ft_strchr(str, c);

	printf ("String after |%c| is - |%s|\n", c, ret);
	return (0);
}*/