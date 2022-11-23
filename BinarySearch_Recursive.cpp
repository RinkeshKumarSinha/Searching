#include <iostream>

using namespace std;
//condition for BS recursive->array must be sorted
bool binarySearch(int a[],int n,int l,int h,int k){
    
        if(l>h)return false;
        int mid=l+(h-l)/2;
        if(a[mid]==k){
            cout<<"key is present at index "<<mid<<" ";
            return true;
        }
        else if(a[mid]<k)binarySearch(a,n,mid+1,h,k);
        else if(a[mid]>k)binarySearch(a,n,l,mid-1,k);
    

 
     



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
