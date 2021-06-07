// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
batal  array ( int [], int , int );
int  utama (){
 int a[]={ 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 };
 int x, i= 8 ;
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
 printf ( " Masukan x : " ); scanf ( " %d " , &x);
 larik (a,x,i);
}
void  array ( int a[], int x, int i){
 jika (i< 0 ){
 puts ( " x bukan merupakan anggota array a " );
 kembali ;
 }
 jika (x==a[i]){
 puts ( " x merupakan anggota array a " );
 kembali ;
 }
 larik (a,x,i- 1 );
}
