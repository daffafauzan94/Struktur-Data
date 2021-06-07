// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
menggunakan  namespace  std ;
 
int  utama () {
int a = 0 ; // banyaknya elemen data
di aku; // untuk iterasi untuk
int jumlah = 0 , maks = 0 , min = 0 ;
 	cout<< " Daffa Fauzan Hadiansyah \n " ;
	cout<< " 20051397024 \n " ;
	cout<< " 2020B MI \n " ;
// minta user input data yang banyak
cout << " Banyaknya elemen yang akan diinput : " ;
cin >> a;
 
// bikin array dengan panjang a
int data[a];
 
// minta input user untuk tiap-tiap elemen
untuk (i= 0 ; i<a; i++) {
cout<< " Masukkan elemen ke " ;
cout<<i+ 1 ;
cout<< " : " ;
cin >> data[i];
}
// pake array
cout << " \n Pake Array : " ;
cout << " \n data yang anda masukan adalah " ; // // hapus baris yang ini kalo nggag mau nampilin lagi elemennya
maks = min = data[ 0 ];
untuk (i= 0 ; i<a; i++) {
cout<<data[i] << ' , ' ; // hapus baris yang ini kalo nggag mau nampilin lagi elementya
jumlah = jumlah + data[i];
if (maks < data[i]) {
maks = data[i];
}
if (min > data[i]) {
min = data[i];
}
}
cout << " \ nJumlah data : " << jumlah;
cout << " \n Rata-rata : " << jumlah/a;
cout << " \n terkecil : " << min;
cout << " \n terbesar : " << maks;
cout<< " \n ================================ \n " ;
 
// Pake pointer
jumlah = 0 ;
int *ptr;
ptr = data;
 
cout<< " \n Penunjuk Pake : " ;
cout << " \n data yang anda masukan adalah " ;
maks = min = *ptr;
untuk (i= 0 ; i<a; i++) {
cout << *(ptr + i) << ' , ' ;
 
jumlah = jumlah + *(ptr + i);
if (maks < *(ptr + i)) {
maks = *(ptr + i);
}
if (min > *(ptr + i)) {
min = *(ptr + i);
}
}
cout << " \ nJumlah data : " << jumlah;
cout << " \n Rata-rata : " << jumlah/a;
cout << " \n terkecil : " << min;
cout << " \n terbesar : " << maks;
kembali  0 ;
}
