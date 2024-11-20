/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:47:10 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/20 18:17:44 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	size_t			i;
	unsigned char	myfirst;
	unsigned char	mysecond;

	i = 0;
	while (i < length)
	{
		myfirst = (unsigned char)first[i];
		mysecond = (unsigned char)second[i];
		if (myfirst != mysecond || myfirst == '\0' || mysecond == '\0')
			return (myfirst - mysecond);
		i++;
	}
	return (0);
}
