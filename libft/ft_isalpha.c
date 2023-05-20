/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:20:08 by arforouz          #+#    #+#             */
/*   Updated: 2022/09/28 18:19:05 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	unsigned char b[] = "Ariana";//unsigned chaar 
	int f = 'a';
	int d = b;
	int s = 1234;
	
	printf("%d\n", ft_isalpha(f));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", ft_isalpha(s));
	
	 printf("%d\n", isalpha(f));
	printf("%d\n", isalpha(d));
	printf("%d\n", isalpha(s));

}
// https://www.programiz.com/c-programming/library-function/ctype.h/isalpha*/
