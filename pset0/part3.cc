#include "stdio.h"
#include "string.h"

static void helper(const char *file_path){

	FILE *pFile;
	if (strcmp(file_path, "-")==0){
		pFile=stdin;
	}
	else{
	// open the file
	pFile = fopen(file_path, "r");
	}	
	// read
	char *buffer;
	while(true){
		if (!fread(&buffer, 1, 1, pFile)){
			break;
		}
		else {
			fwrite(&buffer, 1,1,stdout);
		}
	}
	if (pFile!=stdin){
	fclose(pFile);
	}

}




int main(int argc, char const *argv[])
{
	if (argc==1){
		helper("-");
	}
	else{
		int i=1;
		for (i=1; i<argc; i++){
			helper(argv[i]);
		}
	}
	return 0;
}
