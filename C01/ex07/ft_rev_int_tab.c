/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osyilmaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:36:53 by osyilmaz          #+#    #+#             */
/*   Updated: 2022/02/19 13:10:35 by osyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	mi;
	int	i;

	i = 0;
	mi = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[mi];
		tab[mi] = swap;
		i++;
		mi--;
	}
}
