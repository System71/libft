/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:26:26 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/06 14:52:34 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	destlen;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

// int	main(void)
// {
// 	char dest[100] = "coucou";
// 	char *src = "salut";
// 	int size = 4;
// 	printf("resultat = %zu \n", ft_strlcat(dest, src, size));
// 	printf("resultat2 = %s \n", dest);
// }