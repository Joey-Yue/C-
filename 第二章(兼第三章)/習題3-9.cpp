#include <iostream>
using namespace std;

int main()
{ 
	int ntd ;
	float usa , jp ;
	
	cout << "請輸入台幣\n" ;
	cin >> ntd ;
	usa = ntd / 28.5 ;
	jp = ntd / 0.26 ;
	
	cout << "可換美金" << usa << "元,日幣" << jp << "元" <<"\n" ;
	
    return 0;                        
}
