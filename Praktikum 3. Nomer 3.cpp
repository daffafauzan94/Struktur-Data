// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan < stdio.h >
# sertakan < conio.h >
# sertakan < stdlib.h >

# tentukan  MAX  500

 antrian struktur {
 int plat[MAX];
 int depan;
 int belakang;
 jumlah int ;
};

 tumpukan struktur {
 int plat[MAX];
 jumlah int ;
};

void  InisialisasiQueue ( struct  antrian *q)
{
q-> depan = q-> belakang = 0 ;
q-> hitung = 0 ;
}

void  InisialisasiStack ( struct  stack *s)
{
s-> hitung = 0 ;
}

void  normalisasi_queue ( int x, struct  antrian *q, struct  stack *s)
{ 
 lakukan {
  q-> plat [x]=q-> plat [x+ 1 ];
  x++;
} while (x<q-> belakang );
 
q-> belakang --;
q-> hitung --;
 
 lakukan {
  q-> depan --;
  q-> plat [q-> depan ];
  q-> hitung ++;
} while (s-> hitung != 0 );
}

void  push ( int plt, struct  stack *s)
{
s-> hitung ++;
s-> plat [s-> hitung ]=plt;
}

int  pop ( struct  tumpukan *s)
{
 int plt;
 
plt=s-> plat [s-> hitung ];
s-> hitung --;
 kembali (plt);
}

int  cek_mobil ( int plt, struct  antrian *q)
{
 int i,hasil;
 
 untuk (i=q-> depan ;i<=q-> belakang ;i++){
  if (q-> plat [i]==plt){
   hasil=i;
   istirahat ;
  }
  else  if ((q-> plat [i]!=plt)&&(i==q-> belakang )){
   hasil= 0 ;
  }
 }
 kembali (hasil);
}

void  masuk ( int plt, struct  queue *q)
{
 if (q-> belakang ==MAX){
  printf ( " \n Antrian Penuh ! \n " );
  kembali ;
 }
 else  if (q-> hitung == 0 ){
  q-> belakang ++;
  q-> plat [q-> belakang ]=plt;
  q-> hitung ++;
  q-> depan ++;
 }
 lain {
  q-> belakang ++;
  q-> plat [q-> belakang ]=plt;
  q-> hitung ++;
 }
}

kekosongan  Keluar ( int plt, struct  antrian * q, struct  tumpukan * s)
{
 int i,x;
 
i=q-> depan ;
 if (q-> hitung == 0 ){
  printf ( " \n Antrian kosong ! \n " );
  ambil ();
  kembali ;
 }
 else  if ( cek_mobil (plt,q)== 0 ){
  printf ( " \n Plat mobil yang anda masukkan tidak ada dalam antrian ! \n " );
  ambil ();
  kembali ;
 } 
 else  if (( cek_mobil (plt,q)==q-> front )&&(q-> count > 1 )){
  q-> depan ++;
  q-> hitung --;
  kembali ;
  
 }
 else  if (( cek_mobil (plt,q)==q-> front )&&(q-> count == 1 ))
  Inisialisasi Antrian (q);  
 lain {    
  x= cek_mobil (plt,q);
  printf ( " \n Mobil yang keluar sementara : \n " );
  untuk (i=q-> depan ;i<x;i++){
   printf ( " - Mobil plat nomor %d \n " ,q-> plat [i]);
   tekan (q-> plat [i],s);
   q-> depan ++;
   q-> hitung --;
  }
  normalisasi_antrian (x,q,s);
  ambil ();
  kembali ;
 }
}

void  tampil ( struct  antrian *q)
{
 int i,x;
 sistem ( " cl " );
x=q-> depan ;
 printf ( " Daffa Fauzan Hadiansyah \n " );
 printf ( " 20051397024 \n " );
 printf ( " 2020B MI \n " );
 printf ( " -------------------------------------------- \n " ) ;
 printf ( " Data antrian mobil yang parkir : \n " );
 printf ( " -------------------------------------------- \n " ) ;
 jika (q-> hitung == 0 )
  printf ( " \n Tidak ada mobil yang sedang parkir \n " );
 lain {
  untuk (i= 1 ;i<=q-> hitung ;i++){
   printf ( " %d. Mobil plat nomor %d \n " ,i,q-> plat [x]);
   x++;
  }
  printf ( " \ nJumlah mobil yang parkir : %d \n " ,q-> count );
 }
 printf ( " \n\n **Tekan sembarang tombol untuk kembali ke pilihan** " );
 ambil ();
 kembali ;
}
 
int  utama ()
{
 struktur  antrian q;
  tumpukan struktur s;
 int jawab;
 int plt;
 
 Inisialisasi Antrian (&q);
 InisialisasiStack (&s);
 
 lakukan {
 sistem ( " cl " );
 printf ( " ---------------------------- \n " );
 printf ( " PROGRAM ANTRIAN MOBIL \n " );
 printf ( " ---------------------------- \n " );
 printf ( " 1. Masukkan mobil \n 2. Keluarkan mobil \n 3. Tampilkan antrian \n " );
 printf ( " 4. Keluar \n " );
 printf ( " ---------------------------- \n " );
 printf ( " Pilihan anda : " ); scanf ( " %d " ,&jawab);
 printf ( " ---------------------------- \n " );
 
 jika (jawab== 1 ){
  printf ( " nomor plat mobil masuk (tanpa huruf) : " ); scanf ( " %d " ,&plt);
  masuk (plt,&q);
  tampil (&q);
 }
 else  if (jawab== 2 ){
  printf ( " plat nomor mobil keluar (tanpa huruf): " ); scanf ( " %d " ,&plt);
  keluar (plt,&q,&s);
  tampil (&q);
 }
 else  if (jawab== 3 ){
  tampil (&q);
 }
 lain  jika (jawab== 4 )
  printf ( " ............. " );
 lain {
  printf ( " \n\n Pilihan tidak valid. Silahkan ulangi! \n " );
  ambil ();
 }
} while (jawab!= 4 );
}
