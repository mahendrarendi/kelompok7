#include<iostream>

//variabel standard
using namespace std;

// fungsi utama atau program utama
int main() {
    
    // deklarasi variabel
    int n, tukar, A[100];
    
    // menampilkan pesan input
    cout << "Masukkan jumlah data: ";
    
    // pesan input akan di simpan di variabel n
    cin >> n;
    
    // perulangan yang digunakan oleh input n
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << " = " ;
        cin >> A[i];
        cout << endl;
    } 
    // perulangan perbandingan input (sort)
    for (int i = 0; i < n-1; i++) {
        tukar = i;
        int temp;
        for(int j = i+1; j < n; j++){
            if(A[j] < A[tukar]){
                tukar = j;
            }
        }   
        temp = A[tukar];
        A[tukar] = A[i];
        A[i] = temp;
    } 
    
    // menampilkan hasil perbandingan (sorting)
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    // mengambil inputan dari nilai n
    cin.get();
    
    // end code
    return 0;
}
