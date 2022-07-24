#include<iostream>
using namespace std ;
int binary_search(int arr[],int key , int n){
    int s=0;
    int e=n;
    while(s<n){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
            
        }
        else if (key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        

    }return -1;
}
int main()
{
    int n ;
    cout<<"enter the number of elements"; 
    cin>>n ;

    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter number you want to search";
    cin>>key;
   cout<< binary_search(arr,key , n);
 return 0 ;
}