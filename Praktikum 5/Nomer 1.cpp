// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan < stdio.h >
# sertakan < stdlib.h >
menggunakan  namespace  std ;
typedef  struct  simpul DNode;
struct  simpul {
int data;
DNode *berikutnya;
DNode *sebelumnya;
};
DNode *head= NULL , *tail= NULL , *baru;
void  alokasi_Dnode ( int x)
{
baru=(DNode *) malloc ( sizeof (DNode));
jika (baru== NULL ){
printf ( " Alokasi gagal \n " ); keluar ( 1 );
}
lain {
baru-> data =x;
baru-> selanjutnya = NULL ;
baru-> sebelumnya = NULL ;
}
}
void  cetak_headtail ()
{
DNode *p=kepala;
sementara (p!= NULL ){
printf ( " %d " ,p-> data );
p=p-> selanjutnya ;
}
printf ( " \n " );
}
void  cetak_tailhead ()
{
DNode *p=ekor;
sementara (p!= NULL ){
printf ( " %d " ,p-> data );
p=p-> sebelumnya ;
}
printf ( " \n " );
}
batal  sisip_awal (){
baru-> selanjutnya = kepala;
kepala-> sebelumnya =baru;
kepala = baru;
}
batal  sisip_akhir ()
{
baru-> sebelumnya = ekor;
ekor-> selanjutnya =baru;
ekor = baru;
}
void  sisip_setelah_simpul ( int x){
DNode *setelah = kepala;
while (setelah-> data != x)
setelah = setelah-> berikutnya ;
baru-> sebelumnya = setelah;
baru-> selanjutnya = setelah-> selanjutnya ;
setelah-> selanjutnya -> sebelumnya = baru;
setelah-> selanjutnya = baru;
}
void  sisip_sebelum_simpul ( int x){
DNode *sebelum = kepala;
while (sebelum-> data != x)
sebelum = sebelum-> selanjutnya ;
baru-> sebelumnya = sebelum-> sebelumnya ;
baru-> selanjutnya = sebelum;
sebelum-> sebelumnya -> berikutnya = baru;
sebelum-> sebelumnya = baru;
}
void  free_DNode (DNode *p)
{
gratis (p);
p= NULL ;
}
batal  hapus_awal (){
DNode *hapus = kepala;
head-> next -> prev = NULL ;
head = hapus-> next ;
free_DNode (hapus);
}
batal  hapus_akhir (){
DNode *hapus = ekor;
tail-> prev -> next = NULL ;
tail = hapus-> prev ;
free_DNode (hapus);
}
void  hapus_tertentu ( int x){
DNode *hapus = kepala;
sementara (hapus-> data != x)
hapus = hapus-> selanjutnya ;
hapus-> prev -> next = hapus-> next ;
hapus-> next -> prev = hapus-> prev ;
free_DNode (hapus);
}
utama ()
{
int pilih, dt,pertama, x;
char lagi= ' y ' ;
alokasi_Dnode ( 10 );
kepala = ekor = baru;
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
printf ( " Kepala-ekor : " ); cetak_headtail ();
printf ( " Kepala Ekor: " ); cetak_tailhead ();
printf ( " \n " );
while (lagi== ' y ' )
{
printf ( " 1. Sisip awal \n " );
printf ( " 2. Sisip akhir \n " );
printf ( " 3. Sisip sebelum simpul tertentu \n " );
printf ( " 4. Sisip setelah simpul tertentu \n " );
printf ( " 5.Hapus awal \n " );
printf ( " 6. Hapus akhir \n " );
printf ( " 7. Hapus tengah \n " );
printf ( " 8. Cetak dari kepala ke ekor \n " );
printf ( " 9. Cetak dari ekor ke kepala \n " );
printf ( " Pilihan : " ); fflush (stdin); scanf ( " %d " ,&pilih);
beralih (pilih){
kasus  1 :
printf ( " Masukkan data: " ), scanf ( " %d " ,&dt);
printf ( " \n " );
alokasi_Dnode (dt);
sisip_awal ();
istirahat ;
kasus  2 :
printf ( " Masukkan data: " ), scanf ( " %d " ,&dt);
printf ( " \n " );
alokasi_Dnode (dt);
sisip_akhir ();
istirahat ;
kasus  3 :
printf ( " Masukkan data: " ), scanf ( " %d " ,&dt);
alokasi_Dnode (dt);
printf ( " Ingin Menyisipkan data sebelum? " ); scanf ( " %d " ,&x);
sisip_sebelum_simpul (x);
printf ( " \n " );
istirahat ;
kasus  4 :
printf ( " Masukkan data: " ), scanf ( " %d " ,&dt);
alokasi_Dnode (dt);
printf ( " Ingin Menyisipkan data setelah? " ); scanf ( " %d " ,&x);
sisip_setelah_simpul (x);
printf ( " \n " );
istirahat ;
kasus  5 :
hapus_awal (); printf ( " \n " );
istirahat ;
kasus  6 :
hapus_akhir (); printf ( " \n " );
istirahat ;
kasus  7 :
printf ( " Ingin menghapus data? " ); scanf ( " %d " ,&x);
hapus_tertentu (x);
printf ( " \n " );
istirahat ;
}
printf ( " Cetak kepala-tai; : " ); cetak_headtail ();
printf ( " Cetak kepala ekor : " ); cetak_tailhead ();
printf ( " lagi[y/t]? " ); fflush (stdin); scanf ( " %c " ,&lagi);
printf ( " \n " );
}
}
