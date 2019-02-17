#include <string.h>

size_t strlen(const char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}

	return (len);
}
