#include <iostream>
#include <string>
#include <fstream>


using namespace  std;

int main() {
  int jumlah_beli,ongkir, bayar, diskon,fiks, jumlah, total,menu,porsi,banyak,uang,all, kembalian;
    float total_semua,harga,jarak;
    string nama_barang[100];

  cout<<"      WAROENG ENAK      "<<endl;
  cout<<"======================="<<endl;
  cout<<"  Menu Makanan        Harga"<<endl<<endl;
  cout<<"1.Ayam Geprek         Rp.21.000,00"<<endl;
  cout<<"2.Ayam Goreang        Rp.17.000,00"<<endl;
  cout<<"3.Udang Goreng        Rp.19.000,00"<<endl;
  cout<<"4.Cumi Goreang        Rp.20.000,00"<<endl;
  cout<<"5.Ayam bakar          Rp.25.000,00"<<endl;

   cout<<"Jumlah Menu yang dipesan : ";cin>>banyak;
  jumlah=1;
  for(jumlah=1; jumlah<=banyak; jumlah++){
  cout<<"Masukkan pilihan menu yang diinginkan:";cin>>menu;

  if(menu==1)
  {
    cout<<"Nama Makanan  : Ayam Geprek "<<endl;
    cout<<"Harga         : Rp. 21.000,00"<<endl;
    cout<<"Jumlah Porsi  : ";cin>>porsi;
    harga=21000;
    total=harga*porsi;
    cout<<"Total Harga : Rp"<<total<<endl;
  }
  else if(menu==2){
  	cout<<"Nama Makanan  : Ayam Goreng"<<endl;
    cout<<"Harga         : Rp. 17.000,00"<<endl;
    cout<<"Jumlah Porsi  : ";cin>>porsi;
    harga=17000;
    total=harga*porsi;
    cout<<"Total Harga : Rp"<<total<<endl;
  }
  else if(menu==3){
  	cout<<"Nama Makanan  : Udang goreng "<<endl;
    cout<<"Harga         : Rp. 19.000,00"<<endl;
    cout<<"Jumlah Porsi  : ";cin>>porsi;
    harga=19000;
    total=harga*porsi;
    cout<<"Total Harga : Rp"<<total<<endl;
  }
  else if(menu==4){
  	cout<<"Nama Makanan  : Cumi Goreang "<<endl;
    cout<<"Harga         : Rp. 20.000,00"<<endl;
    cout<<"Jumlah Porsi  : ";cin>>porsi;
    harga=20000;
    total=harga*porsi;
    cout<<"Total Harga : Rp"<<total<<endl;
  }
  else if(menu==5){
  	cout<<"Nama Makanan  : Ayam bakar  "<<endl;
    cout<<"Harga         : Rp. 25.000,00"<<endl;
    cout<<"Jumlah Porsi  : ";cin>>porsi;
    harga=25000;
    total=harga*porsi;
    cout<<"Total Harga : Rp"<<total<<endl;
  }
  bayar=bayar+total;
  }

    cout<<"Masukkan jarak yang tempat anda:";cin>>jarak;

  if(jarak <3){
        ongkir=15000;
        all=bayar+ongkir;
             if( 25000>all < 50000){
                diskon= 3000;
                diskon=ongkir-diskon;
                fiks=all+ongkir;
                cout<<"Total bayar : Rp."<<fiks<<endl;
                }
            }
  else if(jarak>=3){
    ongkir=15000;
        all=bayar+ongkir;
            if(all>25000<50000){
                diskon=ongkir-(5000*0,15);
                fiks=all+diskon;
                cout<<"Total bayar : Rp."<<fiks<<endl;
                }
  }


  cout<<"---------------------------"<<endl;
  cout<<"Masukan Pembayaran : Rp.";cin>>uang;

  kembalian=uang-fiks;
  cout<<"Kembalian yang diterima Rp"<<kembalian<<endl<<endl;

     fstream daftarBelanja;

daftarBelanja.open ("mytext.txt");
 daftarBelanja<<"      WAROENG ENAK      "<<endl;
 daftarBelanja<<"======================="<<endl;
 daftarBelanja<<"  Menu Makanan        Harga";
 daftarBelanja<<endl<<endl;
 daftarBelanja<<"1.Ayam Geprek         Rp.21.000,00"<<endl;
 daftarBelanja<<"2.Ayam Goreang        Rp.17.000,00"<<endl;
  daftarBelanja<<"3.Udang Goreng        Rp.19.000,00"<<endl;
  daftarBelanja<<"4.Cumi Goreang        Rp.20.000,00"<<endl;
  daftarBelanja<<"5.Ayam bakar          Rp.25.000,00"<<endl;
  daftarBelanja<<"Masukkan pilihan menu yang diinginkan:"<<endl;
cin>>menu;
 daftarBelanja<< "Total bayar : Rp."<<total<<endl;
  daftarBelanja<<"Masukan Pembayaran : Rp."<<endl;cin>>uang;


 daftarBelanja.close();



 // getch();
  return 0;
}

