/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 13:23:38 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 18:36:16 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int x)
{
	if (x <= 126 && x >= 32)
		return (1);
	return (0);
}
/*
int main()
{
	int a = 'a';
	int b = '\t';

	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));

	printf("%d\n", isprint(a));
	printf("%d\n", isprint(b));
}
*/