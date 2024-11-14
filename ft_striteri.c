/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:05:47 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 11:34:25 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	f(unsigned int i, char *c)
// {
// 	if (*c == ' ')
// 		*c = '/';
// }

// int	main(void)
// {
// 	char str[] = "coucou ca va";

// 	ft_striteri(str, f);
// 	printf("%s\n", str);
// }