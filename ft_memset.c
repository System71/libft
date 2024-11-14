/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:25:01 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/07 13:45:59 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int a, size_t c)
{
	unsigned char	*tamp;

	tamp = (unsigned char *)ptr;
	while (c > 0)
	{
		printf("dans le while \n");
		// *tamp = (unsigned char)a;
		tamp++;
		c--;
	}
	return (ptr);
}

int	main(void)
{
	void *ptr;
	int a = 2;
	int c = 5;

	printf("resultat = %s \n", (char *)ft_memset(ptr, a, c));
}