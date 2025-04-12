#include<iostream>
using namespace std;

void reverse_array(int* array, int size);
int main(){
	int size;
	cout<<"enter the size of array :"<<endl;
	cin>>size;
	
	int* array= new int[size];
	
	cout<<"enter the elements of the array : "<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	
	reverse_array(array, size);
	
	delete []array;
	return 0;
}
void reverse_array(int* array, int size){
	int reverse_array[size];
	
for(int i=0; i<size; i++){
	reverse_array[i]=array[i];
}
	
	
	cout<<"array after being reversed : "<<endl;
	
	for(int i=size-1; i>=0; i--){
		cout<<reverse_array[i]<<" ";
		
	}
	
}
