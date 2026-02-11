#include<stdio.h>
int main(){
int bt[10],n,wt[10], tat[10],i,j,twt,ttat,p[10];
float awt,atat;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number of process");
scanf("%d",&p[i]);
printf("Enter the number of burst time:");
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++){
for(j=0;j<j;j++){
if(bt[i]<bt[j]){
int temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
int k=p[i];
p[i]=p[j];
p[j]=k;
}
}
}
wt[0]=0,tat[0]=bt[0];
twt=0,ttat=0,bt[0];
for(i=1;i<n;i++)
{
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat=ttat+wt[i];
}
awt=twt/n;
atat=ttat/n;
printf("/n processor bursttime waitingtime turnaround time");
for(i=0;i<n;i++){
printf("/n %d\t %d\t %d\t %d\t",p[i],bt[i],wt[i],tat[i]);
}
printf("/n Average waiting time =%f",awt);
printf("/n Average turn around time=%f",atat);
return 0;
}
