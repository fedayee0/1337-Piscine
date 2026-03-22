/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdycoding <aminefdy@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:22:58 by fdycoding         #+#    #+#             */
/*   Updated: 2026/03/22 20:28:25 by fdycoding        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strslen(char **strs, int size)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_stycpy(char *rtn, char *sep, int *x)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		rtn[*x] = sep[j];
		j++;
		(*x)++;
	}
}

char	*ft_main(char *rtn, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	x = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			rtn[x] = strs[i][j];
			j++;
			x++;
		}
		j = 0;
		if (!(i == size - 1))
		{
			ft_stycpy(rtn, sep, &x);
		}
		i++;
	}
	rtn[x] = '\0';
	return (rtn);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtn;
	int	i;

	i = 0;
	rtn = (char *)malloc(ft_strslen(strs, size) + (ft_strlen(sep) * size - 1) + 1);
	if (!rtn)
		return (NULL);
	if (size == 0)
	{
		sep[i] = '\0';
		return sep;
	}
	ft_main(rtn, size, strs, sep);
	return (rtn);
}
/*
int main()
{
	char *strs[] = {"Los", "Pollos", "Hermanos"};
	int size = 3;
	char *sep = "-";
	printf("%s\n", ft_strjoin(size, strs, sep));
}
*/

