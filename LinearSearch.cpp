#include <iostream>
using namespace std;

bool LinearSearch(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]==k){
        cout<<"element found at index"<<i<<" ";
        return true;
        }
    }
    return false;
}

int main(){
    int a[5]={1,2,3,4,5};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<boolalpha<<LinearSearch(a,n,k);

    return 0;
}
