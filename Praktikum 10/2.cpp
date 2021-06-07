// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
# sertakan  < conio.h >
# sertakan  < string.h >
menggunakan  namespace  std ;

utama ()
{
    int jd,no,kiri,kanan,tengah;
    char data[ 20 ][ 50 ],cari[ 20 ];
	cout<< " Daffa Fauzan Hadiansyah \n " ;
	cout<< " 20051397024 \n " ;
	cout<< " 2020B MI \n " ;
   cout<< " \n\t\t -------------------------------------- \ n " ;
   cout<< " \t\t | \t\t\t\t        | \n " ;
   cout<< " \t\t | \t      Proses Pencarian \t        | \n " ;
   cout<< " \t\t | Menggunakan Algoritma Binary Search | \n " ;
   cout<< " \t\t | \t\t\t\t        | \n " ;
   cout<< " \t\t ---------------------------------------- \n\ n\n " ;

    cout<< " Masukkan Jumlah Data : " ;
    cin>>jd;

   cout<<endl;
    untuk (tidak= 0 ;tidak<jd;tidak++)
    {
        cout<< " Masukan Data Ke- " <<(tidak+ 1 )<< "     : " ;
       cin>>data[tidak];
    }

   cout<<endl;
    cout<< " Masukan Nilai Dicari : " ;
    cin>>cari;

    kiri= 0 ;
    kanan=jd- 1 ;
   center=(kanan-kiri)/ 2 ;

    while (( strcmp (data[center],cari)!= 0 ) && (kiri>= 0 )&& (kanan<jd) && (kanan>=kiri))
    {
        if ( strcmp (cari,data[center])> 0 )
       {
           kiri=tengah+ 1 ;
       }
       else  if ( strcmp (cari,data[center])< 0 )
       {
           kanan=tengah- 1 ;
       }
       tengah=kiri+(kanan-kiri)/ 2 ;
    }
   cout<<endl;
    if ( strcmp (data[pusat],cari)== 0 )
    {
        cout<< " Keterangan : Data Ditemukan " ;
    }
    lain
    {
        cout<< " Keterangan : Data Tidak Ditemukan " ;
   }
    ambil ();
}
