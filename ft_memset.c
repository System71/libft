/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:25:01 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 16:26:34 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int a, size_t c)
{
	unsigned char	*tamp;

	tamp = (unsigned char *)ptr;
	(void)a;
	(void)c;
	// while (c > 0)
	// {
	// 	printf("dans le while \n");
	// 	// *tamp = (unsigned char)a;
	// 	tamp++;
	// 	c--;
	// }
	return (ptr);
}
