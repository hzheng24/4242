/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzheng <hzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:03:43 by hzheng            #+#    #+#             */
/*   Updated: 2020/12/14 15:18:21 by hzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int inv;
	int p;

	inv = size - 1;
	p = 0;
	while (inv >= p)
	{
		c = tab[inv];
		tab[inv] = tab[p];
		tab[p] = c;
		p++;
		inv--;
	}
}

int main()
{
	int tab[5] = {5, 2, 1, 6, 4};
	ft_rev_int_tab(tab, 5);
	printf("{%d, %d, %d, %d, %d}", tab[0], tab [1], tab[2], tab[3], tab[4]);
	return(0);
}