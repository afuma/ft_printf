/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 07:02:54 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/30 08:49:54 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_convert_hex(int nb, int upper)
{
    int tmp;
    static int i;

    i = 0;
    if (nb)
    {
        ft_convert_hex(nb / 16);
        if (nb % 16 < 10)
            tmp = (nb % 16) + '0';
        else
        {
            if (upper)
                tmp = (nb % 16) - 10 + 'a' - 32; // majuscule
            else
                tmp = (nb % 16) - 10 + 'a'; // minuscule
        }
        write(1, &tmp, 1);
        i++;
    }
    return (i);
}

int ft_convert_x(va_list arg, int upper)
{
    unsigned int nb;

    nb = (int) va_arg(arg, int);
    if (!nb)
    {
        ft_putchar_fd('0', 1);
        return (1);
    }
    return (ft_convert_hex(nb, upper));
}

