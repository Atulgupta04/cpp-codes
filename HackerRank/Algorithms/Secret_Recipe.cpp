//https://www.codechef.com/problems/CHEFRUN
#include <iostream>

using namespace std;

int main()
{
  int t;
	cin>>t;
	while(t--)
	{
		int x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		float a=((float)(x3-x1)/(float)v1);
		float b=(float)(x2-x3)/(float)v2;
		if(a<b)
		cout<<"Chef"<<endl;
		else if(a>b)
		cout<<"Kefa"<<endl;
		else
		cout<<"Draw"<<endl;
	}
}
