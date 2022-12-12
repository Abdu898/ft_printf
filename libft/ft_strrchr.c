/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:37:20 by ashahin           #+#    #+#             */
/*   Updated: 2022/06/22 18:37:20 by ashahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Locate last occurrence of character in string
Returns a pointer to the last occurrence of character in the C string str.

The terminating null-character is considered part of the C string.
 Therefore, it can also be located to retrieve a pointer to the end of a string.
 error t + 256????
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char) c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
