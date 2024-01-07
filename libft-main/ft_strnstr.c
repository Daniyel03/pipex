/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:00:18 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:39:00 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (search[0] == '\0' || str == search)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		while (str[i + j] != '\0' && (i + j) < n && str[i + j] == search[j])
		{
			j++;
		}
		if (search[j] == '\0')
			return ((char *)str + i);
		i++;
		j = 0;
	}
	return (NULL);
}

/*
int main(void)
{
    char str1[] = "ab ba da";
    char s[] = "d";
    printf("%s\n", ft_strnstr(str1, s, 10));
}*/