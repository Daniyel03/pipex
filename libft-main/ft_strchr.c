/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:04:57 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:29:21 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		else
			str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

// int main(void)
// {
//     const char *str = "abcdef";
//     printf("%s\n", ft_strchr(str, 3));
// }