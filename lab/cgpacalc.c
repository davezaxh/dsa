#include <stdio.h>

void main(){

    int credits[5],marks[5],grade[5];
    int n, i;
    float sumone = 0.0, sumtwo = 0.0;

    printf("Enter number of subjects: ");
    scanf("%d",&n);

    for(i=0 ;i<n ;i++){
        printf("Enter credits for subject %d: ",i+1);
        scanf("%d",&credits[i]);

        printf("Enter marks for subject %d: ",i+1); 
        scanf("%d",&marks[i]);
    }

    for(i=0; i<n; i++){
        if(marks[i]>=90){
            grade[i]=10*credits[i];
        }
        else if(marks[i]>=80){
            grade[i]=9*credits[i];
        }
        else if(marks[i]>=70){
            grade[i]=8*credits[i];
        }
        else if(marks[i]>=60){
            grade[i]=7*credits[i];
        }
        else if(marks[i]>=50){
            grade[i]=6*credits[i];
        }
        else if(marks[i]>=40){
            grade[i]=5*credits[i];
        }
        else{
            grade[i]=0;
        }
    }

    for(i=0 ;i<n ;i++){
        sumone = sumone + credits[i];
        sumtwo = sumtwo + grade[i];
    }

    printf("SGPA: %f\n", (sumtwo/sumone));
}
