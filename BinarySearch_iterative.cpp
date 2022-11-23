#include <iostream>

using namespace std;
//condition for BS iterative->array must be sorted
bool binarySearch(int a[],int n,int l,int h,int k){
    
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]==k){
            cout<<"key is present at index "<<mid<<" ";
            return true;
        }
        else if(a[mid]<k)l=mid+1;
        else if(a[mid]>k)h=mid-1;
    }

    return false;
     



}

int main(){

     int arr[4]={1,2,3,4};
     int n=sizeof(arr)/sizeof(arr[0]);
     int l=0;
     int h=n-1;
     int key=4;
     cout<<boolalpha<<binarySearch(arr,n,l,h,key);
     return 0;
}
