#include <iostream>
using namespace std;
void input_array(int arr[],int size);
void print_array(int arr[],int size);
void max_min(int arr[],int size);

int main() {
    int size;
    cout<<"Enter Size of an array : ";
    cin>>size;
    int arr[size]={};
    input_array(arr,size);
    print_array(arr,size);
    max_min(arr, size);
    return 0;
}
void input_array(int arr[],int size){
    cout<<"Enter "<<size<<" values of array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void print_array(int arr[],int size){
    cout<<"Array : [ ";
    for(int i=0;i<size;i++){
        cout<<arr[i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]"<<endl;
}
void max_min(int arr[],int size){
    cout<<endl<<endl<<"Maximum number finding in an array"<<endl;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum number : "<<max<<endl;
    cout<<"Minimum number : "<<min<<endl;
}