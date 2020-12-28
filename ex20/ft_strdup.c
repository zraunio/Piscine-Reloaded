/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:00:15 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/05 12:02:40 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!(str = (char*)malloc(sizeof(*str) * ft_strlen(src) + 1)))
		return (NULL);
	j = ft_strlen(src);
	while (i <= j)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
