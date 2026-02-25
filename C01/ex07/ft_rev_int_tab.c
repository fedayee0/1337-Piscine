/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:10:31 by fdycoding         #+#    #+#             */
/*   Updated: 2026/02/25 14:23:55 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp;

	first = 0;
	last = size - 1;
	while (first < size / 2)
	{
		temp = tab[first];
		tab[first] = tab[last];
		tab[last] = temp;
		first++;
		last--;
	}
}
/*
int main(void)
{
	int	size = 5;
	int	tab[] = {1, 13, 14, 10, 18};
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	{
		printf("%i ", tab[i]);
	}
}
*/