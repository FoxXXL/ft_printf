#include "ft_utils.h"
#include <stdio.h> /* debug.test */

int main()
{
	char *text = "Ma duc la [%s] sa vad [%s] in luna [%s] din anul 2018";

	printf("text   = %s\nreturn = ",text);
	ft_printf(text, "Nasa", "Rachete", "Aprilie");
	ft_putchar('\n');
    return 0;
}

