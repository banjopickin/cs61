#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int main(int argc, char const *argv[])
{
	int i, j;
	char *temp;
	for (i=0; i< argc-1; i++){
		for (j=0; j<argc-i-1; j++) {
			if (strcmp(argv[j], argv[j+1])>0) {
				size_t length = strlen(argv[j])+1;
				temp = (char *)malloc(length);
				memcpy(temp, argv[j], length);
				argv[j] = argv[j+1];
				argv[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}