/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:53:33 by diogoalv          #+#    #+#             */
/*   Updated: 2024/10/30 03:00:55 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		find;

	find = 0;
	p = (char *)s;
	if (*p == (unsigned char)c)
		find = 1;
	else
	{
		while (*p != (unsigned char)c && *p != '\0')
		{
			p++;
			if (*p == (unsigned char)c)
				find = 1;
		}
	}
	if (find == 1)
		return (p);
	else
		return (0);
}
