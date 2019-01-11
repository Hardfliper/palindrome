/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** remove warnings
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>

int display_pal(char *str);
int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_put_nbr(int nb);
int number(char *str);
void my_printf(char *str, ...);

#endif
