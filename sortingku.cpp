#include <iostream>
using namespace std;
int main(){
	
	int bil[50];
	int i, j, n , z;
	
	cout<<"Masukan Jumlah inputan: ";
	cin>>n;
		for(i=1; i<=n; i++){
			cout<<"Masukan Angka Ke";
			cout<<i<<" Adalah ";
			cin>>bil[i];
	}
	
	cout<<endl;
	cout<<"Sebelum Sorting: "<<endl;
		for(i=1; i<=n; i++){
			cout<<bil[i]<<" ";		
	}
	
	cout<<endl<<endl;
	cout<<"Sesudah Sorting: "<<endl;
 		for(i=1;i<=n;i++) { 
 		for(j=(i+1);j<=n;j++) {
  			if(bil[i]>bil[j]) {

   			z=bil[i];
    		bil[i]=bil[j]; 
			bil[j]=z;
	 }
	} 
	
	cout<<bil[i]<<" "; }
}
