/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:11:42 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/06 11:44:05 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	char *tamp;

	tamp = NULL;
	while (*str != '\0')
	{
		if (*str == c)
		{
			tamp = (char *)str;
		}
		str++;
	}
	return (tamp);
}