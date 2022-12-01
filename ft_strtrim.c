/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:25:10 by iung              #+#    #+#             */
/*   Updated: 2022/11/30 18:25:12 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkav(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (s1[i])
	{
		k = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				k = 1;
			j++;
		}
		i++;
		j = 0;
		if (k == 0)
			return (i - 1);
	}
	return (i - 1);
}

static int	ft_checkar(char const *s1, char const *set, int v)
{
	int	i;
	int	j;
	int	k;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (i > 0 && i >= v)
	{
		k = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				k = 1;
			j++;
		}
		if (k == 0)
			return (i + 1);
		i--;
		j = 0;
	}
	return (i + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (ft_strncmp(s1, "", 1) == 0)
		return (ft_strdup(""));
	i = ft_checkav(s1, set);
	j = ft_checkar(s1, set, i);
	k = 0;
	len = ft_checkar(s1, set, i) - ft_checkav(s1, set);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
