/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:20:53 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 12:42:46 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *) str);
	i = 0;
	while ((*str != '\0') && (i < len))
	{
		j = 0;
		while ((*(str + j)) == (*(to_find + j)) && (i + j < len))
		{
			if (to_find[j + 1] == '\0')
				return ((char *) str);
			j++;
		}
		i++;
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "holqa que tal ";
	char	find[] = "que";
	int		len;

	len = 10;
	printf("%s", ft_strnstr(str, find, len));
	printf("\n%s", strnstr(str, find, len));
	return (0);
}*/