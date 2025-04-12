#include<iostream>
using namespace std;
void check_array(int* array_1, int* array_2, int size);
int main(){
	int size;
	
	cout<<"enter the size of array: "<<endl;
	cin>>size;
	
	
	int* array_1= new int[size];
	int* array_2= new int[size];
	
	cout<<"enter the elements of first array: "<<endl;
	for(int i=0; i<size; i++){
		cin>>array_1[i];
	}
	cout<<"\nenter the elements of second array : "<<endl;
	for(int j=0; j<size; j++){
		cin>>array_2[j];
	}
	
		cout<<"\nelements of first array: "<<endl;
	for(int i=0; i<size; i++){
		cout<<array_1[i]<<" ";
	}
	cout<<"\nelements of second array : "<<endl;
	for(int j=0; j<size; j++){
		cout<<array_2[j]<<" ";
}
	check_array(array_1, array_2, size);
	
	delete[] array_1;
	delete[] array_2; 
	return 0;
}

// function to check same elements in both array.
void check_array(int* array_1, int* array_2, int size){
	int count=0;
	
		for(int i=0; i<size; i++){
		
		if(array_1[i]==array_2[i]){
			count++;
		}	
	}
	cout<<"\nno of common elements in both arrays : "<<count<<endl;
}


