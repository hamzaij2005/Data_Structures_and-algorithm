#include <iostream>
using namespace std;
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
void sum_average(int arr[],int size){
    cout<<"Array sum : ";
    float sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    float average=sum/size;
    cout<<"SUM : "<<sum<<endl;
    cout<<"Average : "<<average<<endl; 

}
int main() {
    int size;
    cout<<"Enter Size of an array : ";
    cin>>size;
    int arr[size]={};
    input_array(arr,size);
    print_array(arr,size);
    sum_average(arr,size);
    return 0;
}