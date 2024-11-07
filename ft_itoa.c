/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogoalv <diogoalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:50:52 by diogoalv          #+#    #+#             */
/*   Updated: 2024/10/30 03:37:42 by diogoalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size_itoa(int n)
{
	int		len;
	long	a;

	a = n;
	len = 0;
	if (a == 0)
	{
		len++;
		return (len);
	}
	if (a < 0)
	{
		len++;
		a = -a;
	}
	while (a > 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = n;
	len = ft_size_itoa(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	if (n == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[len--] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	return (str);
}
