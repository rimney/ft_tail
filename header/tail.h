#ifndef TAIL_H
#define TAIL_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdlib.h>
#include <sys/errno.h>
#include <stdio.h>


void	ft_print_last_line(char *str, char *pname, unsigned int n);
void    ft_print_custom_line(char *str, int n);
int     ft_atoi(char *str);
int     ft_strcmp(char *s1, char *s2);
void    ft_putstr(char *str);
void	ft_put_error(char *pname, char *str, int error);
int 	ft_is_digit(char *str);

#endif
