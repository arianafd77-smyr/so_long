/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 13:11:07 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 17:40:38 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
		return (1);
	return (0);
}
/*
int main()
{
	int f = '+';
	//int j = 'a';

	printf("%d", ft_isascii(f));
	printf("%d", ft_isascii("ñ"[0]));
	//entre comiilas es un string asi decimos que en un
	//string que coga el primer character

	printf("%d", isascii(f));
	printf("%d", isascii("ñ"[0]));
 }*/