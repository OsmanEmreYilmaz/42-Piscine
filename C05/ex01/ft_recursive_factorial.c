/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 11:39:55 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/24 12:06:33 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb *= ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	printf("-6 = %d (0)\n", ft_recursive_factorial(-6));
	printf(" 0 = %d (1)\n", ft_recursive_factorial(0));
	printf(" 1 = %d (1)\n", ft_recursive_factorial(1));
	printf(" 2 = %d (2)\n", ft_recursive_factorial(2));
	printf(" 3 = %d (6)\n", ft_recursive_factorial(3));
	printf(" 4 = %d (24)\n", ft_recursive_factorial(4));
}*/
