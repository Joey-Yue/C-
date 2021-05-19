#include <iostream>
using namespace std;

int main()
{ 
	float c , f  ;
	
	cout << "請輸入華式溫度\n" ;
	cin >> f ;
	c = (f - 32) * 5 / 9 ;
	cout << "攝氏為" << c <<"\n"  ;
	
    return 0;                        
}
