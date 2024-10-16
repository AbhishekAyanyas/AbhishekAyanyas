#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {7,2,6,3};
    
    
    for(int i =0;i<4;i++){
         for(int j=0;j<4;j++){
               if(arr[i]>arr[j] and i<j){
                   cout<<"("<<arr[i]<<" "<<arr[j]<<")";\
                    cout<<endl;      
               }
       
        
    }
    
    
    
    }
    return 0;
} 
