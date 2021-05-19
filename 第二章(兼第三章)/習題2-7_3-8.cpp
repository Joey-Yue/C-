#include <iostream>
using namespace std;

int main()
{ 
	int s , as , am , ah ;
	
	cout << "請輸入秒數\n" ;
	cin >> s ;
	ah = s/3600 ;
	am = (s % 3600) / 60 ;
	as = s % 60 ;
	cout << s << "秒相當於" << ah <<":" << am <<":"<< as <<"\n" ;
	
    return 0;                        
}
