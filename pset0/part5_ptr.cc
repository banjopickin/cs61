#include <cstring>
#include <cassert>
#include <cstdio>

char* mystrstr(const char* s1, const char* s2) {
    int len_s1 = (int) strlen(s1);
    int len_s2 = (int) strlen(s2);
    if (len_s1<len_s2){
    	return nullptr;
    }

    while(*s1){
        const char* i=s1;
        const char* j=s2;
    	while(*j && *i==*j){
			j++;
            i++;
    	}
        if(!*j){
        return (char*) s1;
        }
        s1++;
    }
    return nullptr;
}

int main(int argc, char** argv) {
    assert(argc == 3);
    printf("strstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], strstr(argv[1], argv[2]));
    printf("mystrstr(\"%s\", \"%s\") = %p\n",
           argv[1], argv[2], mystrstr(argv[1], argv[2]));
    assert(strstr(argv[1], argv[2]) == mystrstr(argv[1], argv[2]));
}
