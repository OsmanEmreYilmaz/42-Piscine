/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:03:51 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/23 16:11:51 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] || s2[x]) && (x < n))
	{
		if (s1[x] < s2[x])
		{
			return (s1[x] - s2[x]);
		}
		else if (s1[x] > s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int		main()
{
	char s1[] = "abcd";
	char s2[] = "abcda";
	printf("%d\n",ft_strncmp(s1,s2,2));
	printf("%d",strncmp(s1,s2,3));
}
*/
