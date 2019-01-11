/*
** EPITECH PROJECT, 2019
** check_pal.c
** File description:
** check if its pal or not
*/

#include "my.h"

int check_pal(char *str, int start)
{
    int end = my_strlen(str);
    int mid = end / 2;
    int pal_or_not = 1;

    end = end - 1;
    while (start != mid) {
        pal_or_not = 1;
        if (str[start] == str[end] ||
            str[start] > 'A' && str[start] < 'Z' &&
            str[start] == str[end] + 32)
            pal_or_not = 0;
        if (str[start] > 'a' && str[start] < 'z' &&
            str[start] == str[end] - 32)
            pal_or_not = 0;
        start = start + 1;
        end = end - 1;
    }
    if (pal_or_not == 1)
        return (1);
    return (0);
}

int display_pal(char *str)
{
    if (check_pal(str, 0) == 1)
        my_putstr("not a palindrome.\n");
    else
        my_putstr("palindrome!\n");
}
