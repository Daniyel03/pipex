/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:12:24 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:33:37 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (n <= ft_strlen(dest))
		return (n + ft_strlen(src));
	i = ft_strlen(dest);
	while (src[j] != '\0' && i < --n)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}

// int main(void)
// {
//     char dest[] = "abc";
//     char src[] = "Hello";
//     printf("%zu\n", ft_strlcat(dest, src, 5));
// }