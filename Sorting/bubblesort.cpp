/*Bubble Sort
     Core Method: Compares & swaps adjacent elements
     Time Complexity: (Best_case)-->O(n) ; (Avg/Worst_case)-->O(n^2)
     Swapping: Many swaps per pass
     Stability: Stable(preserves order of equal items)
*/

#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
         int didSwap=0;
         for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
         }
         if(didSwap==0) break;
    }
}

int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubblesort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}
