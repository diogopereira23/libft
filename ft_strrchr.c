/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:12:24 by diogoalv          #+#    #+#             */
/*   Updated: 2024/10/31 11:36:08 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = ft_strlen(p);
	if ((unsigned char)c == 0)
		return (p + ft_strlen(p));
	while (i > 0)
	{
		if (p[i - 1] == (unsigned char)c)
		{
			return (p + i - 1);
		}
		i--;
	}
	return (NULL);
}
