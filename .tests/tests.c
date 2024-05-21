#include "tests.h"

void	test_is(void)
{
	char	lowcase_letter;
	char	number;
	char	non_print;
	int		outside_ascii;

	lowcase_letter = 'a';
	number = '5';
	non_print = '\n';
	outside_ascii = 155;
	printf("\n  ------------------------------\n");
	printf("\nChecking the is_xxx functions (if prefixed by 'd' it means that it is in ascii number):\n\n");
	test_isalpha(lowcase_letter, number);
	test_isdigit(number, lowcase_letter);
	test_isprint(lowcase_letter, non_print);
	test_isalnum(number, non_print);
	test_isascii(lowcase_letter, outside_ascii);
	printf("\n  ------------------------------\n");
}

void	test_str(void)
{
	const char	*s1 = "Hello world!";
	const char	*s2 = "Hello";
	const char	*src = "this is the source string.";
	const char	*haystack = "This is a haystack";
	const char	*needle = "hay";

	printf("\n  ------------------------------\n");
	printf("\nString functions: \n\n");
	test_strlen(s1);
	test_strlcpy(src, 8);
	test_strlcat(src, 15);
	test_strchr(s1, 'o');
	test_strncmp(s1, s2, 3);
	test_strnstr(haystack, needle, ft_strlen(haystack));
	test_strrchr(s1, 'o');
	printf("\n  ------------------------------\n");
}

void	test_mem(void)
{
	printf("\n  ------------------------------\n");
	printf("Memory functions:\n\n");
	test_memset();
	test_bzero();
	test_memcpy();
	test_memmove();
	test_memchr();
	test_memcmp();
	test_calloc();
	printf("\n  ------------------------------\n");
}

void	test_put(void)
{
	char		character;
	const char	*string = "Hello, World!";
	const char	*stringWithNewline = "This is a line.";
	int			number;

	printf("\n  ------------------------------\n");
	printf("File Descriptor Functions:\n\n");
	// Example 1: Testing ft_putchar_fd
	character = 'A';
	test_putchar_fd(character, "putchar.txt");
	// Example 2: Testing ft_putstr_fd
	test_putstr_fd(string, "putstr.txt");
	// Example 3: Testing ft_putendl_fd
	test_putendl_fd(stringWithNewline, "putendl.txt");
	// Example 4: Testing ft_putnbr_fd
	number = 12345;
	test_putnbr_fd(number, "putnbr.txt");
	printf("\n  ------------------------------\n");
}
