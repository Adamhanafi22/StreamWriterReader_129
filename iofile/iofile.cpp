#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string baris;

	//memasukan file spesifik
	//string namafile;
	//cout << "masukan namafile : ";
	//cin >> namafile;
	 
	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk kesebuah nama file
	outfile.open("contohfile.txt");
	//outfile.open("contohfile.txt",ios::out);
	//outfile.open("D:\pemrograman Dasar\contoh.txt")

	cout << ">=  Menulis file, \'q'\ untuk keluar" << endl;

	//unlimitied loop untuk menulis
	while (true) {
		cout << "_";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop kan berhenti jika memasukan karakter q
		if (baris == "q")break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup file nya
	outfile.close();

	//membuka file dalam mode ,e,baca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= membuka data membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			//dan tampilkan disini
			cout << baris << '\n';

		}
		//tutup file tersebut setelah selesai
		infile.close();

	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to open file";
	return 0;
}
