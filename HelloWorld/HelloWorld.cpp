#include <iostream>		
using namespace std;

int main() {
	int i = 0;
	setlocale(LC_ALL, "Ru");
	cout << "sanya huy sosi, okay?" << endl;
	do {
		cout << "����, ��� ����, ��? " << i << endl;
		i++;
	} while (i < 100);
	cout << "						�����������, �� ������!" << endl;
	cin >> i;
	return 0;
}


