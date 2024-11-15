/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:25:01 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/15 17:19:57 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int a, size_t c)
{
	unsigned char	*tamp;

	tamp = (unsigned char *)ptr;
	while (c > 0)
	{
		*tamp = (unsigned char)a;
		tamp++;
		c--;
	}
	return (ptr);
}
