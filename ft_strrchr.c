/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:25:03 by iung              #+#    #+#             */
/*   Updated: 2022/11/30 18:25:05 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*cast;

	i = ft_strlen(s);
	cast = (char *)s;
	if ((unsigned char)c > 127)
		return (cast);
	while (i > 0)
	{
		if ((unsigned char)cast[i] == (unsigned char)c)
			return (&cast[i]);
		i--;
	}
	if ((unsigned char)cast[i] == (unsigned char)c)
		return (&cast[i]);
	return (NULL);
}
