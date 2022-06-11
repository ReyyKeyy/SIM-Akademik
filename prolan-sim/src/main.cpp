#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int dd, mm, yy, tahunmasuk, semesterke, skslulus;
	int id, pendidikan;
	string idmhs, iddosen, idunit;
	string nama, nrp, npp, departemen, unit;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << "\n" << "\n";
		cout << "Data statistik:" << "\n";
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << "\n";
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << "\n";
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << "\n";
		cout << "\n";
		cout << "Menu: " << "\n";
		cout << "  1. Tambah Mahasiswa" << "\n";
		cout << "  2. Tambah Dosen" << "\n";
		cout << "  3. Tambah Tenaga Kependidikan" << "\n";
		cout << "  4. Tampilkan semua Mahasiswa" << "\n";
		cout << "  5. Tampilkan semua Dosen" << "\n";
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << "\n";
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					idmhs = to_string(1);
					cout << "Nama :";
					cin.ignore();
					getline(cin, nama);
					cout << "NRP :";
					cin >> nrp;
					cout << "Tanggal Lahir :";
					cin >> dd;
					cout << "Bulan Lahir :";
					cin >> mm;
					cout << "Tahun Lahir :";
					cin >> yy;
					cout << "Departemen :";
					cin.ignore();
					getline(cin, departemen);
					cout << "Tahun Masuk :";
					cin >> tahunmasuk;
					cout << "Semester Kuliah :";
					cin >> semesterke;
					cout << "Jumlah SKS Lulus :";
					cin >> skslulus;

					mahasiswa Mhs(idmhs, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(Mhs);
				}
				break;
			case 2:
				{
					cout << "Nama :";
					cin.ignore();
					getline(cin, nama);
					cout << "NPP :";
					cin >> npp;
					cout << "Tanggal Lahir :";
					cin >> dd;
					cout << "Bulan Lahir :";
					cin >> mm;
					cout << "Tahun Lahir :";
					cin >> yy;
					cout << "Departemen :";
					cin.ignore();
					getline(cin, departemen);
					cout << "Pendidikan Terakhir :";
					cin.ignore();
					cin >> pendidikan;

					dosen Dsn(iddosen, nama, dd, mm, yy, npp, departemen, pendidikan);
					recDosen.push_back(Dsn);
				}
				break;
			case 3:
				{
					cout << "Nama :";
					cin.ignore();
					getline(cin, nama);
					cout << "NPP :";
					cin >> npp;
					cout << "Tanggal Lahir :";
					cin >> dd;
					cout << "Bulan Lahir :";
					cin >> mm;
					cout << "Tahun Lahir :";
					cin >> yy;
					cout << "Unit :";
					cin >> unit;

					tendik Tdk(idunit, nama, dd, mm, yy, npp, unit);
					recTendik.push_back(Tdk);
			}
				break;
			case 4:
				{
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "\nNama Mahasiswa :" << recMhs[i].getNama() << "\n";
						cout << "NRP Mahasiswa : " << recMhs[i].getNRP() << "\n";
						cout << "Tanggal Lahir Mahasiswa :" << recMhs[i].getTglLahir();
						cout << "-" << recMhs[i].getBulanLahir();
						cout << "-" << recMhs[i].getTahunLahir() << "\n";
						cout << "Departemen Mahasiswa :" << recMhs[i].getDepartemen() << "\n";
						cout << "Tahun Masuk Mahasiswa :" <<recMhs[i].gettahunmasuk() << "\n";
						cout << "Mahasiswa Semester :" << recMhs[i].getSemester() << "\n";
						cout << "SKS Mahasiswa :" << recMhs[i].getSKSLulus() << "\n" << "\n";
					}
				break;
				}
			case 5:
				{
					for (int i=0; i < recDosen.size(); i++)
					{
						cout << "Nama Dosen : " << recDosen[i].getNama() << "\n";
						//cout << "NPP Dosen : " << recDosen[i].getNPP() << "\n";//
						cout << "Tanggal lahir Dosen : " << recDosen[i].getTglLahir();
						cout << "-" << recDosen[i].getBulanLahir();
						cout << "-" << recDosen[i].getTahunLahir() << "\n";
						//cout << "Departemen Dosen : " << recDosen[i].getDepartemen() << "\n" ;//
						cout << "Pendidikan Dosen : Sarjana " << recDosen[i].getPendidikan() << "\n" << "\n";
					}
				}
				break;
			case 6:
				{
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Nama Tendik : " << recTendik[i].getNama() << "\n";
						cout << "NPP Tendik : " << recTendik[i].getNPP() << "\n";
						cout << "Tanggal Lahir Tendik : " << recTendik[i].getTglLahir();
						cout << "-" << recTendik[i].getBulanLahir();
						cout << "-" << recTendik[i].getTahunLahir() << "\n";
						cout << "Unit Tendik : " << recTendik[i].getUnit() << "\n" << "\n";
					}
				}
				break;
		}
	}
	return 0;
}
