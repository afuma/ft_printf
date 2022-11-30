/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 07:02:38 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/30 08:38:09 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_convert_chosen(va_list arg, char c)
{
    if (c == 'c')
        ft_convert_c(arg);
    else if (c == 's')
        ft_convert_s(arg);
    else if (c == 'p')
        ft_convert_p(arg);
    else if (c == 'd' || c == 'i')
        ft_convert_di(arg);
    else if (c == 'u')
        ft_convert_u(arg);
    else if (c == 'x')
        ft_convert_x(arg, 0);
    else if (c == 'X')
        ft_convert_x(arg, 1);
    else if (c == '%')
    {
        ft_putchar_fd('%', 1);
        return (1);
    }
    return (0);
}