#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum,sum1,sum2,sum3,max,n,h,f,tw,th,i,j,k,l,co=0;
	cin>>n;
	cin>>max;
	cin>>h;
	cin>>tw;
	cin>>f;
	cin>>th;
	for(i=0;i<=h;i++)
	{
		sum=i*100;
		if(sum==max&&i<=n&&i>co)
		co=i;
		if(sum<max)
		for(j=0;j<=tw;j++)
		{
			sum1=sum+j*200;
		if(sum1==max&&(i+j)<=n&&(j+i)>co)
		co=j+i;
			if(sum1<max)
			for(k=0;k<=f;k++)
			{
				sum2=sum1+k*500;
				if(sum2==max&&(i+j+k)<=n&&(i+j+k)>co)
				co=i+j+k;
				if(sum2<max)
				for(l=0;l<=th;l++)
				{
					sum3=sum2+l*1000;
					if(sum3==max&&(i+j+k+l)<=n&&(i+j+k+l)>co)
					co=i+j+k+l;
					if(sum3>max)
					l=th+1;
				}
			}
		}
	}
	cout<<co;
	return 0;
}
