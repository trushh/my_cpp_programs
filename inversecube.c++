#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
int n ;
float sum=0 , i  ;
cout<<"enter number of terms";
cin>>n ;
for(i = 1.0 ; i<=n ; i++){
sum+= (float)pow(i,i)/i;

    
}
   cout<<sum; 
 return 0 ;
}