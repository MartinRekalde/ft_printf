/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:47:36 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/17 17:48:03 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_unsig(unsigned int n)
{
	char	*s;
	int		len;

	s = "0123456789";
	len = 0;
	if (n > 9)
		len += ft_putnbr(n / 10);
	write(1, &s[n % 10], 1);
	len++;
	return (len);
}
