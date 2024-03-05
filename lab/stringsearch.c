// To find a particular string from an array of string

#include <stdio.h>
#include <string.h>

void main(){
    char str[10][10],seek[10];
    int  i, n, flag=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        printf("Enter string %d: ", (i+1));
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s",seek);

    for(i=0;i<n;i++){
        if(strcmp(seek,str[i])==0){
            flag = i;
            break;
        }
    }

    if(flag!=0){
        printf("String \"%s\" is found at position: %d\n",seek, (i+1));
    }

    else{
        printf("String \"%s\" not found in the array\n",seek);
    }
}