// To create an array of structures

#include <stdio.h>

struct student{
    char name[20]; 
    int roll;
    float marks;
}; 

void main(){
    struct student s[10];
    int i, n, ch, pos;

    printf("Enter the number of students: ");   
    scanf("%d", &n);
    printf("\n");

    for(i = 0; i < n; i++){
        printf("Enter the name of student %d: ",(i+1));
        scanf("%s", s[i].name);

        printf("Enter the roll number of student %d: ",(i+1));
        scanf("%d", &s[i].roll);

        printf("Enter the marks of student %d: ",(i+1));
        scanf("%f", &s[i].marks);
        
        printf("\n");
    }

    printf("\n1. Display\n2. Insert\n3. Delete\n");
    printf("Enter Choice: ");
    scanf("%d", &ch);
    printf("\n");

    switch(ch){
        case 1: printf("\nName\tRoll Number\tMarks\n");
                printf("\n");
                for(i = 0; i < n; i++){
                    printf("%s\t%d\t\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
                }
                break;
        
        case 2: printf("Enter the position to insert the student: ");
                scanf("%d", &pos);

                for(i = n - 1; i >= pos; i--){
                    s[i] = s[i-1];
                }   
                n++;

                printf("Enter the name of student: ");
                scanf("%s", s[pos].name);

                printf("Enter the roll number of student: ");
                scanf("%d", &s[pos].roll);

                printf("Enter the marks of student: ");
                scanf("%f", &s[pos].marks);
                
                printf("Modified List: ");
                printf("\nName\tRoll Number\tMarks\n");
                for(i = 0; i < n+1; i++){
                    printf("%s\t%d\t\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
                }
                break;

        case 3: printf("Enter the position to delete student records: ");
                scanf("%d", &pos);

                for(i = pos; i < n-1; i++){
                    s[i] = s[i+1];
                }

                n--;

                printf("Modified List: ");
                printf("\nName\tRoll Number\tMarks\n");
                for(i = 0; i < n; i++){
                    printf("%s\t%d\t\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
                }
    
                break;

        default: printf("Enter a valid option!");
             break;
    }

    
}

