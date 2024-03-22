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
		cout << "Tu?i c?a h?c sinh là: " << tuoi << " tuoi." << endl;
		cout << "H?c sinh d? tu?i vào l?p 10!" << endl;
	}
	else
	{
		cout << "Tu?i c?a h?c sinh là: " << tuoi << " tuoi." << endl;
		cout << "H?c sinh không d? tu?i vào l?p 10!" << endl;
	}

	return 0;
}
