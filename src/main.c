/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main for palindrome
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 1) {
        write(2, "Error: missing arguments.\n", 26);
        return (84);
    }
    if (ac == 2) {
        if (display_pal(av[1]) == 1)
            return (84);
        else
            return (0);
    }
}
