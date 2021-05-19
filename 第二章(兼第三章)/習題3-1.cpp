#include <iostream>
using namespace std;

int main()
{ 
	float a , b , c ,answer ;
	
	cout << "請輸入成績A" << "\n" ;
	cin >> a ;
	cout << "請輸入成績B" << "\n" ;
	cin >> b ;
	cout << "請輸入成績C" << "\n" ;
	cin >> c ;
	answer = a + b  ;
	cout << "總分為" << answer << "\n" << "平均是" << answer / 3 << "\n" ;
	
    return 0;                        
}
