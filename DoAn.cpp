#include <iostream>
#include <fstream>
#include <string>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <cstring>
#include <sstream>

using namespace std;

string NumtoString(int Number){
	stringstream convert;
	convert << Number;  // nh?n giá tr? c?a tham s? truy?n vào
	return convert.str(); //s? d?ng method c?a ki?u stringstream, chuy?n sang ki?u string
}

class Customer {
protected:
	long int maKH;
	string Ten;
	long cmt;
	string NS;
public:
	Customer() {
		maKH = 0;
		NS = "";
		cmt = 0;
		Ten = "";
	};
	Customer(string, int, long, string);
	string getTen() {
		return Ten;
	}
	int getmaKH() {
		return maKH;
	}
	int getCMT() {
		return cmt;
	}
	string getNgaySinh() {
		return NS;
	}
	void setmaKH(int);
	void setTen(string);
	void setcmt(long);
	void setNS(int);

};
Customer::Customer(string Ten, int maKH, long cmt, string ngay) {
	this->maKH = maKH;
	this->NS = ngay;

	this->cmt = cmt;
	this->Ten = Ten;

}
class Account :public Customer {
protected:

	int maTK;
	string tenTK;
	string loaiTK;
	long soDu;
public:
	Account();
	void nopTien(long);
	void rutTien(long);
	void chuyenKhoan(long, const Account &);
	void congTienLai(double);
};
class Transaction :public Account {
	int maGD;
	string loaiGD;
	int ngayGD;
	long soTien;
public:
	Transaction();

};
int main() {
	//Customer C;
	int ctr;
	cout << "---------------------------------" << endl;
	cout << "1-Them khach hang" << endl;
	cout << "2-Them tai khoan" << endl;
	cin >> ctr;
	if (ctr == 1) {
		string Ten;
		cout << "Nhap ten khach hang:";
		std::fflush(stdin);
		getline(std::cin, Ten);
		
		srand(time(NULL));
		long int maKH = rand();
		std::fflush(stdin);
//		cout << "Moi nhap ma khach hang :";
//		std::fflush(stdin);
//		cin >> t;

		int CMT;
		cout << "Nhap so chung minh thu:";
		cin>>CMT;
		
		int a = 10;
		string str =NumtoString(a);
		
		int ngay;
		cout << "Nhap ngay sinh:";
		cin >> ngay;
		int thang;
		cout << "Nhap thang sinh:";
		cin >> thang;
		int nam;
		cout << "Nhap nam sinh:";
		cin >> nam;
		
		string ngaySinh = NumtoString(ngay) + "/" + NumtoString(thang) + "/" + NumtoString(nam);
		
		Customer C(Ten, maKH, CMT, ngaySinh);
		cout << C.getmaKH() << " " << C.getTen()<< " " << C.getCMT() <<" "<<C.getNgaySinh();
	}
	
	return 0;
}
