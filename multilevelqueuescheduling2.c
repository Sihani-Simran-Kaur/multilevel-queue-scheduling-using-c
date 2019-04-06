for(i=0;i<n;i++)
	{
	if(pri[i]>=1 && pri[i]<=3)
	{
		q1[m]=pro[i];
		b3[m]=bt[i];
		m++;
	}
	else if(pri[i]>3 && pri[i]<=6)
	{
		q2[h]=pro[i];
		b2[h]=bt[i];
		prio[h]=pri[i];
		h++;
	}
	else
	{
		q3[g]=pro[i];
		b1[g]=bt[i];
		g++;
	}
    }
