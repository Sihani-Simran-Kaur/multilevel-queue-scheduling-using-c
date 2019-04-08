//printf("for q2:\n");
    int j,tp,ts;
   B:
    for(i=0;i<h;i++)
    {
    	for(j=i+1;j<m;j++)
    	{
    	if(prio[j]>prio[i])
    	{
            tp=b2[j];
    		b2[j]=b2[i];
    		b2[i]=tp;
    		
    		ts=q2[j];
    		q2[j]=q2[i];
    		q2[i]=ts;		
		}
        }
	}
	//printf("for q1:\n");
	for(i=0;i<h;i++)
    {
    	if(p>20)
    	goto C;
    	else
    	{
    	p+=b2[i];
		printf("p%d\t\t\t%d\t\t\t%d\n",q2[i],p,(p-b2[i]));
     	}
    }
