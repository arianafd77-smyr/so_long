/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:45:47 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 17:50:13 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (c - 32);
	}
	return (c);
}
/*
int main()
{
	int f = 'a';
	char p = ft_toupper(f);

	printf("%d", ft_toupper(p));
}
*/