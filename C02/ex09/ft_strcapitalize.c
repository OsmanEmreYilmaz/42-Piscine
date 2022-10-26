/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:17:38 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/21 17:01:23 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	n;
	int	p;

	n = 0;
	p = 0;
	while (str[n] != '\0')
	{
		if (p == 0 && str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] -= 32;
			p++;
		}
		else if (p > 0 && str[n] >= 'A' && str[n] <= 'Z')
			str[n] += 32;
		else if ((str[n] < '0' || str[n] > '9' && str[n] < 'A')
			|| (str[n] > 'Z' && str[n] < 'a' || str[n] > 'z'))
				p = 0;
		else
			p++;
		n++;
	}	
	return (str);
}
