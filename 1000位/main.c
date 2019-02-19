#include<stdio.h>

int main()
{
    int a[1000]={0};
	int m,i,j,n;
	n=0;
	a[0]=1;
    for(m=1;;m++)
	{
		for(j=0;j<1000;j++)
			a[j]=a[j]*m;
	    for(i=0;i<1000;i++)
		{
			a[i+1]+=a[i]/10000;
			a[i]=a[i]%10000;
		}
		if(a[250]>0)break;
	}
	printf("m=%d\n",m);
	for(i=999;i>=0;i--)
	{

	    if(a[i]!=0)break;

	}
	printf("m!=\n");
	for(;i>=0;i--)
	{
		printf("%04d",a[i]);
		n++;
		if(n%10==0)
		{
		    printf("\n");
		}

	}
	printf("\n");
	while(1);
	return 0;
}