#include <iostream>
using namespace std;

int main()
{ 
	float ch , en , ma ;
	
	cout << "�п�J��A�^�A�Ʀ��Z\n" ;
	cin >> ch >> en >> ma ;
	
	if (ch>=80 && en>=80 && ma>=80)
	{
		cout << "���u�q\n" ;  
	}
	else if (ch>=90 || en>=90 || ma>=90)
	{
		cout << "���u�q\n" ;
	}
	else
	{
		cout << "�A�[�o\n" ;
	}
    return 0;                        
}
