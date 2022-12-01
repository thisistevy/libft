/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:54:51 by iung              #+#    #+#             */
/*   Updated: 2022/12/01 14:41:02 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cast;
	char	*castagain;
	size_t	i;

	i = 0;
	cast = (char *)dest;
	castagain = (char *)src;
	if (!src && !dest)
		return (NULL);
	if (cast > castagain)
		while (n--)
			cast[n] = castagain[n];
	else
	{
		while (i < n)
		{
			cast[i] = castagain[i];
			i++;
		}
	}
	return (cast);
}
