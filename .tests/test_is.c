#include "tests.h"

void test_isalpha(char lowcase_letter, char number) {
    printf("\n   #### ISALPHA ####\n\n");
    printf("Original isalpha: %c -> %d\n", lowcase_letter, isalpha(lowcase_letter));
    printf("Custom ft_isalpha: %c -> %d\n", lowcase_letter, ft_isalpha(lowcase_letter));
    printf("\n");
    printf("Original isalpha: %c -> %d\n", number, isalpha(number));
    printf("Custom ft_isalpha: %c -> %d\n", number, ft_isalpha(number));
}

void test_isdigit(char number, char lowcase_letter) {
    printf("\n   #### ISDIGIT ####\n\n");
    printf("Original isdigit: %c -> %d\n", number, isdigit(number));
    printf("Custom ft_isdigit: %c -> %d\n", number, ft_isdigit(number));
    printf("\n");
    printf("Original isdigit: %c -> %d\n", lowcase_letter, isdigit(lowcase_letter));
    printf("Custom ft_isdigit: %c -> %d\n", lowcase_letter, ft_isdigit(lowcase_letter));
}

void test_isprint(char lowcase_letter, char non_print) {
    printf("\n   #### ISPRINT ####\n\n");
    printf("Original isprint: %c -> %d\n", lowcase_letter, isprint(lowcase_letter));
    printf("Custom ft_isprint: %c -> %d\n", lowcase_letter, ft_isprint(lowcase_letter));
    printf("\n");
    printf("Original isprint: d:%d -> %d\n", non_print, isprint(non_print));
    printf("Custom ft_isprint: d:%d -> %d\n", non_print, ft_isprint(non_print));
}

void test_isalnum(char number, char non_print) {
    printf("\n   #### ISALNUM ####\n\n");
    printf("Original isalnum: %c -> %d\n", number, isalnum(number));
    printf("Custom ft_isalnum: %c -> %d\n", number, ft_isalnum(number));
    printf("\n");
    printf("Original isalnum: d:%d -> %d\n", non_print, isalnum(non_print));
    printf("Custom ft_isalnum: d:%d -> %d\n", non_print, ft_isalnum(non_print));
}

void test_isascii(char lowcase_letter, int outside_ascii) {
    printf("\n   #### ISASCII ####\n\n");
    printf("Original isascii: %c -> %d\n", lowcase_letter, isascii(lowcase_letter));
    printf("Custom ft_isascii: %c -> %d\n", lowcase_letter, ft_isascii(lowcase_letter));
    printf("\n");
    printf("Original isascii: d:%d -> %d\n", outside_ascii, isascii(outside_ascii));
    printf("Custom ft_isascii: d:%d -> %d\n", outside_ascii, ft_isascii(outside_ascii));
}
