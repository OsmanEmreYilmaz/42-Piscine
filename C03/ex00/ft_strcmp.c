/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:42:21 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/22 13:18:48 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n] && (s1[n] != '\0') && (s2[n] != '\0'))
		n++;
	return (s1[n] - s2[n]);
}
/*
#include <stdio.h>
#include <string.h>

int        main()
{
    char s1[] = "abcd";
    char s2[] = "abcda";
    printf("%d\n",ft_strcmp(s1,s2));
    printf("%d",strcmp(s1,s2));
}
*/
