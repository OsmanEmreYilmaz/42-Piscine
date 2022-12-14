/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:52:39 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/19 17:56:42 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *dizi)
{
	int	i;

	i = 0;
	while (dizi[i] != '\0')
	{
		dest[i] = dizi[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
