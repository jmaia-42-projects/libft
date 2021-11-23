#include "../libft.h"

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

static char *rand_string(char *str, size_t size)
{
	if (size) {
		--size;
		for (size_t n = 0; n < size; n++) {
			char c = rand() % 256;
			str[n] = c;
		}
		str[size] = '\0';
	}
	return str;
}

static char* rand_string_alloc(size_t size)
{
	char *s = malloc(size + 1);
	if (s) {
		rand_string(s, size);
	}
	return s;
}

void test_ft_strrchr(void)
{
	char			*str;
	unsigned char	c;
	for (int i = 0; i < 500; i++)
	{
		c = rand() % 256;
		str = rand_string_alloc(100);
		if (strrchr(str) != ft_strrchr(str))
			printf("Difference with %s - %c : ft_strrchr(str, c) = %p, strrchr(str, c) = %p\n", str, c, ft_strrchr(str, c), strrchr(str, c));
		free(str);
	}

}