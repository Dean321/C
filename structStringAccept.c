#include <stdio.h>

struct name {
    char first[20];
    char last[20];
};

int main() {
	char ln[30];
    struct name sara;
    strcpy(sara.first,"Sara");
    printf("\n Enter the last name: ");scanf("%[^\n]*s%",ln);
    strcpy(sara.last,ln);
    printf("struct direct: %x\n",sara);

    printf("struct deref: %x\t%s\n", sara, sara);
    
    printf("\n Name: %s %s",sara.first,sara.last);


}
