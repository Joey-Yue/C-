#include <iostream>
using namespace std;

int main()
{ 
	int x , y  ;
	int answer ;
	
	cout << "請輸入被除數\n" ;
	cin >> x ;
	cout << "請輸入除數\n" ;
	cin >> y ;
	answer = x % y ;
	cout << "兩數相除為" << x/y << "餘數為" << answer <<"\n"  ;
	
    return 0;                        
}
