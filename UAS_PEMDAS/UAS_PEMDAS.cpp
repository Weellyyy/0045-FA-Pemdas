#include <iostream>
using namespace std;

class MasukUniversitas {
protected	: // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;

	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() { 
		
		return; 
	}
	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama= nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}
	void setUangBangunan(int nilai) {
		this->uangBangunan;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}
		
	// isi setter dan getter variable yang dibutuhkan di bawah ini
	
};
class SNBT : public MasukUniversitas {
public:
	void input() {
		cout << "Masukan Uang Pendaftaran : ";
		cin >> uangPendaftaran;
		cout << "Masukan Uang Semester Pertama : ";
		cin >> uangSemesterPertama;
		cout << "Masukan Uang Bangunan : ";
		cin >> uangBangunan;
	}
	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
	}

	void tampilkanTotalBiaya() {
		cout << "Total Biaya: " << totalBiaya << endl;
	}
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	void input() {
		cout << "Masukan Uang Pendaftaran : ";
		cin >> uangPendaftaran;
		cout << "Masukan Uang Semester Pertama : ";
		cin >> uangSemesterPertama;
	}
	void hitungTotalBiaya() {
		totalBiaya = uangPendaftaran + uangSemesterPertama;
	}
	void tampilkanTotalBiaya() {
		cout << "Total Biaya: " << totalBiaya << endl;
	}
	// isi disini untuk melengkapi class SNBP
};
int main() {

	int pilihan;
	cout << "1.SNBT" << endl;
	cout << "2.SNBP" << endl;
	cout << "3.Keluar" << endl;
	cout << "Masukkan Pilihan Anda: ";
	cin >> pilihan;
	
	MasukUniversitas* namaJalurMasuk;
	namaJalurMasuk;
	
	
	return 0;
	// isi disini untuk fungsi main
}