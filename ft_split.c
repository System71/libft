/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:35:12 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 15:06:50 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*extract(char const *s, int start, int i)
{
	int		j;
	char	*extracted_str;

	extracted_str = malloc(sizeof(char) * (i - start + 1));
	j = 0;
	while (j + start < i)
	{
		extracted_str[j] = s[start + j];
		j++;
	}
	extracted_str[j] = '\0';
	return (extracted_str);
}

int	char_count(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		if (*s == c)
			counter++;
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		start;
	int		i;
	int		j;

	split = malloc(sizeof(char *) * (char_count(s, c) + 2));
	if (split == NULL)
		return (NULL);
	start = 0;
	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			split[j] = extract(s, start, i);
			j++;
			start = i + 1;
		}
		i++;
	}
	split[j] = extract(s, start, i);
	split[j + 1] = NULL;
	return (split);
}
