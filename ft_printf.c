/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 07:02:46 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/30 08:51:09 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// le prototype provient du man 3 printf

#include <stdarg.h>

int ft_printf(const char *format, ...);

int ft_printf(const char *format, ...)
{
    va_list arg;
    int len;

    len = 0;
    va_start(arg, format);
    if (!format)
        return (0);
    if (!ft_strchr((char *) format, '%'))
    {
        ft_putstr_fd((char *) format, 1);
        return (ft_strlen(format));
    }
    while (*format)
    {
        if (*format != '%')
            len += write(1, *format, 1);
        else
        {
            len += ft_convert_chosen(arg, *(format + 1));
            format++;
        }
        format++;
    }
    va_end(arg);
    return (len);
}
// retourne une valeur negative si une erreur apparait