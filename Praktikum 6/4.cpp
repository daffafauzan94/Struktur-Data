// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
int  prima ( int n, int i){
 jika (n%i== 0 )
 kembali  0 ;
 jika (i== 2 )
 kembali  1 ;
 prima (n, i- 1 );
}
int  utama ()
{
 int i,n, keluaran;
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( "20051397024 \n " );
 printf ( " 2020B MI \n " );
 printf ( " Masukan bilangan : " );
scanf ( " %d " , &n);
i=n- 1 ;
 jika (n!= 1 ){
 if ( prima (n, i) || n== 2 ){
 puts ( " Bilangan tersebut prima " );
 }
 lain {
 puts ( " Bilangan tersebut bukan prima " );
 }
 }
 lain {
 puts ( " Bilangan tersebut bukan prima " );
 }
 kembali  0 ;
}
