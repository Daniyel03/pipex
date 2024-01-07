/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:59:43 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:19:06 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)
{
	unsigned char	uchar;
	unsigned char	*ucharstr;

	uchar = (unsigned char)ch;
	ucharstr = (unsigned char *)str;
	while (n > 0)
	{
		*ucharstr = uchar;
		ucharstr++;
		n--;
	}
	return (str);
}

// int main(void)
// {
//     char test[6] = "aaaaaa";
//     ft_memset(test, 'd', 5);
//     printf("%s\n", test);
// }

// In memset, unsigned char is used to ensure that we treat memory 
// as individual bytes, without any interpretation of 
// sign or negative values. It's a way to work with raw binary 
// data at the byte level, ensuring that each byte is treated as
// a positive integer from 0 to 255, which is the full range of 
// values that a single byte can represent.