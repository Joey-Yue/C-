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
	
    return 0;                        
}
