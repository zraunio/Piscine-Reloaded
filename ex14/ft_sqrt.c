/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 13:48:58 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/05 16:51:32 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	i;
	int	temp;

	i = 1;
	temp = 0;
	if (nb <= 0)
		return (0);
	while ((nb > temp) && (nb <= 2147483647))
	{
		i++;
		temp = i * i;
	}
	if (nb == temp)
		return (i);
	else
		return (0);
}
