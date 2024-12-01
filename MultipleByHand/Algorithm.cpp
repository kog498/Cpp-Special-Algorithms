#include<iostream>
using namespace std;

int demChuSo(int n) {
	int dem = 0;
	while (n != 0) {
		dem++;
		n /= 10;
	}
	return dem;
}

int main() {
	// Nhap hai so a va b
	int a, b;
	cout << "Nhap chu so thu 1: "; cin >> a;
	cout << "Nhap chu so thu 2: "; cin >> b;
	if (b > a) {
		int c = a;
		a = b;
		b = c;
	}

	int tam;

	//Dem chu so A, B de in ra khoang trang cho B
	int demChuSoA = demChuSo(a);
	int demChuSoB = demChuSo(b);

	cout << "     " << a << endl;
	for (int i = 1; i <= demChuSoA - demChuSoB; i++) {
		cout << " ";
	}
	cout << "     " << b << endl;
	cout << "------------------------\n";

	tam = b;
	int soKhoangTrang = 5;
	int doLechChieuDaiSo;

	// Xu li truoc toan hang 1
	int soNhan = tam % 10;
	int toanHang = a * soNhan;
	int demChuSoToanHang = demChuSo(toanHang);

	doLechChieuDaiSo = demChuSoToanHang - demChuSoA;
	for (int i = soKhoangTrang - doLechChieuDaiSo; i > 0; i--) {
		cout << " ";
	}
	soKhoangTrang--;
	cout << toanHang << endl;
	tam /= 10;

	// Cac toan hang sau
	int demChuSoToanHangTruoc = demChuSoToanHang;
	while (tam != 0) {
		soNhan = tam % 10;
		toanHang = a * soNhan;
		demChuSoToanHang = demChuSo(toanHang);
		if (demChuSoToanHang > demChuSoToanHangTruoc) {
			soKhoangTrang--;
			doLechChieuDaiSo = demChuSoToanHang - demChuSoToanHangTruoc;
			for (int i = soKhoangTrang - 1 - doLechChieuDaiSo; i > 0; i--) {
				cout << " ";
			}
		}
		else if (demChuSoToanHang == demChuSoToanHangTruoc) {
			soKhoangTrang--;
			for (int i = soKhoangTrang; i > 0; i--) {
				cout << " ";
			}
		}
		else {
			for (int i = soKhoangTrang; i > 0; i--) {
				cout << " ";
			}
		}
		cout << toanHang << endl;
		tam /= 10;
		demChuSoToanHangTruoc = demChuSoToanHang;
	}

	cout << "------------------------\n";
	int tich = a * b;
	int demChuSoTich = demChuSo(tich);
	doLechChieuDaiSo = demChuSoTich - demChuSoA;
	for (int i = 5 - doLechChieuDaiSo; i > 0; i--) {
		cout << " ";
	}
	cout << tich << endl;
	return 1;
}
