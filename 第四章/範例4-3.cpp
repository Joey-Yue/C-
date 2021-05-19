#include <iostream>
using namespace std;

int main()
{ 
	float ch , en , ma ;
	
	cout << "請輸入國，英，數成績\n" ;
	cin >> ch >> en >> ma ;
	
	if (ch>=80 && en>=80 && ma>=80)
	{
		cout << "很優秀\n" ;  
	}
	else if (ch>=90 || en>=90 || ma>=90)
	{
		cout << "很優秀\n" ;
	}
	else
	{
		cout << "再加油\n" ;
	}
    return 0;                        
}
