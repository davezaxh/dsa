#include <stdio.h>
#include <string.h>

void main(){
    int n = 0, i;
    char names[10][20], ele[20];

    printf("Enter number of names to enter: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("Enter name %d: ", i);
        scanf("%s", names[i]);
    }

    printf("Enter the element to search: ");
    gets(ele);

    for(i = 0; i < n; i++){
        
        if(strcmp(names[i],ele)==0){
            printf("String \"%s\" found at position: %d", ele, (i+1));
            break;
        }
    }
    
    if (i==n){
        printf("String not found!");
    }

}

