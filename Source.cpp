#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int tmp;
	ofstream fout;
	ifstream fin;
	string work;
	string buff;
	cout << "______________________________________����� ���������� � File Explorer!______________________________________" << endl;
	while (true) {
		cout << "����� ������� ���� � ������ ������� '1'" << endl << "����� ������� ���� � ����� ������� ������� '2'"<<endl;
		cin >> tmp;
		switch (tmp) {
		case 1:
			cout << "������� ������ ���� �� �����:   "<<endl;
			cin >> work;
			fin.open(work);
			if (!fin.is_open()) {
				cout << "������ �������� �����!"<<endl;
				break;
			}
			while (fin >> buff);
			cout << "���� ������� ������ � ������!"<<endl;
			break;
		case 2:
			cout << "������� �������� �����:   ";
			cin >> work;
			fout.open(work);
			fout.close();
			cout << "�������!"<<endl;
			break;



		}

	}
}