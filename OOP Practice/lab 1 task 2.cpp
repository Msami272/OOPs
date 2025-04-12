#include<iostream>
using namespace std;
void swapv(int arr_a[], int arr_b[], int n);

int main(){
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int arr_a[n],arr_b[n];
    cout<<"enter elements of array a :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr_a[i];
    }
     cout<<"enter elements of array b :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr_b[i];
    }


    swapv(arr_a, arr_b,n);
    return 0;
}
//function to swap the values of array
void swapv(int arr_a[] , int arr_b[], int n){
    int temp;
    arr_a[n];
    arr_b[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           temp= *(arr_a +i);
            arr_a[i]=*(arr_b +j);
            arr_b[j]=temp;

        }
    }
    cout<<"elements after swaping :"<<endl;
    cout<<endl;
    cout<<"elements of array a: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr_a[i]<<" ";
    }
    cout<<endl;
    cout<<"elements of array b :"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr_b[i]<<" ";
    }
}


