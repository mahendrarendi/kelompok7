#include <iostream>
using namespace std;

// fungsi main
int main(){
	
    //deklarasi variabel
	int y;
	//input 
	cout<<"Masukan Banyak Bilangan:";
	cin>>y;
	//proses sorting
	int x[y];
	for(int i = 1; i<=y; i++){
		cout<<"Masukan Bilangan ke - "<<i<<" :";
		cin>>x[i];
		cout<<endl;
	}
	// melakukan looping hasil proses sorting
	for(int i=1; i<y; i++){
		int key = x[i];
		int j = i-1;
		while(j>=1 && x[j] > key){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = key;
		cout<<"proses sorting"<<endl;
		for(int m=1;m<=y;m++){
		cout<<x[m]<<" ";
	    }
	    cout<<endl;
	}
	//output
	cout<<"hasil sorting"<<endl;
	for(int m=1;m<=y;m++){
		cout<<x[m]<<" ";
	}
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"develop @kelompok_7 ";
}
