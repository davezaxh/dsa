#include<stdio.h>
void findWaitingTime(int processes[], int n, int bt[], int wt[])
{
 wt[0] = 0; // waiting time for first process is 0

 for (int i = 1; i < n ; i++ ) // calculating waiting time
    wt[i] = bt[i-1] + wt[i-1] ;
}

// Function to calculate turn-around time
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
 for (int i = 0; i < n ; i++) // cal. turnaround time by adding bt[i] + wt[i]
    tat[i] = bt[i] + wt[i];
}

//Function to calculate average time
void findavgTime( int processes[], int n, int bt[])
{
 int wt[n], tat[n], total_wt = 0, total_tat = 0;

 //Function to find waiting time of all processes
 findWaitingTime(processes, n, bt, wt);

 //Function to find turn around time for all processes
 findTurnAroundTime(processes, n, bt, wt, tat);

 //Display processes along with all details
 printf("Processes Burst time Waiting time Turn around time\n");

 // Calculate total waiting time and total turn -around time
 for (int i=0; i<n; i++)
 {
    total_wt = total_wt + wt[i];
    total_tat = total_tat + tat[i];
    printf("\t%d ",(i+1));
    printf("\t\t\t%d ", bt[i] );
    printf("\t\t\t%d",wt[i] );
    printf("\t\t\t%d\n",tat[i] );
    }
 float s=(float)total_wt / (float)n;
 float t=(float)total_tat / (float)n;
 printf("\nAverage waiting time = %f",s);
 printf("\nAverage turn around time = %f ",t);
}

// Driver code
int main()
{
 //process id's
 int processes[] = { 1, 2, 3, 4};
 int n = sizeof processes / sizeof processes[0];

 //Burst time of all processes
 int burst_time[] = {10, 5, 8, 7};

 findavgTime(processes, n, burst_time);
 return 0;
}