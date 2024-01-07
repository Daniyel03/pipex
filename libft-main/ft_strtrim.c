/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:09:35 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 21:44:46 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checker(char const c, char const *set)
{
	size_t	s;

	s = 0;
	while (set[s] != '\0')
	{
		if (set[s] == c)
			return (1);
		s++;
	}
	return (0);
}

char	*filler(size_t start, size_t end, char *str, const char *s1)
{
	int	i;

	i = 0;
	while (start <= end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (checker(s1[start], set))
		start++;
	while (checker(s1[end], set))
		end--;
	if (start == ft_strlen(s1))
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	filler(start, end, str, s1);
	return (str);
}

//int main(void)
//{
//    char *str1 = "00d0hallo0d00";
//    char* s = "d0";
//    printf("%s\n", ft_strtrim(str1, s));
//}