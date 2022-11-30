/* PROTOTYPE DES FONCTIONS DE LA LIBC */


// ATTENTION: prototypes des fonctions a revoir au cas par cas.
// (quand saut de ligne dans la partie suivante uniquement)

// fonctions ne necessitant pas de fonctions externes

#ifndef __FT_PRINTF_H_
#define __FT_PRINTF_H_

    #include <stddef.h>
    #include <stdlib.h>
    #include <unistd.h>

    size_t ft_strlen(const char *str);
    char *ft_strchr(const char *s, int c);
    void ft_putchar_fd(char c, int fd);
    void ft_putstr_fd(char *s, int fd);
    void ft_putnbr_fd(int n, int fd);

    int ft_printf(const char *format, ...);
    int ft_convert_x(va_list arg, int upper);
    int ft_convert_c(va_list arg);
    int ft_convert_s(va_list arg);
    int ft_convert_p(va_list arg);
    int ft_convert_di(va_list arg);
    int ft_convert_u(va_list arg);
    int ft_convert_chosen(va_list arg, char c);
    
#endif