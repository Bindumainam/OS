#include<stdio.h>
int main(){
int bt[10],n,wt[10], tat[10],i,j,twt,ttat,p[10],temp,pri[10];
float awt,atat;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the number of process");
scanf("%d",&p[i]);
printf("Enter the number of burst time:");
scanf("%d",&bt[i]);
printf("enter the priority:");
scanf("%d",&pri[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(pri[i]<pri[j])
		{
			temp=pri[i];
			pri[i]=pri[j];
			pri[j]=temp;
			temp=p[i];
			p[i]=p[j];
			p[j]=temp;
			temp=bt[i];
			bt[i]=bt[j];
			bt[j]=temp;
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
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\nprocessor priority bursttime waitingtime turnaround time");
for(i=0;i<n;i++){
printf("\n %d\t %d\t %d\t %d\t %d\t",p[i],pri[i],bt[i],wt[i],tat[i]);
}
printf("\n Average waiting time =%f",awt);
printf("\n Average turn around time=%f",atat);
return 0;
}
