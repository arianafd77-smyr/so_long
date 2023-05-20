/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:16:24 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 15:03:20 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*subres;

	if (!s)
		return (NULL);
	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	subres = malloc(sizeof(char) * (len + 1));
	if (!subres)
		return (0);
	while (len--)
	{
		subres[i] = s[start];
		i++;
		start++;
	}
	subres[i] = '\0';
	return (subres);
}
/*
int	main()
{
	printf("%s", ft_substr("Amasia", 1, 5));
	return (0);
}*/
