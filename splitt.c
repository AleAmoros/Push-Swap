/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamoros- <aamoros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:40:50 by aamoros-          #+#    #+#             */
/*   Updated: 2024/08/23 20:56:43 by aamoros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, const char *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		word[j] = s[i - len];
		j++;
		len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split2(char **str, const char *s, char c, int words)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = 0;
	while (j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		str[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!str)
			return (0);
		ft_putword(str[j], s, i, len);
		len = 0;
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		words;

	if (!s)
		return (0);
	words = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (!str)
		return (0);
	ft_split2(str, s, c, words);
	return (str);
}

bool	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}
