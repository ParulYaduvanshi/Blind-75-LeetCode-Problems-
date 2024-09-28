#include<iostream>
#include<vector>
using namespace std;
/*
int min_in_rotated_sorted_array(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;

    // If the array is not rotated (or is a single element)
    if (arr[s] <= arr[e]) {
        return arr[s];
    }

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Check if mid is the minimum element
        if (arr[mid] > arr[mid + 1]) {
            return arr[mid + 1];
        }
        if (arr[mid - 1] > arr[mid]) {
            return arr[mid];
        }

        // Decide which side to continue searching
        if (arr[mid] >= arr[s]) {
            // The left part is sorted, so move to the right
            s = mid + 1;
        } else {
            // The right part is sorted, so move to the left
            e = mid - 1;
        }
    }

    return -1; // This case shouldn't occur for valid input
}
*/
int min_in_rotated_sorted_array(vector<int> &arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return arr[s];
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<min_in_rotated_sorted_array(arr,n);

    return 0;
}