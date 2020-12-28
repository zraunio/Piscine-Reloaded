/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zraunio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 11:48:14 by zraunio           #+#    #+#             */
/*   Updated: 2020/06/08 11:31:55 by zraunio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	if (nb > 0 || nb < 12)
	{
		res = (nb * ft_recursive_factorial(nb - 1));
		return (res);
	}
	return (0);
}
