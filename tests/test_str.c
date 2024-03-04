#include "tests.h"

void	test_strlen(const char *str)
{
	printf("ft_strlen: %s -> %lu\n", str, ft_strlen(str));
	printf("strlen: %s -> %lu\n", str, strlen(str));
}

void	test_strlcpy(const char *src, size_t size)
{
	char	original_dst[100];
	char	ft_dst[100];

	int original_ret, ft_ret;
	original_ret = strlcpy(original_dst, src, size);
	ft_ret = ft_strlcpy(ft_dst, src, size);
	printf("\n   #### STRLCPY ####\n\n");
	printf("FIRST --> strlcpy (original): '%s' -> return: %d \n", original_dst,
		original_ret);
	printf("SECOND -> ft_strlcpy (mine): '%s' -> return: %d \n", ft_dst,
		ft_ret);
}

void	test_strlcat(const char *src, size_t size)
{
	char	catoriginal_dst[100];
	char	catft_dst[100];

	int catoriginal_ret, catft_ret;
	ft_strlcpy(catoriginal_dst, "hello", 12);
	ft_strlcpy(catft_dst, "hello", 12);
	catoriginal_ret = strlcat(catoriginal_dst, src, size);
	catft_ret = ft_strlcat(catft_dst, src, size);
	printf("\n   #### STRLCAT ####\n\n");
	printf("FIRST --> strlcat (original): '%s' -> return: %d \n",
		catoriginal_dst, catoriginal_ret);
	printf("SECOND -> ft_strlcat (mine): '%s' -> return: %d \n", catft_dst,
		catft_ret);
}
void	test_strchr(const char *s, int c)
{
	printf("\n   #### STRCHR ####\n\n");
	printf("String: '%s', Char: '%c'\n", s, c);
	printf("strchr (original): '%s'\n", strchr(s, c));
	printf("ft_strchr (mine): '%s'\n", ft_strchr(s, c));
}

void	test_strncmp(const char *s1, const char *s2, size_t n)
{
	printf("\n   #### STRNCMP ####\n\n");
	printf("String 1: '%s', String 2: '%s', n: %zu\n", s1, s2, n);
	printf("strncmp (original): %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp (mine): %d\n", ft_strncmp(s1, s2, n));
}

void	test_strnstr(const char *haystack, const char *needle, size_t len)
{
	printf("\n   #### STRNSTR ####\n\n");
	printf("Haystack: '%s', Needle: '%s', len: %zu\n", haystack, needle, len);
	printf("strnstr (original): '%s'\n", strnstr(haystack, needle, len));
	printf("ft_strnstr (mine): '%s'\n", ft_strnstr(haystack, needle, len));
}

void	test_strrchr(const char *s, int c)
{
	printf("\n   #### STRRCHR ####\n\n");
	printf("String: '%s', Char: '%c'\n", s, c);
	printf("strrchr (original): '%s'\n", strrchr(s, c));
	printf("ft_strrchr (mine): '%s'\n", ft_strrchr(s, c));
}
