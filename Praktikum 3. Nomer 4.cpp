// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
# sertakan  < malloc.h >

menggunakan  namespace  std ;

 simpul struktur {
	int informasi;
	struct  simpul *tautan;
}*depan = NULL , *belakang = NULL ;

 sisipan kosong ();
int  del ();
 tampilan kosong ();

kekosongan  sisipan ( int num){
	struct  simpul *temp;
	temp = ( struct  node *) malloc ( sizeof ( struct  node ));
	
	jika (temp== NULL ){
		cout<< " Ruang antrian penuh " ;
		kembali ;
	}
	
	suhu -> info = angka;
	suhu -> tautan = NULL ;
	
	if (depan == NULL ){
		depan = suhu;
	} lain {
		belakang -> tautan = suhu;
	}
	belakang = suhu; 
}

int  del (){
	int nomor;
	struct  simpul *temp;
	
	if (depan == NULL ){
		cout<< " Ruang antrian kosong " ;
		kembali  0 ;
	}
	suhu = depan;
	num = suhu-> info ;
	depan = depan-> tautan ;
	gratis (suhu);
	kembali nomor;
}

 tampilan kosong (){
	 simpul struktur *p;
	
	if (depan == NULL ){
		cout<< " Ruang antrian kosong " ;
		kembali ;
	}
	
	p = depan;
	cout << " \n Elemen Antrian: \n " << endl;
	sementara (p != NULL ){
		cout<<p-> info <<endl;
		p = p-> tautan ;
	}
}

int  utama (){
	int pil;
	int nomor;
	
	lakukan {
	cout<<endl;
	cout<< " Daffa Fauzan Hadiansyah \n " ;
	cout<< " 20051397024 \n " ;
	cout<< " 2020B MI \n " ;
		cout << " \t ========================================== ================================ " << endl;
		cout << " \t\t\t                           PILIHAN                       \t " << endl;
		cout << " \t ========================================== ================================ " << endl;
		cout << " \t\t 1. -.Insert.- (Memasukkan nomor plat mobil) " << endl;
		cout << " \t\t 2. -.Delete.- (Mengeluarkan nomor plat mobil / nomor paling depan keluar) " << endl;
		cout << " \t\t 3. Tampilkan Data Nomor Plat moibil " << endl;
		cout << " \t\t 4. Keluar " << endl;
		
		cout << " Masukkan Pilihan (1/2/3/4/5) : " ;
		cin >> pil;

		beralih (pil){
		kasus  1 :
		{
			cout << " \ nMasukkan Nomor Plat: " ;
			cin >> angka;
			masukkan (angka);
			istirahat ;
		}
		kasus  2 :
		{
			cout<<endl;
			del ();
			istirahat ;
		}
		kasus  3 :
 		{
			cout<<endl;
			tampilan ();
			istirahat ;
		}
		}
	}
	sementara (pil != 4 );
}
