// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < stdio.h >
# sertakan  < stdlib.h >
# sertakan  < string.h >
typedef  struct  simpul MNode;
struct  simpul {
int NRP;
char Nama[ 30 ];
int Kelas;
MNode *berikutnya;
};
MNode *baru,*head= NULL ;
void  alokasi_simpul_mhs ( int nrp, int kelas, char nama[])
{
baru=(MNode *) malloc ( sizeof (MNode));
jika (baru== NULL ){
printf ( " Alokasi gagal \n " );
keluar ( 1 );
} lain {
baru-> NRP =nrp;
strcpy (baru-> Nama ,nama);
baru-> Kelas =kelas;
baru-> selanjutnya = NULL ;
}
}
batal  cetak (){
MNode *p=kepala;
printf ( " NRP \t NAMA \t KELAS \n " );
sementara (p!= NULL ){
printf ( " %d \t %s \t %d \n " ,p-> NRP ,p-> Nama ,p-> Kelas );
p=p-> selanjutnya ;
}
printf ( " \n " );
}
sisip_awal (){
baru-> selanjutnya = kepala;
kepala = baru;
}
sisip_akhir (){
MNode *ekor=kepala;
while (ekor-> selanjutnya != NULL ){
ekor = ekor-> selanjutnya ;
}
ekor-> selanjutnya = baru;
}
// Operasi hapus
batal  free_Node (MNode *p)
{
gratis (p);
p= NULL ;
}
hapus_simpul_awal (){
MNode *hapus = kepala;
head = hapus-> next ;
free_Node (hapus);
}
batal  hapus ( int x)
{
MNode *hapus=kepala, *sebelum=kepala;
if (hapus-> NRP ==x){
hapus_simpul_awal ();
}
lain {
while (hapus!= NULL && hapus-> NRP !=x){
sebelum=hapus;
hapus=hapus-> selanjutnya ;
}
if (hapus== NULL ){
printf ( " Simpul tidak tersedia \n " );
}
lain {
sebelum-> selanjutnya =hapus-> selanjutnya ;
free_Node (hapus);
}
}
}
batal  sisip_urut ()
{
MNode *sebelum=kepala;
jika (kepala== NULL ){
kepala = baru;
}
else  if (baru-> NRP <head-> NRP ){
sisip_awal ();
}
lain {
while (sebelum!= NULL && baru-> NRP > before- > NRP ){
sebelum=sebelum-> selanjutnya ;
}
jika (sebelum== NULL ){
sisip_akhir ();
}
lain  jika (baru-> NRP ==sebelum-> NRP ){
printf ( " \n Duplikat data \n\n " );
}
}
}
// fungsi sisip sebelum simpul tertentu
sisip_sebelum_simpul_tertentu ( int x){
MNode *sebelum = kepala;
while (sebelum-> selanjutnya -> NRP != x)
sebelum = sebelum-> selanjutnya ;
baru-> selanjutnya = sebelum-> selanjutnya ;
sebelum-> selanjutnya = baru;
}
// x=nrp,y=nama,k=kelas
update_data ( int x, char y, int k){
MNode *p=kepala;
jika (p== NULL )
printf ( " \n Tidak dapat diedit \n " );
while (p-> selanjutnya != NULL ){
jika (p-> NRP ==x){
} lain {
printf ( " \n Awalan NRP tidak ditemukan \n " );
keluar ( 1 ); // keluar program
}
}
}
utama () {
 int nrp;
 karakter nama[ 30 ];
 int kelas;
 menu int ;
 char lagi= ' y ' ;
  printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
printf ( " DAFTAR DAFTAR GANDA: \n " );
 lakukan {
printf ( " \n 1.Sisip Urut \n " );
printf ( " 2.hapus Node(Awalan NRP) \n " );
printf ( " 3.Edit Data (Awalan NRP) " );
printf ( " \ nMenu: " ); scanf ( " %d " ,&menu); fflush (stdin);
beralih (menu){
kasus  1 : printf ( " Nama : " ); mendapat (nama);
printf ( " NRP: " ); scanf ( " %d " ,&nrp);
 printf ( " kelas: " ); scanf ( " %d " ,&kelas);

 alokasi_simpul_mhs (nrp,kelas,nama);
 sisip_urut ();
 istirahat ;
case  2 : printf ( " Mana yang akan di hapus(NRP): " );
scanf ( " %d " ,&nrp);
printf ( " \n " );
hapus (nrp);
istirahat ;
case  3 : printf ( " Nama Baru : " ); mendapat (nama);
printf ( " Kelas Baru: " ); scanf ( " %d " ,&kelas);
printf ( " Mana yang akan di edit(NRP): " );
scanf ( " %d " ,&nrp);
istirahat ;
 }
 cetak ();
} while (lagi== ' y ' );
}
