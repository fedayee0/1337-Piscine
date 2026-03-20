/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 19:28:10 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/20 19:53:53 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	cpy_min;
	int	*range;

	i = 0;
	cpy_min = min;
	if (min >= max)
		return (NULL);
	i = 0;
	while (cpy_min < max)
	{
		i++;
		cpy_min++;
	}
	range = malloc(sizeof(int) * i);
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int main()
{
	int min = 13;
	int max = 37;
	int *arr = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%i  ", arr[i]);
	}
}
*/
