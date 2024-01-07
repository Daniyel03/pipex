/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dscholz <dscholz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:17:45 by dscholz           #+#    #+#             */
/*   Updated: 2023/09/28 20:55:51 by dscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	nitems, size_t	size)
{
	void	*ptr;

	ptr = malloc(nitems * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, nitems * size);
	return (ptr);
}
