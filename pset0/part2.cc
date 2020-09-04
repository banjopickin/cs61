#include "stdio.h"
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int word_cnt, line_cnt, char_cnt;

	char c;
	bool inspace = true;
	while (true){
		c=fgetc(stdin);
		if (c==EOF) break;
		char_cnt++;
		bool thisspace = isspace(c);
		if (inspace&&!thisspace){
			word_cnt++;
		}
		inspace=thisspace;
		if (c=='\n') {
			line_cnt++;
		}

	}

	printf("%d\t%d\t%d\n", line_cnt, word_cnt, char_cnt);

	return 0;
}
