/*Insertion sort
     Core Method: BUilds the final sorted array one item at a time by picking
                  elements from an unsorted portion & inserting them into their
                  correct position within a sorted portion 
     Time Complexity: (Avg/Worst_case)-->O(n) ; (Best_case)-->O(n^2)
     Swapping: Zero swaps
     Stability: Stable(preserves order of equal items)
*/

#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    insertionsort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}