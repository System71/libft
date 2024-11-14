/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 08:18:20 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/07 08:33:02 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*tamp;

	tamp = ptr;
	while (n > 0)
	{
		*tamp = '0';
		tamp++;
		n--;
	}
}

int	main(void)
{
	void *ptr;
	int n = 5;

	ft_bzero(ptr, n);
	printf("resultat = %s \n", (unsigned char *)ptr);
}