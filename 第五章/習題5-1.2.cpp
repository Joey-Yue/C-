#include <iostream>
using namespace std;

int main()
{ 
	int s,a,p,g;
	s=0;
	a=3;
	p=1;
	g=0;
	
	for (;p<=50;p++)
	{
		g=a*p;
		s=s+g;
	}
	
	cout<<s<<"\n";
	
    return 0;                        
}
