#include "tests.h"

void print_memory(const void *mem, size_t size) {
    const unsigned char *byte = mem;
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", byte[i]);
    }
    printf("\n");
}

// Test function for ft_memset
void test_memset() {
    printf("\n   #### MEMSET ####\n\n");

    char original[10];
    char custom[10];

    memset(original, 'A', 5);
    ft_memset(custom, 'A', 5);

    printf("Original memset: ");
    print_memory(original, 5);

    printf("Custom ft_memset: ");
    print_memory(custom, 5);
}

// Test function for ft_bzero
void test_bzero() {
    printf("\n   #### BZERO ####\n\n");

    char original[10];
    char custom[10];

    strcpy(original, "Test123");
    strcpy(custom, "Test123");

    bzero(original, 5);
    ft_bzero(custom, 5);

    printf("Original bzero: %s\n", original);
    printf("Custom ft_bzero: %s\n", custom);
}

// Test function for ft_memcpy
void test_memcpy() {
    printf("\n   #### MEMCPY ####\n\n");

    char dest_original[20];
    char dest_custom[20];

    const char *src = "Hello, World!";

    memcpy(dest_original, src, 7);
    ft_memcpy(dest_custom, src, 7);

    printf("Original memcpy: %s\n", dest_original);
    printf("Custom ft_memcpy: %s\n", dest_custom);
}

// Test function for ft_memmove
void test_memmove() {
    printf("\n   #### MEMMOVE ####\n\n");

    char dest_original[20];
    char dest_custom[20];

    const char *src = "Hello, World!";

    memmove(dest_original, src, 7);
    ft_memmove(dest_custom, src, 7);

    printf("Original memmove: %s\n", dest_original);
    printf("Custom ft_memmove: %s\n", dest_custom);
}

// Test function for ft_memchr
// void test_memchr() {
//     printf("\n   #### MEMCHR ####\n\n");
//
//     const char *s = "Hello, World!";
//     int c = 'o';
//
//     const void *original = memchr(s, c, 7);
//     const void *custom = ft_memchr(s, c, 7);
//
//     printf("Original memchr: %s\n", (char *)original);
//     printf("Custom ft_memchr: %s\n", (char *)custom);
// }

// Test function for ft_memcmp
// void test_memcmp() {
//     printf("\n   #### MEMCMP ####\n\n");
//
//     const char *s1 = "Hello, World!";
//     const char *s2 = "Hello, Sun!";
//
//     int original = memcmp(s1, s2, 7);
//     int custom = ft_memcmp(s1, s2, 7);
//
//     printf("Original memcmp: %d\n", original);
//     printf("Custom ft_memcmp: %d\n", custom);
// }

// Test function for ft_calloc
void test_calloc() {
    printf("\n   #### CALLOC ####\n\n");

    size_t n = 3;
    size_t size = 5;

    int *original = (int *)calloc(n, size);
    int *custom = (int *)ft_calloc(n, size);

    printf("Original calloc: ");
    for (size_t i = 0; i < n * size; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");

    printf("Custom ft_calloc: ");
    for (size_t i = 0; i < n * size; i++) {
        printf("%d ", custom[i]);
    }
    printf("\n");

    free(original);
    free(custom);
}
