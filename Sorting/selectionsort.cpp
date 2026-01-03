/* Selection Sort
    Core method: Finds the minimum element and places it in position
    Time complexity:(Best/Avg/Worst)--> O(n^2)
    Swapping: Max 1 swap per pass
    Stability: Unstable(does not preserve order of equal items)
*/

#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int minimum=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[minimum]) minimum=j;
        }
        int temp=arr[i];
        arr[i]=arr[minimum];
        arr[minimum]=temp;
    }
}

int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}