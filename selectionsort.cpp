#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
for(int i=0;i<n;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }swap(arr[minindex],arr[i]);
    }
}

}
int main(){
    int n,arr[50];
    cout<<"enter the range=";
    cin>>n;
    cout<<"enter the element=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<"array after sort";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}