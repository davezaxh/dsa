#include <stdio.h>

void main(){
    char str[80];
    int i = 0;


    printf("Enter a string: ");
    // gets(str);
    fgets(str,80,stdin);

    while(str[i]!='\0'){
        i++;
    }

    printf("Number of characters in \"%s\" is: %d\n",str, i-1);
}

