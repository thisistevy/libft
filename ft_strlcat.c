/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:24:43 by iung              #+#    #+#             */
/*   Updated: 2022/12/01 14:53:50 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	size_t	k;

	l = 0;
	i = 0;
	k = ft_strlen(dst) + ft_strlen(src);
	if (size == 0 || (size == 0 && !dst))
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[l])
		l++;
	while (src[i] && l < size - 1)
	{
		dst[l] = src[i];
		i++;
		l++;
	}
	dst[l] = '\0';
	return (k);
}
