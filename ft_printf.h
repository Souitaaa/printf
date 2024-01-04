/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 02:33:26 by csouita           #+#    #+#             */
/*   Updated: 2024/01/04 09:37:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_strlen(const char *s);
int		ft_putstr(char *str);
int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_strchr(const char *s, int c);
int		ft_putnbr_px(unsigned long n, char *hex, int flag);
int		ft_printf(const char *f, ...);
int		ft_positif_number(unsigned int n);

#endif