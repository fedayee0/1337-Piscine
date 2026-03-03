/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 16:47:59 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/03 16:49:20 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	ft_strlowcase(str);
	i = 0;
	start = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (start && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			start = 0;
		}
		else
			start = 1;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s", ft_strcapitalize(str));
}
*/
