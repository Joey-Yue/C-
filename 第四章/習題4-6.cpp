#include <iostream>
using namespace std;

int main()
{ 
	int o , ap , ma ;
	
	cout << "�п�Jī�G�M��l�ƶq\n" ;
	cin >> ap >> o ;
	ma = ap * 15 + o * 5 ;
	
	if (ma>500)
	{
		cout << "�`�@" << ma << "��?! �藍�_!�ڿ�����\n" ;
	}
	else
	{
		cout << "�`�@" << ma << "���A�Ч��" << 500-ma << "��" <<"\n" ;
	}
	
    return 0;                        
}
