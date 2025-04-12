#include<iostream>
using namespace std;
void check_array(int* arr,int* arr2 ,int size);

int main(){

	int size;//count=0;
	cout<<"enter the size of array : "<<endl;
	cin>>size;

int* arr1= new int[size];
	int* arr2= new int[size];

		cout<<"enter the elements of first array : "<<endl;
	for(int i=0; i<size; i++){
		cin>>arr1[i];
	}
	
	cout<<"enter the elements of second array : "<<endl;
	for(int i=0; i<size; i++){
		cin>>arr2[i];
	}
	
	
	cout<<"first array elements : "<<endl;
		for(int i=0; i<size; i++){
		cout<<arr1[i]<<" ";
	}
	
		cout<<"\nsecond array elements : "<<endl;
		for(int i=0; i<size; i++){
		cout<<arr2[i]<<" ";
	}
	check_array(arr1, arr2, size);
//	for(int i=0,j=0;i<size; i++,j++ ){
//		if(i==j  &&  arr1[i]==arr2[j] )
//		count++; 
//	}
//	cout<<"\nno of same elements at same locations : "<<count<<endl;


// delte to free up the  memory
	delete[] arr1;
	delete[] arr2;
	
	return 0;
}
void check_array(int* arr1,int*arr2 ,int size){
	int count=0;
		for(int i=0,j=0;i<size; i++,j++ ){
		if(i==j  &&  arr1[i]==arr2[j] )
		count++; 
	}
	cout<<"\nno of same elements at same locations : "<<count<<endl;
	
	
	
}





