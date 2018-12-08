#include <iostream>
#include <string>
using namespace std;

int harga[100],jumlah[100],sub=0;
string nama[100];
long nota,trans,bayar,total[100],diskon,ppn,grand,kembalian;



int main() 
{
	cout << "=======================================================================" << endl;
	cout << "                             AZIS SWALAYAN                           " << endl;
	cout << "=======================================================================" << endl;
	cout << "No.Nota : ";
	cin >> nota;
	cout << "Jumlah Transaksi : ";
	cin >> trans;
	cout << endl;

	
	

	 for (int c=1;c<=trans;c++) {
		cout << "Transaksi Ke - " << c << endl;
		cout << "Nama Barang : ";
		cin >> nama[c];
		cout << "Harga Satuan : ";
		cin >> harga[c];
		cout << "Jumlah Beli : ";
		cin >> jumlah[c];
		cout << endl;
		total[c] = harga[c] * jumlah[c];
			cout << "Bayar       : Rp. "; cin >> bayar;
	 }
	 for (int d=1;d<=trans;d++) {sub = sub + total[d];}
	 if (sub > 180000) {diskon = sub * 0.15;}
     else if (sub>70000){diskon = sub * 0.05;}
     else {diskon = 0;}
	 ppn = 0.1 * sub;
	 grand = sub - diskon + ppn;
	kembalian = bayar - grand;

	system ("cls");
	
	cout << "                    AZIS SWALAYAN                 " << endl;
	cout << "               JL. ANTILOP 29           " << endl;
	cout << "Nama Brg                 @Harga               Jml Beli" << endl;
	cout << "======================================================" << endl;
	for (int m=1;m<=trans;m++) {
		cout << nama[m];
		cout << "                     " << harga[m];
		cout << "                     " << jumlah[m] << endl;
	}
	cout << "======================================================         " << endl;
	cout << "SubTotal    : Rp. "<< sub <<  endl;
    cout << "Diskon      : Rp. "<< diskon << endl;
    cout << "Grand Total : Rp. "<< grand << endl;
    cout << "Bayar       : Rp. "<<bayar<<endl;
    cout << "Kembalian   : Rp. "<< kembalian << endl;
	cout << endl;
    cout << "Terimakasih Atas ";
    cout << "Kunjungan Anda !!!" << endl;
	cout << endl;
	
	char LG;
cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main(); 
else if (LG=='T' || LG=='t') goto x;
x:4;

	return (0);
}
