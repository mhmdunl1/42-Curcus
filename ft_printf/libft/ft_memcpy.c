/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:33:30 by munal             #+#    #+#             */
/*   Updated: 2022/02/14 12:30:26 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*src2;
	size_t	i;

	i = 0;
	str = (char *)dest;
	src2 = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		str[i] = src2[i];
		i++;
	}
	return (dest);
}
