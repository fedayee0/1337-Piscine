/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 15:49:08 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/14 15:49:18 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	pwr;

	pwr = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			pwr = pwr * nb;
			power--;
		}
	}
	return (pwr);
}
