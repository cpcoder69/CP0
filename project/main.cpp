#include"myLib.h"

int main()
{
	int a, b;
	cout<<"enter a, b";
	cin>>a>>b;
	cout<<"\n"<<a<<" + "<<b<<" = "<<sum(a, b )<<"\n";
	cout<<"\n"<<a<<" * "<<b<<" = "<<prod(a, b )<<"\n";
}
