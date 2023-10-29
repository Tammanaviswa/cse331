#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int prime_factor(int n)
{ 
   int primemax=0;
   while(n%2==0)
   { 
   
      primemax=2;
      n=n/2;
   }
   for(int i=3;i<=sqrt(n);i+=2){ 
   
      while(n%i==0){
         primemax=i;
         n=n/i;
      }
   }
   if(n>2){ 
   
      primemax=n;
   }
   return primemax;
}
void stormer_number(int n)
{  
    int temp=0; 
   for(int i=1;temp<n;i++)
   {  
      int check=(i*i)+1;  
      
      if(prime_factor(check)>=(2*i))
	  { 
         cout<<i<<" ";
         temp++;
      }
   }
}
int main()
{
   int n;
   cin>>n;
   stormer_number(n);
   
   return 0;
}
