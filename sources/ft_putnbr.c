/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:16:14 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/17 14:49:50 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int n)
{
	char	*s;
	int		len;

	s = "0123456789";
	len = 0;
	if (n > 2147483647 || n < -2147483648)
		return (0);
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		len++;
	}
	if (n > 9)
		len += ft_putnbr(n / 10);
	write(1, &s[n % 10], 1);
	len++;
	return (len);
}
// esta función espera a que todos lo numeros se impriman
// y cada uno devuelva que a impreso 1 y va sumandolos todos