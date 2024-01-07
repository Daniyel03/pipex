/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:52:40 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:34:44 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int		i;
	size_t	size;

	size = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	if (!dest || !src)
		return (0);
	if (n != 0)
	{
		while (src[i] != '\0' && --n)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (size);
}

// int main(void)
// {
//     char dest[6];
//     char src[] = "Hello";
//     printf("%zu\n", ft_strlcpy(dest, src, 3));
// }