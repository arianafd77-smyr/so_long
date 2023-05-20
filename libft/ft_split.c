/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:21:00 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/16 13:26:39 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nwords(char const *s, char c)
{
	int	nwords;
	int	i;

	nwords = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				nwords++;
			i++;
		}
	}
	return (nwords);
}

static void	*freemmory(char **memry, size_t point)
{
	size_t	i;

	i = 0;
	while (i < point)
	{
		free(memry[i]);
		i++;
	}
	free(memry);
	return (NULL);
}

static void	save_words(char **ptr, char *str, char c, int nwords)
{
	int		i;
	char	*aux;

	i = 0;
	if ((nwords > 0) && *str)
	{
		while (i < (nwords - 1))
		{
			aux = ft_strchr(str, c);
			ptr[i++] = ft_substr(str, 0, aux - str);
			if (ptr == 0)
			{
				freemmory(ptr, i);
				return ;
			}
			while (*aux == c)
				aux++;
			str = aux;
		}
		ptr[i++] = ft_strdup(str);
		ptr[i] = 0;
	}
}

char	**ft_split(char const *s, char c)
{
	int		nwords;
	char	**ptr;
	char	*str;
	char	a[2];

	a[0] = c;
	a[1] = '\0';
	if (s)
	{
		str = ft_strtrim(s, a);
		if (str)
		{
			nwords = get_nwords(str, c);
			ptr = ft_calloc((nwords + 1), sizeof(char *));
			if (ptr)
				save_words(ptr, str, c, nwords);
			free(str);
			return (ptr);
		}
	}
	return (0);
}
/*
int	main(void)
{
	const char	s[50] = "hola mundho que tal";
	char		c = 'h';

	char		**v = ft_split(s, c);
	printf("%s", *v);
}*/
