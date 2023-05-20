/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:48:15 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 17:40:53 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c <= '9' && c >= '0'))
		return (0);
	return (1);
}
/*
int main()
{
	int f = 'a';
	int d = '2';
	int s = '1234';?? // porqeu da cero
	
	printf("%d\n", ft_isdigit(f));
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", ft_isdigit(s));
	
	printf("%d\n", isdigit(f));
	printf("%d\n", isdigit(d));
	printf("%d\n", isdigit(s));
}*/