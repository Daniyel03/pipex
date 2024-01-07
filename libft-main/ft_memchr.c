/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:27:30 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:12:21 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned char		*ucharstr;

	ucharstr = (unsigned char *)str;
	while (n--)
	{
		if (*ucharstr == (unsigned char)ch)
			return (ucharstr);
		ucharstr++;
	}
	return (NULL);
}

/*
void *ft_memchr(const void *str, int ch, size_t n)
{
    unsigned char *ucharstr;

    ucharstr = (unsigned char *)str;

    while (*ucharstr != '\0' && n--)
    {
        if(*ucharstr != (unsigned char)ch)
            ucharstr++;
        else
            return ucharstr;
    }
    return NULL;
}  

// int main(void)
// {
//     const char str[6] = "abcdef";
//         printf("%s\n", (char *)ft_memchr(str, 'b', 1));
// }
*/