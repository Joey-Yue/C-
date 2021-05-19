#include <iostream>
using namespace std;

int main()
{ 
	float w , hm , hcm , bmi ;
	
	cout << "請輸入體重(公斤)\n" ;
	cin >> w ;
	cout << "請輸入身高(公分)\n" ;
	cin >> hcm ;
	hm = hcm / 100 ;
	bmi = w / (hm * hm) ;
	cout << "BMI為" << bmi <<"\n"  ;
	
    return 0;                        
}
