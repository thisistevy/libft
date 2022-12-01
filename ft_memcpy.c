/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:49 by iung              #+#    #+#             */
/*   Updated: 2022/12/01 14:40:26 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cast;
	char	*castagain;
	size_t	i;

	i = 0;
	cast = (char *)dest;
	castagain = (char *)src;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		cast[i] = castagain[i];
		i++;
	}
	return (cast);
}
