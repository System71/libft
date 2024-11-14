/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prigaudi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:33:41 by prigaudi          #+#    #+#             */
/*   Updated: 2024/11/14 15:10:47 by prigaudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int				i;
	unsigned long	j;
	char			*ptr;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (NULL);
	while (s1[i] != '\0')
	{
		j = 0;
		ptr = (char *)&(s1[i]);
		while (s2[j] != '\0')
		{
			if (s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0' || j == len)
					return (ptr);
			}
			else
				break ;
		}
		i++;
	}
	return (NULL);
}
