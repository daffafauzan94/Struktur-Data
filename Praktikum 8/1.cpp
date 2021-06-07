// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan < iostream >
# sertakan < conio.h >
menggunakan  namespace  std ;
int  utama ()
{
    // variabel deklarasi
   int nilai [ 100 ];
   int i, n, t;

   // masukan
   cout<<endl;
   cout<< " Daffa Fauzan Hadiansyah \n " ;
   cout<< " 20051397024 \n " ;
   cout<< " 2020B MI \n " ;
   cout<< " \n\t\t\t Pengurutan Menaik Metode Shell Shot \n\n\n " ;
   cout<< " Masukkan Jumlah Data yang ingin di urutkan : " ;cin>>n;
   cout<<endl;
    untuk (i = 0 ; i < n; i++)
   {
       cout<< " Nilai ke- " << 1 +i<< "   : " ;cin>>val[i];
   }

   // Sortir Kulit
    untuk ( int w = n/ 2 ; w > 0 ;w=w/ 2 )
    {
       untuk ( int x = w; x < n; x++)
      {
          untuk ( int y = xw; y >= 0 ; y-=w)
         {
             if (val[y+w] < val[y]) // Catatan
            {
                t=val[y+w];
               val[y+w]=val[y];
               nilai[y]=t;
            }
         }
      }
   }

   // Mencetak data setelah diurutkan
   cout<<endl;
   cout<< " DATA YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT   \n " ;
   cout<<endl;
   untuk (i = 0 ; i < n; i++)
   {
       cout<<val[i]<< "  " ;
   }
   ambil ();
}
