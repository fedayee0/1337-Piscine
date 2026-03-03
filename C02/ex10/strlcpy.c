/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:19:25 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/03 17:21:11 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int main(void)
{
    char    text[] = "Man Up's";
    char    dest[sizeof(text)];
    unsigned int    nb = 7;
    unsigned int len = ft_strlcpy(dest, text, nb);
    printf("Len : %i\nDest : %s", len, dest);
}
*/
