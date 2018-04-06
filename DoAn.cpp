#include <iostream>
#include <fstream>
using namespace std;
class Customer{
	protected:
		int maKH;
		char *Ten;
		unsigned long cmt;
		int NS[3];
	public:
		Customer();
		~Customer();
		
		
};

class Account:public Customer{
	protected:
		int maTK;
		bool loaiTK=false;
		long soDu;
	public:
		Account();
		~Account();
		void nopTien(long );
		void rutTien(long );
		void chuyenKhoan(long ,const Account &);
		void congTienLai(double );
};
class Transaction:public Account{
	
};
int main(){
	return 0;
}
