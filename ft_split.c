/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:05:24 by iung              #+#    #+#             */
/*   Updated: 2022/11/22 23:13:07 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] == c)
			word = 0;
		if (s[i] != c && word == 0)
		{
			count++;
			word = 1;
		}
		i++;
	}
	return (count);
}

static int	ft_countletter(char const *s, char c, int j)
{
	int	i;

	i = 0;
	while (s[j] && s[j] != c)
	{
		j++;
		i++;
	}
	return (i);
}

static void	ft_freetab(char **tab, int i)
{
	while (i-- > 0)
		free(tab[i]);
	free(*tab);
	*tab = NULL;
}

static char	**ft_fill(char **tab, const char *s, char c)
{
	int	i;
	int	j;
	int	l;
	int	k;

	i = 0;
	j = 0;
	while (i < ft_countword(s, c))
	{
		l = 0;
		while (s[j] == c)
			j++;
		k = ft_countletter(s, c, j);
		tab[i] = ft_calloc(sizeof(char), (k + 1));
		if (!tab[i])
			ft_freetab(&tab[i], i);
		while (l < k)
		{
			tab[i][l] = s[j];
			j++;
			l++;
		}
		i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = ft_calloc(sizeof(char *), (ft_countword(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill(tab, s, c);
	return (tab);
}
