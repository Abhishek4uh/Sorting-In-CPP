#include <iostream>
using namespace std;
void InsertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
    arr[j+1]=temp;
    }
}
int main()
{
    cout<<"Insertion--Sort:\n";
    int arr[10]={-1,9,78,69,89,-6,2,6,10,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
