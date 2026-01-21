#include<stdio.h>
int main()
{
  int bt[10],wt[10],tat[10],twt,ttat,n,i;
  char P[10][5];
  float awt,atat;
  printf("\nEnter number of process ready to execute");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\nEnter the process name");
    scanf("%s",&P[i]);
    printf("\nEnter the burst time");
    scanf("%d",&bt[i]);
  }
  wt[0]=0;
  twt=0;
  tat[0]=bt[0];
  ttat=bt[0];
  for(i=1;i<n;i++)
  {
    wt[i]=wt[i-1]+bt[i-1];
    tat[i]=wt[i]+bt[i];
    twt=twt+wt[i];
    ttat=ttat+tat[i];
  }
  awt=(float) twt/n;
  atat=(float) ttat/n;
  printf("\n Process name Burst time  Waiting time  Turn Around time");
  for(i=0;i<n;i++)
  {
    printf("\n %s\t %d\t %d\t %d\t",P[i],bt[i],wt[i],tat[i]);
  }
  printf("\nAverage Waiting Time =%f",awt);
  printf("\nAverage Turn Around Time=%f",atat);
 }
