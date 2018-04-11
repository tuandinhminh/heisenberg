#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Customer{
	protected:
		int maKH;
		string Ten;
		long cmt;
		long NS;
	public:
		Customer(){
			maKH = 0;
			NS=0;	
			cmt=0;
			Ten="";
		};
		Customer(string ,int ,long ,int);
		string getTen(){
			return Ten;
		}
		int getmaKH(){
			return maKH;
		}
		void setmaKH(int );
		void setTen(string );
		void setcmt(long);
		void setNS(long );
		
};
Customer::Customer(string Ten,int maKH,long cmt,int ngay){
	this->maKH = maKH;
	this->NS=ngay;	
	
	this->cmt=cmt;
	this->Ten =Ten;
		
}
class Account:public Customer{
	protected:
		
		int maTK;
		string tenTK;
		string loaiTK;
		long soDu;
	public:
		Account();
		void nopTien(long );
		void rutTien(long );
		void chuyenKhoan(long ,const Account &);
		void congTienLai(double );
};
class Transaction:public Account{
		int maGD;
		string loaiGD;
		int ngayGD;
		long soTien;
	public:
		Transaction();
		
};
int main(){
	Customer C;
	int ctr;
	cout<<"---------------------------------"<<endl;
	cout<<"1-Them khach hang"<<endl;
	cout<<"2-Them tai khoan"<<endl;
	cin>>ctr;
	if (ctr == 1 ){
		string c;
		cout<<"ten :";
		cin>>c;
		
		int t;
		cout<< "moi nhap ma khach hang :";
		fflush(stdin);
		cin>>t;
		
		Customer C(c,t,3,4);
		cout<<C.getmaKH()<<" "<<C.getTen();
	}
	system("pause");
	return 0;
}
