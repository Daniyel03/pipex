/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:59:03 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 20:52:23 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ucharstr;

	ucharstr = (unsigned char *)str;
	while (n > 0)
	{
		*ucharstr = 0;
		ucharstr++;
		n--;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     char test[5] = "12345";
//     printf("%s\n", test);
//     ft_bzero(test, 1);
//     int i = 0;
//     while (i < sizeof(test))
//     {
//     printf("%c", test[i]);
//     i++;
//     }
//     printf("\n");
// }

// #include <strings.h>
// #include <stdio.h>

// int main(void)
// {
//     char test[5] = "12345";
//     printf("%s\n", test);
//     bzero(test, 1);
//     printf("%s\n", test);
// }
