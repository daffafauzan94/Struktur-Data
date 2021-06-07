// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < string.h >
# sertakan  < stdbool.h >
# sertakan  < stdlib.h >
# sertakan  < conio.h >
# tentukan  MAX  5
typedef  int Elemen;
 struktur typedef {
kepala int ;
int ekor;
Data elemen[MAX];
}Antre;
void  initQueue (Antrian *q)
{
(*q). kepala =(*q). ekor =- 1 ;
}
bool  isEmpty (Antrian q)
{
if (q. head ==- 1 && q. tail ==- 1 )
kembali  benar ;
lain
kembali  salah ;
}
bool  isFull (Antrian q)
{
if ((q. head <q. tail && (q. tail -q. head )==MAX- 1 ) ||
(q. kepala >q. ekor && q. kepala -q. ekor == 1 ))
kembali  benar ;
lain
kembali  salah ;
}
bool  isOneElement (Antrian q)
{
if (q. head ==q. tail && q. head !=- 1 )
kembali  benar ;
lain
kembali  salah ;
}
void  Enqueue (Antrian *q, Data elemen)
{
jika ( isFull (*q))
printf ( " Antrian Penuh! " );
lain {
jika ( isEmpty (*q)){
(*q). kepala =(*q). ekor = 0 ;
(*q). data [(*q). ekor ]=data;
} lain {
if ((*q). tail ==MAX- 1 ){
(*q). ekor = 0 ;
} lain {
(*q). ekor ++;
}
(*q). data [(*q). ekor ]=data;
}
}
}
void  Dequeue (Antrian *q)
{
Elemen suhu=(*q). data [(*q). kepala ];
jika ( isEmpty (*q))
printf ( " Antrian kosong! " );
lain {
if ( isOneElement (*q)){
initAntrian (q);
} lain {
jika ((* q). Kepala == MAX- 1 )
(*q). kepala = 0 ;
lain
(*q). kepala ++;
}
printf ( " Elemen yang dihapus adalah %d " ,temp);
}
}
void  displayQueue (Antrian q)
{
di aku;
jika ( isKosong (q))
printf ( " Antrian kosong! " );
lain {
if (q. kepala <=q. ekor ){
untuk (i=q. kepala ;i<=q. ekor ;i++){
printf ( " % d " , q. Data [i]);
}
} lain {
untuk (i=q. kepala ;i<=MAX- 1 ;i++){
printf ( " % d " , q. Data [i]);
}
untuk (i= 0 ;i<=q. ekor ;i++){
printf ( " % d " , q. Data [i]);
}
}
}
}
int  utama ()
{
Antrian q;
Masukan elemen, suhu;
initAntrian (&q);
melakukan
{
sistem ( " cl " );
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
puts ( " Menu " );
puts ( " 1. Elemen Antrian " );
puts ( " 2. Elemen Dequeue " );
puts ( " 3. Tampilan Antrian " );
puts ( " Esc.Keluar " );
puts ( " Pilih : " );
beralih ( ambil ())
{
 case  ' 1 ' : if ( isFull (q))
printf ( " Antrian sudah penuh! " );
lain {
lakukan {
printf ( " Masukan Bilangan Bulat : " ); scanf ( " %d " , &masukan);
} while (masukan== 0 );
Antrean (&q, masukan);
}
istirahat ;
case  ' 2 ' : Dequeue (&q);
istirahat ;
case  ' 3 ' : displayQueue (q);
istirahat ;
}
} while ( getch ()!= 27 );
ambil ();
kembali  0 ;
}
