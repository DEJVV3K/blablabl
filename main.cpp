#include <iostream>
using namespace std;

int t[121]; int a;
int main () 
{
	cout << "Podaj liczbe od 1-119 : " << endl;
	cin >> a;
	
	for (int i=0; i<121; i++)
	{
		t[i]=0;
	}
	
	t[a]=100;
	t[a-1]=10;
	t[a+1]=10;
	
	for (int i=120; i>0; i--)
	{
		cout << t[i] << "-";
	}	
	getchar();
	return 0;
}
