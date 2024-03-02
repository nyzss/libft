#include "libft.h"

#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 2)
    return (0);

  printf("%d\n", ft_isalpha(argv[1][0]));
  printf("%c\n", (argv[1][0]));
}
