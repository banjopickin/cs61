# include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned int cnt=0;
	while(fgetc(stdin)!=EOF){
		cnt++;
	}
	fprintf(stdout, "%d\n",cnt);
	return 0;
}