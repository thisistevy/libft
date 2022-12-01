/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:33:10 by iung              #+#    #+#             */
/*   Updated: 2022/11/23 15:49:32 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cast;

	i = 0;
	j = 0;
	if (!big && len == 0)
		return (NULL);
	cast = (char *)big;
	if (little[j] == '\0')
		return (cast);
	while (cast[i] != '\0' && i < len)
	{
		while (cast[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return (&cast[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
