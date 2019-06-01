#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

class aset {
    public :    virtual float hitlu()=0;
		        virtual float hitvol()=0;	
		        void input();
		        void cetak();
	protected : float panjang,lebar,tinggi,diameter;
	            string benda[10];
};
class umum : public aset{
		public : float luas;
	         umum(){	
		         float p,l,t,d;
		         panjang = p;
		         lebar = l;
		         tinggi=t;
		         diameter=d;
             }
	void input(){
			fflush(stdin);
			cout<<"Masukan nama objek baru  : ";getline(cin,benda[0]);fflush(stdin);
			cout<<"Masukan panjang          : ";cin>>panjang;
			cout<<"Masukan lebar            : ";cin>>lebar;
			cout<<"Masukan tinggi           : ";cin>>tinggi;
			cout<<"Masukan diameter         : ";cin>>diameter;fflush(stdin);
			cout<<"Bahan                    : ";getline(cin,benda[1]);
			cout<<"Warna                    : ";getline(cin,benda[2]);
			cout<<"Penempatan               : ";getline(cin,benda[3]);
			cout<<"Elektrik                 : ";getline(cin,benda[4]);
			cout<<"Fungsi                   : ";getline(cin,benda[5]);
	}
	void cetak(){
		cout<<"Informasi Objek : "<<endl<<endl;
		if(panjang!=0)
		cout<<"Panjang		: "<<panjang<<" m"<<endl;
		if(lebar!=0)
		cout<<"Lebar		: "<<lebar<<" m"<<endl;
		if(tinggi!=0)
		cout<<"Tinggi		: "<<tinggi<<" m"<<endl;
		if(diameter!=0)
		cout<<"Diameter		: "<<diameter<<" m"<<endl;
		cout<<"Bahan		: "<<benda[1]<<endl;
		cout<<"Warna		: "<<benda[2]<<endl;
		cout<<"Penempatan	: "<<benda[3]<<endl;
		cout<<"Elektrik        : "<<benda[4]<<endl;
		cout<<"Fungsi		: "<<benda[5]<<endl;
	}
	float hitlu(){
		if (panjang,lebar !=0){
			luas=panjang*lebar;
			cout<<"Luas	: "<<luas<<" m^2"<<endl;
		}
		else luas=3.14*diameter;
		cout<<"Luas	: "<<luas<<" m^2"<<endl;
	}
	float hitvol(){
		if (panjang,lebar,tinggi!=0)
		cout<<"Volume	: "<<panjang*lebar*tinggi<<" m^3"<<endl;
		else cout<<"Volume	: tidak ada!"<<endl;
	}
	void cetaknama(){
		cout<<benda[0]<<endl;
	}
	umum operator +(umum  b2){
		umum  temp;
		temp.luas = luas + b2.luas;
		return temp;
	}
	void tampil(){
		cout<<"Total luas semua objek : "<<luas;
	}
};
int main() {
	int pilihan,a,jml;
	umum obj[999];
	umum z;
	umum w;
	awal:
	do {
		system("cls");
		cout<<"MENU PROGRAM"<<endl;
		cout<<"---------------------"<<endl;
		cout<<" 1 : Masukan Atribut"<< endl;
		cout<<" 2 : Informasi Dimensi"<< endl;
		cout<<" 3 : Informasi Objek"<< endl;
		cout<<" 4 : Analisis Ruang Yang Tersedia"<< endl;
		cout<<" 0 : Keluar Program"<<endl;
		cout<<"---------------------"<<endl;
		cout<< " Pilih Menu : " ; cin >> pilihan;
		cout<<"---------------------"<<endl;
		switch(pilihan){
			case 1: try{
					cout<<"Masukan nomor objek baru : ";cin>>a;
					if (a<=0){throw a;} obj[a].input();break;}
					catch(...){cout<<"tidak boleh kosong!!!"<<endl;getch();goto awal;}
			case 2: cout<<"Masukan total objek yang ingin ditampilkan: ";cin>>jml;
					cout<<"SLOT OBJEK"<<endl;
					cout<<"---------------------"<<endl;
					for (int i=1;i<=jml;i++){
					cout<<i<<". ";obj[i].cetaknama();}
					cout<<"---------------------"<<endl;
					cout<<"Pilih objek : ";cin>>a;
					cout<<"---------------------"<<endl;
					obj[a].hitlu();obj[a].hitvol();break;
			case 3: cout<<"Masukan total objek yang diinginkan : ";cin>>jml;
					cout<<"SLOT OBJEK"<<endl;
					cout<<"---------------------"<<endl;
					for (int i=0;i<jml;i++){
					cout<<i<<". ";obj[i].cetaknama();}
					cout<<"---------------------"<<endl;
					cout<<"Pilih objek : ";cin>>a;
					cout<<"---------------------"<<endl;
					obj[a].cetak();break;
			case 4: cout<<"Luas Ruangan = 25 m^2"<<endl;
					z=obj[1]+obj[2]+obj[3]+obj[4];
					z.tampil();cout<<endl;
					cout<<"Sisa kapasitas ruang : "<<25-z.luas <<endl;
		}getch();
	}while (pilihan!=0);
return 0;
}
