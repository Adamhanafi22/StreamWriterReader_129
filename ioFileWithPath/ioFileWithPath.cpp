#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string baris;

	string namafile;
	cout << "masukan namafile : ";
	cin >> namafile;

	ofstream outfile;
	outfile.open(namafile + ".txt", ios::out);

	cout << ">= Menulis file, \'q'\ untuk keluar" << endl;


	while (true) {
		cout << "_";
		getline(cin, baris);
		if (baris == "q")break;
		outfile << baris << endl;

	}

} 