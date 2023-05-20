/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforouz <arforouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:06:36 by arforouz          #+#    #+#             */
/*   Updated: 2022/10/11 13:16:49 by arforouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*temp;

	i = 0;
	temp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!temp)
		return (NULL);
	while (s[i])
	{
		temp[i] = f(i, s[i]);
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
/*
int	main(void)
{
	const char	s[] = "Sarzamine ajayeb";
	char		*f;

	printf("%s", ft_strmapi(s, (*f)(2, c)));
	return (0);
}*/
