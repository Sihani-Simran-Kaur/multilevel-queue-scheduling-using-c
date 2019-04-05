#include<stdio.h>
void main()
{
    int n,pro[n],pri[n],bt[n],q1[20],q2[20],q3[20],b1[20],b2[20],b3[20],t[20],i;
	int m=0,h=0,g=0,p=0;
	printf("Enter the number of processes");
    scanf("%d",&n);
    //Considering arrival time=0 for all processes
	printf("Enter the process with their priority & burst time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pri[i]);
		scanf("%d",&bt[i]);
		pro[i]=i+1;
	}
