#include<iostream>
using namespace std;

int main(){
    int x; 
    int even = 0, odd = 0; 
    while(x != 0){ 
        cout << "Enter an integer: "; 
        cin >> x ;
        if(x%2 == 0 ){ 
            if(x != 0)  even = even+1;
           
        }else{
            odd = odd+1; 
        }
        
    }
    cout << "#Even numbers = " << even<<"\n"; 
    cout << "#Odd numbers = " << odd;  

    return 0;
}