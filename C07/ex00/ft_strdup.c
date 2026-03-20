/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 19:09:06 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/20 19:09:10 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strdup(char *src)
{
	char	*cpy;
	int	i;

	while (src[i])
		i++;
	cpy = malloc(i+1);
	if (!cpy) 
		return NULL;
	i = 0;
	while (src[i++])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}