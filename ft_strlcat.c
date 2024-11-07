/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:08:25 by diogoalv          #+#    #+#             */
/*   Updated: 2024/10/30 03:39:27 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;
	size_t	lsrc;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	ldest = ft_strlen(dst);
	lsrc = ft_strlen(src);
	j = ldest;
	if (ldest >= size)
		return (size + lsrc);
	while (i < size - 1 - ldest && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ldest + lsrc);
}
