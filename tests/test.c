/*
** EPITECH PROJECT, 2018
** unit_test
** File description:
** test myprintf
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"


void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(display_pal, not_pal, .init = redirect_all_std)
{
    display_pal("hello world");
    cr_assert_stdout_eq_str("not a palindrome.\n");
}

Test(display_pal, pal_simple, .init = redirect_all_std)
{
    display_pal("azeeza");
    cr_assert_stdout_eq_str("palindrome!\n");
}

