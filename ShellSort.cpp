//Shell sort _Revina Aurigha Firdaus_ 21091397003
#include <iostream>
using namespace std;

//deklarasi Prosedur
void shell(int data[], int n); 
int main()
{
	int jumlah; // Deklarasi variabel
	cout<<"Masukkan Jumlah Data Dalam Array : ";
    cin>>jumlah;
    int data_array[jumlah]; // Deklarasi variabel
    
    for ( int i = 0; i < jumlah; i++){ // INPUT
    	cout<<"Data Ke "<<i+1<<" : ";// INPUT
    	cin>>data_array[i];// INPUT
	}
  
    shell(data_array, jumlah); // Pemanggilan Fungsi Sort nya
    cout << "Hasil Array yang sudah disorting adalah : \n";
    for (int i = 0; i < jumlah; i++) // Output Setelah Sorting
        cout<<" [" << data_array[i] << "]"; // Output Setelah Sorting
    cout << "\n"; // Output Setelah Sorting
}
void shell(int data[], int n)
{
    for (int outer = n/2; outer>0; outer/=2) { // Perulangan luar

        for (int i = outer; i<n; i+= 1) { // Perulangan dalam
            int temp = data[i];

            int j;
            for (j = i; j >= outer && data[j - outer] > temp; j -= outer)
                data[j] = data[j - outer];
            data[j] = temp;
        }
    }
}
