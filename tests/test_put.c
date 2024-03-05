#include "tests.h"

void test_putchar_fd(char c, const char *filename) {
    printf("\n   #### FT_PUTCHAR_FD ####\n\n");

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return;
    }

    printf("Writing character '%c' to file '%s'\n", c, filename);
    ft_putchar_fd(c, fd);

    close(fd);
}

// Test function for ft_putstr_fd
void test_putstr_fd(const char *s, const char *filename) {
    printf("\n   #### FT_PUTSTR_FD ####\n\n");

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return;
    }

    printf("Writing string '%s' to file '%s'\n", s, filename);
    ft_putstr_fd((char *)s, fd);

    close(fd);
}

// Test function for ft_putendl_fd
void test_putendl_fd(const char *s, const char *filename) {
    printf("\n   #### FT_PUTENDL_FD ####\n\n");

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return;
    }

    printf("Writing string '%s' followed by a newline to file '%s'\n", s, filename);
    ft_putendl_fd((char *)s, fd);

    close(fd);
}

// Test function for ft_putnbr_fd
void test_putnbr_fd(int n, const char *filename) {
    printf("\n   #### FT_PUTNBR_FD ####\n\n");

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return;
    }

    printf("Writing integer '%d' to file '%s'\n", n, filename);
    ft_putnbr_fd(n, fd);

    close(fd);
}
