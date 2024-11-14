/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:34:41 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 14:57:10 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void			*ptr;
	unsigned char	*tamp;
	unsigned long	i;

	ptr = NULL;
	tamp = ptr;
	i = 0;
	while (i < elementCount * elementSize)
	{
		*tamp = '0';
		tamp++;
		i++;
	}
	return (ptr);
}
