/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:10:02 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:16:10 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*uchardest;
	const unsigned char	*ucharsrc;
	size_t				i;

	i = 0;
	if (!dest && !src)
		return (0);
	uchardest = (unsigned char *)dest;
	ucharsrc = (const unsigned char *)src;
	while (n--)
	{
		uchardest[i] = ucharsrc[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char str[] = "abcde";
//     ft_memcpy(str + 2, str, sizeof(char) * 3);
//     printf("%s\n", str);
// }