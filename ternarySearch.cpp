#include <iostream>
using namespace std;
//condition for ternary search->array must be sorted.
bool ternarySearch(int a[],int n,int l,int h,int k){
     
     while(l<=h){
        int mid1=l+(h-l)/3;
        int mid2=h-(h-l)/3;
        if(a[mid1]==k)return true;
        else if(a[mid2]==k)return true;
        else if(a[mid1]>k)h=mid1-1;
        else if(a[mid2]<k)l=mid2+1;
        else if(a[mid1]<k<a[mid2]){
            l=mid1+1;
            h=mid2-1;
        }
     }

  return false;
}

int main(){

      int arr[4]={1,2,3,4};
     int n=sizeof(arr)/sizeof(arr[0]);
     int l=0;
     int h=n-1;
     int key=4;
     cout<<boolalpha<<ternarySearch(arr,n,l,h,key);

    return 0;
}
