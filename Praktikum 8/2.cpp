// Daffa Fauzan Hadiansyah
// 20051397024
// 2020B MI
# sertakan  < iostream >
menggunakan  namespace  std ;
void  bubbleSort ( int arr[], int n){
  int saya, j, tmp;
  untuk (i = 0 ; i < n; i++){
    untuk (j = 0 ; j < n - i - 1 ; j++){
      jika (arr[j] > arr[j + 1 ]){
        tmp = arr[j];
        arr[j] = arr[j + 1 ];
        arr[j + 1 ] = tmp;
      }
    }
  }
}
int  utama (){
  int larik[ 100 ], n, i, j;
  cout<< " Daffa Fauzan Hadiansyah \n " ;
  cout<< " 20051397024 \n " ;
  cout<< " 2020B MI \n " ;
  cout << " Masukkan banyak elemen: " ;
  cin >> n;
  cout << " Masukkan nilai: \n " ;
  untuk (i = 0 ; i < n; i++){
    cin >> array[i];
  }
  bubbleSort (array, n);
  cout << " Hasil pengurutan sebagai berikut: \n " ;
  untuk (i = 0 ; i < n; i++){
    cout << array[i] << "  " ;
  }
  cout<< " \n " ;
}
