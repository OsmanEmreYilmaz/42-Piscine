/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:02:25 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/21 18:38:36 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	len;

	n = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[n] && (n < (size - 1)))
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (len);
}
