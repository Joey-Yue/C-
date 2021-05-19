#include <iostream>
using namespace std;

int main()
{ 
	float pi , r , an1 , an2 ;
	
	pi = 3.14 ;
	cout << "請輸入半徑\n" ;
	cin >> r ;
	an1 = (r * r ) * pi ;
	an2 = 2 * r * pi ;
	cout << "面積為" << an1 << "周長為" << an2 <<"\n"  ;
	
    return 0;                        
}
