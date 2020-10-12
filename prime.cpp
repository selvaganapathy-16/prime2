#include<iostream>
using namespace std;
bool prime(int n)
{
 int i;
 bool flag=true;
 for(i=2;i<=n/2;++i)
 {
 	if(n % i == 0)
 	{
 		flag=false;
	 }
 }
return flag;	
}
int main()
{
	int i,n;
	bool flag=false;
	cout<<"enter the integer"<<endl;
	cin>>n;
	for(i=2;i<=n/2;++i)
	{
		if(prime(i))
		{
		if(prime(n-i))	
		{
			cout<<n<<"="<< i <<"+"<< n-i<<endl;
		}
		}
	}
}
