#include <iostream>
using namespace std;

int main()
{ 
	float a , b , answer ;
	
	cout << "請輸入成績A" << "\n" ;
	cin >> a ;
	cout << "請輸入成績B" << "\n" ;
	cin >> b ;
	answer = (a + b ) / 2 ;
	cout << "總分為" << a + b << "\n" << "平均是" << answer << "\n" ;
	
    return 0;                        
}
