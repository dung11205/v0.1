#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int tuoi;
	cout << "Nh?p tu?i h?c sinh : " << endl;
	cin >> tuoi;
	if (tuoi == 16)
	{
		cout << "Tu?i c?a h?c sinh l�: " << tuoi << " tuoi." << endl;
		cout << "H?c sinh d? tu?i v�o l?p 10!" << endl;
	}
	else
	{
		cout << "Tu?i c?a h?c sinh l�: " << tuoi << " tuoi." << endl;
		cout << "H?c sinh kh�ng d? tu?i v�o l?p 10!" << endl;
	}

	return 0;
}
