/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 15:03:36 by okoca             #+#    #+#             */
/*   Updated: 2024/02/08 15:11:58 by okoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include "includes/tests.h"

void test_split(const char *str, char delimiter) {
    printf("\n   #### FT_SPLIT ####\n\n");

    char **result = ft_split(str, delimiter);

    printf("Original string: %s\n", str);
    printf("Delimiter: '%c'\n", delimiter);

    printf("Result:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("[%d] \"%s\"\n", i, result[i]);
        free(result[i]);
    }

    free(result); 
}

// Test function for ft_itoa
void test_itoa(int n) {
    printf("\n   #### FT_ITOA ####\n\n");

    char *result = ft_itoa(n);

    printf("Original integer: %d\n", n);
    printf("Resulting string: \"%s\"\n", result);

    free(result); 
}

int	main(void)
{
	// test_str();
	// test_is();
	// test_mem();
	//test_put();
	// test_split("hello world wowzies", 'l');
	// test_itoa(-2147483648);
	// printf("%s\n", ft_strtrim("-----hello world----",  "-"));

	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(10423, 1);

}
