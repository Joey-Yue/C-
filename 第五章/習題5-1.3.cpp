#include <iostream>
using namespace std;

int main()
{ 
	int s,a;
	s=0;
	a=50;
	
	for (int q;q<26;q++)
	{
		s=s+a;
		a=a-2;
	}
	
	cout<<s<<"\n";
	
    return 0;                        
}
