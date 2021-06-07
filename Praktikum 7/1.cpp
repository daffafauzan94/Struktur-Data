// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
# tentukan  MAX  10
int Data[MAX];
// Fungsi pertukaran bilangan
void  Tukar ( int *a, int *b)
{
int suhu;
suhu = *a;
*a = *b;
*b = suhu;
}
// Fungsi pengurutan penyisipan biner
void  PilihanSort ()
{
int i, j, k;
untuk (i= 0 ; i<MAX- 1 ;i++){
k = saya;
untuk (j=i+ 1 ; j<MAX; j++)
jika (Data[k] > Data[j])
k = j;
Tukar (&Data[i], &Data[k]);
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
SeleksiSort ();
// Data setelah terurut
printf ( " \n DATA SETELAH TERURUT " );
untuk (i= 0 ; i<MAX; i++)
{
printf ( " \n Data ke %d : %d " , i, Data[i]);
}
}
