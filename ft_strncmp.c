/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:47:10 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/06 13:34:32 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strncmp(const char *first, const char *second, size_t length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (first[i] != second[i])
		{
			return (first[i] - second[i]);
		}
		i++;
	}
	return (0);
}