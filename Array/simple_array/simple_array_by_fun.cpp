#include <iostream>
using namespace std;
void print_array(int arr[],int size);
void input_array(int arr[],int size);
int main() {
    int size;
    cout<<"Enter size of array  : ";
    cin>>size;
    int arr[size]={};
    input_array(arr,size);
    print_array(arr,size);
    return 0;
}
void print_array(int arr[],int size){
    cout<<"Array : [";
    for (int i = 0; i < size; i++){
        cout<<arr [i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]";
    
}
void input_array(int arr[],int size){
    
    cout<<"Enter "<<size<<" values for array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
}