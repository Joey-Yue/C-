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
	if (bmi>=24.9)
	{
		cout << "胖子減肥啦!\n" ;
	}
	else if (bmi<=18.5)
	{
		cout << "多吃一點啦!\n" ;
	}
	else
	{
		cout << "健康\n" ;
	}
	
    return 0;                        
}
