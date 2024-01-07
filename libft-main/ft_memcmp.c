/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 22:25:07 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:14:57 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*ucharstr1;	
	const unsigned char	*ucharstr2;

	ucharstr2 = (const unsigned char *)str2;
	ucharstr1 = (const unsigned char *)str1;
	if (n == 0)
		return (0);
	if (*ucharstr1 != *ucharstr2)
	{
		if (*ucharstr1 < *ucharstr2)
			return (-1);
		else
			return (1);
	}
	return (ft_memcmp(ucharstr1 + 1, ucharstr2 + 1, n - 1));
}

// int main(void)
// {
//     char str1[] = "abe";
//     char str2[] = "abd";

//     printf("%d\n", ft_memcmp(str1, str2, 3));
// }