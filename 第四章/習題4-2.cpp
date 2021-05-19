#include <iostream>
using namespace std;

int main()
{ 
	int a , b ;
	
	cout << "叫块计\n" ;
	cin >> a ;
	b = a%2 ;
	
	if(b==0)
	{
		cout << a << "琌案计\n" ;
	}
	else
	{
		cout << a << "琌计\n" ;
	}
	
    return 0;                        
}
