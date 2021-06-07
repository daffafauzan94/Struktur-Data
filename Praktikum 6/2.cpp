// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >

batalkan  urutan ();
int  utama ()
{
 int n, x= 0 ;
 
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
 printf ( " Masukan n : " ); scanf ( " %d " , &n);
 urutan ();
 kembali  0 ;
}

void  urutan ( int x, int n){
 printf ( " %d \n " ,x);
 jika (x==n)
 kembali ;
 urutan (x+ 1 ,n);
}
