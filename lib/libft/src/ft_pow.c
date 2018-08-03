/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovodra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 20:33:22 by rnovodra          #+#    #+#             */
/*   Updated: 2017/11/15 14:09:05 by rnovodra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../inc/libft.h"

int		ft_pow(int n, int pow)
{
	int nbr;

	nbr = n;
	if (pow == 0)
		return (1);
	while (--pow > 0)
		n = n * nbr;
	return (n);
}
