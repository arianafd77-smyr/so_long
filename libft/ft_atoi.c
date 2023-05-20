/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:03:39 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/10 13:40:37 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	ret;

	ret = 0;
	is_negative = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_negative = -1;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		ret = (ret * 10) + (*str - '0');
		str++;
	}
	return (ret * is_negative);
}
/*
int	main()
{
	int	res = ft_atoi("\r10");

	printf ("%d", res);
}*/
