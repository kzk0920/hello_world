#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *str = "Hello, world!";
	int str_size = strlen(str);
	int i;

	for (i = 0; i < str_size; i++) {
		printf("%c", *(str + i));
		fflush(stdout);
		usleep(1000000);
	}

	printf("\n");
	return 0;
}
