/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:24:39 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:40:30 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*sol;

	sol = (NULL);
	while (*str != '\0')
	{
		if (*str == (char)c)
			sol = (char *)str;
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (sol);
}

/*
int main(void)
{
    const char *str = "abcdecf";
    printf("%s\n", ft_strrchr(str, 'y'));
}*/