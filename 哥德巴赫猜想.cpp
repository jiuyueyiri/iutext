#include<stdio.h>
int main()
{
	int i,j,n,h,panduan;
	scanf("%d",&n);
	for(i=2;i<=(n-1);i++)
	{
		for(j=2;j<=(i-1);j++)
		{
			panduan=1;
			if(i%j==0)
			{
				panduan=2;
				break; 
			}
		}
		if(panduan==1)
		{
			h=n-i;
			for(j=2;j<=(h-1);j++)
			{
				panduan=1;
				if(h%j==0)
				{
					panduan=2;
					break;
				}
			}
			if(panduan==1)
			{
				printf("%d %d",i,n-i);
				break;
		    }
		}
	}
	return 0;
}
