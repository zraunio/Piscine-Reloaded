/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:46:22 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/05 17:50:22 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
