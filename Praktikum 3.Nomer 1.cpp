// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
menggunakan  namespace  std ;

int antrian[ 5 ];
int depan = - 1 , belakang = - 1 , n= 5 ;

void  insertCQ ( int val) {
	cout<< " Daffa Fauzan Hadiansyah \n " ;
	cout<< " 20051397024 \n " ;
	cout<< " 2020B MI \n " ;
   if ((depan == 0 && belakang == n- 1 ) || (depan == belakang+ 1 )) {
      cout<< " Antrian Meluap \n " ;
      kembali ;
   }
   if (depan == - 1 ) {
      depan = 0 ;
      belakang = 0 ;
   } lain {
      jika (belakang == n - 1 )
      belakang = 0 ;
      lain
      belakang = belakang + 1 ;
   }
   cqueue[belakang] = val ;
}
batal  hapusCQ () {
   if (depan == - 1 ) {
      cout<< " Antrian Di Bawah Arus \n " ;
      kembali ;
   }
   cout<< " Elemen yang dihapus dari antrian adalah : " <<cqueue[depan]<<endl;

   if (depan == belakang) {
      depan = - 1 ;
      belakang = - 1 ;
   } lain {
      jika (depan == n - 1 )
      depan = 0 ;
      lain
      depan = depan + 1 ;
   }
}
batal  tampilanCQ () {
   int f = depan, r = belakang;
   if (depan == - 1 ) {
      cout<< " Antrian kosong " <<endl;
      kembali ;
   }
   cout<< " Elemen antrian adalah : \n " ;
   jika (f <= r) {
      sementara (f <= r){
         cout<<cqueue[f]<< "  " ;
         f++;
      }
   } lain {
      while (f <= n - 1 ) {
         cout<<cqueue[f]<< "  " ;
         f++;
      }
      f = 0 ;
      sementara (f <= r) {
         cout<<cqueue[f]<< "  " ;
         f++;
      }
   }
   cout<<endl;
}
int  utama () {

   int ch, val;
   cout<< " 1)Masukkan \n " ;
   cout<< " 2)Hapus \n " ;
   cout<< " 3)Tampilan \n " ;
   cout<< " 4)Keluar \n " ;
   lakukan {
      cout<< " Masukkan pilihan : " <<endl;
      cin>>ch;
      beralih (ch) {
         kasus  1 :
         cout<< " Masukan untuk penyisipan: " <<endl;
         cin>>val;
         masukkanCQ (val);
         istirahat ;

         kasus  2 :
         hapusCQ ();
         istirahat ;

         kasus  3 :
         tampilanCQ ();
         istirahat ;

         kasus  4 :
         cout<< " Keluar \n " ;
         istirahat ;
         default : cout<< " Salah! \n " ;
      }
   } while (ch != 4 );
   kembali  0 ;
}
