/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:01:23 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:18:18 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*uchardest;
	const unsigned char	*ucharsrc;
	size_t				i;

	uchardest = (unsigned char *)dest;
	ucharsrc = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	if (uchardest > ucharsrc)
	{
		while (n--)
			uchardest[n] = ucharsrc[n];
		return (dest);
	}
	else
	{
		while (n--)
		{
			uchardest[i] = ucharsrc[i];
			i++;
		}
		return (dest);
	}
}

// int main(void)
// {
//     char str[] = "abcde";
//     ft_memmove(str + 2, str, sizeof(char) * 3);
//     printf("%s\n", str);
// }