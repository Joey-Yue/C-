#include <iostream>
using namespace std;

int main()
{ 
	char level ;
	int money ;
	float rate;
	
	cout << "請輸入客戶等級\n" ;
	cin >> level ;
	cout << "請輸入存金\n" ;
	cin >> money ;
	cout << "請輸入利率\n" ;
	cin >> rate ;
	cout << "等級:" << level <<"\n" << "存金:" << money << "\n"<< "利率:" << rate ;
	
    return 0;                        
}
