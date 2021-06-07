// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream > 
# sertakan  < stdlib.h > 

menggunakan  namespace  std ; 

kelas dua  Tumpukan {
	int * arr;
	ukuran int ;
	int top1, top2;

publik: 
	// Konstruktor
	dua tumpukan ( int n)
	{ 
		ukuran = n; 
		arr = int baru  [n];
		top1 = n / 2 + 1 ;
		atas2 = n / 2 ;
	} 

	// Metode untuk mendorong elemen x ke stack1
	batalkan  push1 ( int x)
	{ 
		// Setidaknya ada satu yang kosong
		// ruang untuk elemen baru
		jika (top1 > 0 ) {
			top1--; 
			arr[atas1] = x; 
		} 
		lain {
			cout<< " Stack Overflow "
				<< " Menurut elemen : " << x << endl;
			kembali ;
		} 
	} 

	// Metode untuk mendorong elemen
	// x ke tumpukan2
	batalkan  push2 ( int x)
	{ 

		// Setidaknya ada satu yang kosong
		// ruang untuk elemen baru
		if (top2 < ukuran - 1 ) {
			atas2++; 
			arr[atas2] = x; 
		} 
		lain {
			cout<< " Stack Overflow "
				<< " Menurut elemen : " << x << endl;
			kembali ;
		} 
	} 

	// Metode untuk mengeluarkan elemen dari tumpukan pertama
	int  pop1 ()
	{ 
		if (top1 <= ukuran / 2 ) {
			int x = arr[atas1];
			atas1++; 
			kembali x;
		} 
		lain {
			cout<< " Stack UnderFlow " ;
			keluar ( 1 );
		} 
	} 

	// Metode untuk memunculkan elemen
	// dari tumpukan kedua
	int  pop2 ()
	{ 
		if (top2 >= ukuran / 2 + 1 ) {
			int x = arr[atas2];
			atas2--; 
			kembali x;
		} 
		lain {
			cout<< " Stack UnderFlow " ;
			keluar ( 1 );
		} 
	} 
}; 

/* Program driver untuk menguji kelas twStacks */
int  utama ()
{ 
	twoStacks ts ( 5 );
	ts. tekan1 ( 5 );
	ts. tekan2 ( 10 );
	ts. tekan2 ( 15 );
	ts. tekan1 ( 11 );
	ts. tekan2 ( 7 );
	cout<< " Daffa Fauzan Hadiansyah \n " ;
	cout<< " 20051397024 \n " ;
	cout<< " 2020B MI \n " ;
	cout << " Elemen yang muncul dari stack1 adalah "
		<< " : " << ts. pop1 ()
		<< akhir; 
	ts. tekan2 ( 40 );
	cout << " \n Elemen yang muncul dari stack2 adalah "
		<< " : " << ts. pop2 ()
		<< akhir; 
	kembali  0 ;
} 
