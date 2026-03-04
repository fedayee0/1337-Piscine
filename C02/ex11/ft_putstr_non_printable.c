/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 17:55:47 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/04 17:59:58 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char		c;
	unsigned char	x;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			x = (unsigned char)str[i];
			write(1, "\\", 1);
			c = "0123456789abcdef"[x / 16];
			write(1, &c, 1);
			c = "0123456789abcdef"[x % 16];
			write(1, &c, 1);
		}
		i++;
	}
}
/*
int main()
{
    char    exmp[] = "Hello\nHow are you?";
    ft_putstr_non_printable(exmp);
}
*/
