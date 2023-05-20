/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:39:31 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/10 13:48:21 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}
/*
int	main(void)
{
    char	str1[] = "holas";
    char	str2[] = "holas";

    printf("%s\n", bzero(str1, 3));
	bzero(str2, 3);
    printf("%s\n", str2);
    return (0);
}*/
