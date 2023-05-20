/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:37:30 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 12:32:29 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*change;

	i = 0;
	change = str;
	while (i < n)
	{
		change[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "memset set a whole block of memory to a particular value ";

	ft_memset (str + 7, '$', 5);
	printf ("%s",str);
}*/
