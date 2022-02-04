#include <iostream>
using namespace std;
void BubbleSort(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if (arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    cout<<"Bubble--Sort:\n";
    int arr[10]={-1999,-4,89,1300000,6,2,6,6,10,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,size);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
