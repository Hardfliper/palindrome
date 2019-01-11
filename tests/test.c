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

Test(display_pal, pal_semi_maj, .init = redirect_all_std)
{
    display_pal("azeEZA");
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(display_pal, pal_starting_maj, .init = redirect_all_std)
{
    display_pal("AZEeza");
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(display_pal, mid_maj, .init = redirect_all_std)
{
    display_pal("azeEza");
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(display_pal, mid_maj2, .init = redirect_all_std)
{
    display_pal("azEeza");
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(display_pal, number, .init = redirect_all_std)
{
    display_pal("123321");
    cr_assert_stdout_eq_str("palindrome!\n");
}

Test(main, error_gest, .init = redirect_all_std)
{
    system("./palindrome");
    cr_assert_stderr_eq_str("Error: missing arguments.\n");
}

Test(main, error_gest_too_much_arg, .init = redirect_all_std)
{
    system("./palindrome too much argument");
    cr_assert_stderr_eq_str("Usage : ./palindrome [argument]\n");
}
