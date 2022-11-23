#include <iostream>
using namespace std;
//condition for ternary search->array must be sorted.
bool ternarySearch(int a[],int n,int l,int h,int k){
     
        if(l>h)return false;
        int mid1=l+(h-l)/3;
        int mid2=h-(h-l)/3;
        if(a[mid1]==k)return true;
        else if(a[mid2]==k)return true;
        else if(a[mid1]>k)ternarySearch(a,n,l,mid1-1,k);
        else if(a[mid2]<k)ternarySearch(a,n,mid2+1,h,k);
        else if(a[mid1]<k<a[mid2]){
            ternarySearch(a,n,mid1+1,mid2-1,k);
          
        }
     


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
