/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:35:12 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 09:52:30 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*extract2(char const *str, int start, int i)
{
	int		j;
	char	*extracted_str;

	extracted_str = malloc(sizeof(char) * (i - start + 1));
	j = 0;
	while (j + start < i)
	{
		extracted_str[j] = str[start + j];
		j++;
	}
	extracted_str[j] = '\0';
	return (extracted_str);
}

char	*extract(char const *str, int start, int i)
{
	int		j;
	char	*extracted_str;

	extracted_str = malloc(sizeof(char) * (i - start + 1));
	j = 0;
	while (j + start < i)
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

	split = malloc(sizeof(char *) * (char_count(str, c) + 2));
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
			j++;
			start = i + 1;
		}
		i++;
	}
	split[j] = extract(str, start, i);
	split[j + 1] = NULL;
	return (split);
}

// int	main(void)
// {
// 	char **split;
// 	int i;

// 	split = ft_split("hello/ca/va/bien/et/toi", '/');
// 	i = 0;
// 	while (split[i] != NULL)
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }