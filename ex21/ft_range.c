/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 12:09:29 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/05 16:45:08 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(arr = (int*)malloc(sizeof(*arr) * (max - min))))
		return (NULL);
	while (min + i != max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
