// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
batalkan  urutan ();
int  utama ()
{
 int n;
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
 printf ( " Masukan n : " ); scanf ( " %d " , &n);
 urutan ();
 kembali  0 ;
}
void  urutan ( int i){
 printf ( " %d \n " , i);
 jika (i== 0 )
 kembali ;
 urutan (i- 1 );
}
