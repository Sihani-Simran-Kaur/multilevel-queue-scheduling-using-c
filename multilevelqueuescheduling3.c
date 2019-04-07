	printf("Processes in queue 3 for Round Robin Scheduling\n");
	for(i=0;i<g;i++)
	{
		printf("p%d\n",q3[i]);
	}
	printf("\n");
	printf("Processes in queue 2 for Priority Scheduling\n");
	for(i=0;i<h;i++)
	{
		printf("p%d\n",q2[i]);
	}
	printf("\n");
	printf("Processes in queue 1 for First Come First Serve\n");
	for(i=0;i<m;i++)
	{
		printf("p%d\n",q1[i]);
	}
	printf("\n");
	int tq=4,rem[20];
	printf("Processes\tTurnAroundTime\t\tWaitingTime\n");
	for(i=0;i<g;i++)
	{
		rem[i]=b1[i];
	}
  
