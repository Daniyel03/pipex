/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:50:24 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:08:46 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizer(int n)
{
	int	nn;

	nn = n;
	if (n < 0)
		nn = -nn;
	return (nn);
}

int	ft_numlen(long res)
{
	int	len;

	len = 1;
	if (res == -2147483648)
		return (10);
	while (res >= 10)
	{
		res /= 10;
		len++;
	}
	return (len);
}

char	*sizernicer(int n, int size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (size + (n < 0) + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[size + 1] = '\0';
	else
		str[size] = '\0';
	return (str);
}

char	*swag(char *str)
{
	int			i;
	const char	*min;

	min = "-2147483648";
	i = 0;
	while (min[i] != '\0')
	{
		str[i] = min[i];
		i++;
	}
	str[11] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		size;
	int		res;
	char	*str;

	res = sizer(n);
	size = ft_numlen(res);
	str = sizernicer(n, size);
	if (!str)
		return (NULL);
	if (res == -2147483648)
		return (swag(str));
	if (n < 0)
		size = size + 1;
	while (size--)
	{
		str[size] = (res % 10) + '0';
		res /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main(void)
// {
//     int d = -2147483648;
//     printf("%s\n", ft_itoa(d));
// }