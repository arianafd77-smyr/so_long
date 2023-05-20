/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_nl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:53:31 by arforouz          #+#    #+#             */
/*   Updated: 2023/05/20 14:32:41 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_nl(char *s)
{
	char	*new_mem;
	int		size;
	int		i;

	new_mem = NULL;
	size = ft_strlen(s);
    i = 0;
    new_mem = malloc(size + 1);
	if (!(new_mem))
		return (NULL);
	while (s[i] && s[i] != '\n')
	{
        new_mem[i] = s[i];
        i++;
	}
	new_mem[i] = '\0';
	return (new_mem);
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