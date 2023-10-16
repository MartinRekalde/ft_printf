/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrekalde <mrekalde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:43:32 by mrekalde          #+#    #+#             */
/*   Updated: 2023/10/16 16:23:30 by mrekalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	check_variable(char c, va_list *ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
/* 	if (c == 'p')
		ft_puthex(str);
	if (c == 'd')
		ft_putnbr_decimal(str);
	if (c == 'i')
		ft_putnbr(str);
	if (c == 'u')
		ft_putnbr_decimal_unsigned(str);
	if (c == 'x')
		ft_putnbr_hex_minus(str);
	if (c == 'X')
		ft_putnbr_hex_mayus(str);
	if (c == '%')
		ft_putchar(str); */
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		total;
	va_list	ap;

	i = 0;
	total = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			total += check_variable(str[i], &ap);
			i++;
		}
		else if (str[i] != '%')
		{
			ft_putchar(str[i]);
			total++;
			i++;
		}
	}
	va_end(ap);
	return (total);
}

int main()
{
	char	character = 'a';
	char	string[] = "Hola mundo";
	int		i;
	
	i = ft_printf("c: %c\n", character);
	printf("Caracteres: %i\n", i);
	i = ft_printf("s: %s\n", string);
	printf("String: %i\n", i);
	return (0);
}