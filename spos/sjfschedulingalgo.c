#include<stdio.h>
int main()
{
    int burst_time[20],P[20],waiting_time[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_waiting_time,avg_tat;
    printf("please enter number of process: ");
    scanf("%d",&n);

    printf("\n enter the Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("P%d:",i+1);
        scanf("%d",&burst_time[i]);
        P[i]=i+1;
    }
    // from here, burst times sorted
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(burst_time[j]<burst_time[pos])
                pos=j;
        }
        temp=burst_time[i];
        burst_time[i]=burst_time[pos];
        burst_time[pos]=temp;
        temp=P[i];
        P[i]=P[pos];
        P[pos]=temp;
    }
    waiting_time[0]=0;

    for(i=1;i<n;i++)
    {
        waiting_time[i]=0;
        for(j=0;j<i;j++)
        waiting_time[i]+=burst_time[j];
        total+=waiting_time[i];
    }
    avg_waiting_time=(float)total/n;
    total=0;
    
    printf("\nProcess\t BurstTime\t WaitingTime\t TurnaroundTime");
    for(i=0;i<n;i++)
    {
        tat[i]=burst_time[i]+waiting_time[i];
        total+=tat[i];
        printf("\nP%d\t\t %d\t\t %d\t\t\t%d",P[i],burst_time[i],waiting_time[i],tat[i]);
    }
    
    avg_tat=(float)total/n;
    printf("\n\n The average Waiting Time=%f",avg_waiting_time);
    printf("\n The average Turnaround Time=%f\n",avg_tat);
}