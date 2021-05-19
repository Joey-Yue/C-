#include <iostream>
using namespace std;

int main()
{ 
	int o , ap , ma ;
	
	cout << "請輸入蘋果和橘子數量\n" ;
	cin >> ap >> o ;
	ma = ap * 15 + o * 5 ;
	
	if (ma>500)
	{
		cout << "總共" << ma << "元?! 對不起!我錢不夠\n" ;
	}
	else
	{
		cout << "總共" << ma << "元，請找我" << 500-ma << "元" <<"\n" ;
	}
	
    return 0;                        
}
