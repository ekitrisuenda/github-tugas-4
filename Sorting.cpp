// Selection Buble sort
#include <iostream>
using namespace std;
int main(){
	
	int bil[50];
	int i, j, n , z;
	
	cout<<"Masukan Jumlah inputan: ";
	cin>>n;
	cout<<endl;
		for(i=1; i<=n; i++){
			cout<<"Masukan Angka Ke";
			cout<<i<<" Adalah : ";
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

/* Merge Sort

int a[50];

void merge(int,int,int);

void merge_sort(int low,int max){
 	int mid;
 	
 	if(low<max){
	  mid=(low+max)/2;
	  merge_sort(low,mid);
	  merge_sort(mid+1,max);
	  merge(low,mid,max);
	 }
}

void merge(int low,int mid,int max){
	 int h,i,j,b[50],k;
	 h=low;
	 i=low;
	 j=mid+1;

while((h<=mid)&&(j<=max)){
	  if(a[h]<=a[j]){
	   b[i]=a[h];
	   h++;
}else{
	   b[i]=a[j];
	   j++;
	  }i++;
 }
	 if(h>mid){
	  for(k=j;k<=max;k++){
	   b[i]=a[k];
	   i++;
	  }
}else{
	  for(k=h;k<=mid;k++){
	   b[i]=a[k];
	   i++;
	  }
 }
 
 for(k=low;k<=max;k++) a[k]=b[k];
}


int main(){
	 	int n,i;
	 	
		cout<<"Masukan Jumlah Inputan :";
	 	cin>>n;
	 	cout<<endl;
	 	
	 	for(i=1; i<=n; i++){
		cout<<"Masukan Angka Ke";
		cout<<i<<" Adalah : ";
	  	cin>>a[i] ;
 }
 	cout<<endl;
	cout<<"Sebelum Sorting: "<<endl;
	
		for(i=1; i<=n; i++){
			cout<<a[i]<<"  ";
}
		cout<<endl;
		 merge_sort(1,n);
		 cout<<endl;
		 cout<<"Merge Sort :"<<endl;

		 for(i=1; i<=n; i++)
		 cout<<a[i]<<"  ";
}

*/
