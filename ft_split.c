/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:35:12 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 09:15:13 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	extract(char const *str, int start, int i)
{
	int		j;
	char	*extracted_str;

	extracted_str = malloc(sizeof(char) * (i - start + 1));
	j = 0;
	while (j < i)
	{
		extracted_str[j] = str[start + j];
		j++;
	}
	extracted_str[j] = '\0';
	return (extracted_str);
}

int	char_count(char const *str, char c)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		if (*str == c)
			counter++;
		str++;
	}
	return (counter);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		start;
	int		i;
	int		counter;
	int		j;

	counter = char_count(str, c);
	split = malloc(sizeof(char *) * (counter + 2));
	if (split == NULL)
		return (NULL);
	start = 0;
	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			split[j] = extract(str, start, i);
			start = i + 1;
		}
		i++;
	}
	return (split);
}

int	main(void)
{
	char **split;
	int i;

	split = ft_split("hello ca va", ' ');
	i = 0;
	while (split[i] != '\0')
	{
		printf("%s\n", split[i]);
		i++;
	}
}