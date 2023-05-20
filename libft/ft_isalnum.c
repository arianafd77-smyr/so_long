/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:00:42 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/10 14:23:46 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		|| (c <= '9' && c >= '0'))
		return (1);
	return (0);
}

/*
int main()
{
	char j = 'a';
	int f = isalnum(j);
	int d = '#';
	int s = '3';
	
	printf("%d\n", ft_isalnum(f));
	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(s));
	
	printf("%d\n", isalnum(f));
	printf("%d\n", isalnum(d));
	printf("%d\n", isalnum(s));
}*/