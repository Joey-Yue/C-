#include <iostream>
using namespace std;

int main()
{ 
	float w , hm , hcm , bmi ;
	
	cout << "�п�J�魫(����)\n" ;
	cin >> w ;
	cout << "�п�J����(����)\n" ;
	cin >> hcm ;
	hm = hcm / 100 ;
	bmi = w / (hm * hm) ;
	cout << "BMI��" << bmi <<"\n"  ;
	if (bmi>=24.9)
	{
		cout << "�D�l��ΰ�!\n" ;
	}
	else if (bmi<=18.5)
	{
		cout << "�h�Y�@�I��!\n" ;
	}
	else
	{
		cout << "���d\n" ;
	}
	
    return 0;                        
}
