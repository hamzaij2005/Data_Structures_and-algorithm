#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size]={};
    cout<<"Enter "<<size<<" values for array printing  : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array : [";
    for (int i = 0; i < size; i++){
        cout<<arr [i];
        if(i<size-1){
            cout<<",";
        }
    }
    cout<<"]";
    
    return 0;
}