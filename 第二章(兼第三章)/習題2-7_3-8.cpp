#include <iostream>
using namespace std;

int main()
{ 
	int s , as , am , ah ;
	
	cout << "�п�J���\n" ;
	cin >> s ;
	ah = s/3600 ;
	am = (s % 3600) / 60 ;
	as = s % 60 ;
	cout << s << "��۷��" << ah <<":" << am <<":"<< as <<"\n" ;
	
    return 0;                        
}
