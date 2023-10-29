#include <iostream>
using namespace std;

int checkPrime(int num)
{
    if(num < 2){
        return 0;
    }
    else{   
       int x = num/2;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    
    return 1;
}

int main()
{
    int a = 1;
    int n;
     cin>>n;
     bool prime[n+1];
     
    
    for(int i=a; i <= n; i++){
        if(checkPrime(i))
            cout<<i<<" ";
            prime[i];
            cout<<"True";
    }
 
    return 0;
}
