// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
# tentukan  MAX  10
int Data[MAX];
// Fungsi pengurutan penyisipan langsung
void  StraightInsertSort ()
{
int i, j, x;
untuk (i= 1 ; i<MAX; i++){
x = Data[i];
j = i - 1 ;
while (x < Data[j]){
Data[j+ 1 ] = Data[j];
j--;
}
Data[j+ 1 ] = x;
}
}
int  utama ()
{
di aku;
srand ( 0 );
printf ( " Daffa Fauzan Hadiansyah \n " );
printf ( " 20051397024 \n " );
printf ( " 2020B MI \n " );
// Membangkitkan bilangan acak
printf ( " DATA SEBELUM TERURUT " );
untuk (i= 0 ; i<MAX; i++)
{
Data[i] = ( int ) rand ()/ 1000 + 1 ;
printf ( " \n Data ke %d : %d " , i, Data[i]);
}
StraightInsertSort ();
// Data setelah terurut
printf ( " \n DATA SETELAH TERURUT " );
untuk (i= 0 ; i<MAX; i++)
{
printf ( " \n Data ke %d : %d " , i, Data[i]);
}
}
