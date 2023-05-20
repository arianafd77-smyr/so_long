/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_nl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:25:16 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 14:28:55 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlcpynnl(char *dst, char *src, int len)
{
	int	src_len;
	int	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (len == 0)
	{
		return (src_len);
	}
	while (i < len - 1 && *src && *src != '\n')
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return (src_len);
}

char	*ft_strjoin_nl(char *s1, char *s2)
{
	char	*new_mem;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL || s2 == NULL)
	{
		new_mem = ft_strdup(s1);
		free(s1);
		free(s2);
		return (new_mem);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_mem = malloc(s1_len + s2_len);
	if (!(new_mem))
		return (NULL);
	ft_strlcpynnl(new_mem, s1, s1_len + 1);
	ft_strlcpynnl(new_mem + s1_len, s2, s2_len + 1);
	free(s1);
	free(s2);
	return (new_mem);
}