/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:45:31 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/04 15:14:14 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("resultat1 = %d \n", ft_toupper(1));
// 	printf("resultat2 = %d \n", ft_toupper(97));
// 	printf("resultat3 = %d \n", ft_toupper(29));
// }