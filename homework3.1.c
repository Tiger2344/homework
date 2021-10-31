#include<stdio.h> 
#include<math.h>
int isprime(int a);

int main()
{
	int i;
	int cnt=0;
	int num[9900];
	int sum=0;
	for(i=100;i<=10000;i++)
	{
		if(isprime(i)==0)
		{
			num[cnt]=i;
			cnt++;
		}
	}
	int x;
	float average;
	x=cnt;
	for(cnt=cnt;cnt>=0;cnt--)
	{
		printf("%d\n",num[cnt]);
		sum=sum+num[cnt];
	}
	average=sum*1.0/x;
		printf("average is :%f",average);
	return 0;
}
int isprime(int i)
{
	int check=0;
	int k;
	for(k=2;k<=sqrt(i);k++)
	{
		if(i%k==0)
		{
			check=1;
			break;
		}
	}
	if(check==0)
	{
		int t=0;
		int sk[5];
		while(i>0)
		{
			sk[t]=i%10;
			i=i/10;
			t++;
		}
		int sum=0;
		for(t=t;t>=0;t--)
		{
			sum=sum+sk[t];
		}
		for(k=2;k<=sqrt(sum);k++)
		{
			if(sum%k==0)
			{
				check=1;
				break;
			}
		}
		if(check==0)
		{
			sum=0;
			for(t=t;t>=0;t--)
			{
				sum=sum+sk[t]*sk[t];
			}
			for(k=2;k<=sqrt(sum);k++)
			{
				if(sum%k==0)
				{
					check=1;
					break;
				}
			}
		}	
	}
    return check;
}
