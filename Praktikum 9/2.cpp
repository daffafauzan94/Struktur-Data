// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
# sertakan  < conio.h >
# tentukan  maks  20
menggunakan  namespace  std  ;
void  quick_sort ( int darr[max], int lb, int ub)
{
  dalam sebuah;
   int atas,bawah;
   int suhu;
 
   jika (lb>=ub)
    kembali ;
   a=darr[lb];
   // 1. Tentukan Batas Bawah (Batas Bawah) & Batas Atas (Batas Atas)
 
   atas=ub;
   bawah = pon;
 
   while (bawah < atas) // 2. Bandingkan Batas Bawah (LB) dengan Batas Atas (UB)
   {
     while (darr[bawah] <= a) //
       bawah++;
      while (darr[atas]>a) // 3. Jika LB>UB, Tukar (cari operasi perbandingan yang optimal/terkecil)
       atas--;
      jika (bawah<atas)
      {
        temp=darr[bawah];
         darr[bawah]=darr[atas];
         darr[atas]=temp;
      }
      // 4. Jika LB =< UB, maka Next Upper Bound & Lower Bound
 
   }
   darr[lb]=darr[atas];
   darr[atas]=a;
 
   quick_sort (darr,lb,atas- 1 );
   quick_sort (darr,atas+ 1 ,ub);
}
 
int  utama ()
{
  int arr[maks];
   int i,n,lb,ub;
   lb = 0 ;
   cout<< " Daffa Fauzan Hadiansyah \n " ;
   cout<< " 20051397024 \n " ;
   cout<< " 2020B MI \n " ;
   cout<< " \t urutkan CEPAT \n\n " ;
   cout<< " masukkan jumlah indeks : " ;
   cin>>n;
 
   ub=n;
   cout<< " Masukkan data: \n\n " ;
   untuk (i= 1 ;i<=n;i++)
   {
     cout<< " data ke -> " <<i<< " : " ; cin>>arr[i];
   }
 
   quick_sort (arr,lb,ub);
   cout<< " \n Hasil pengurutan data : " ;
   untuk (i= 0 ; i<n;i++)
    cout<< "  " <<arr[i];
 
   ambil ();
}
