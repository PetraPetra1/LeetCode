#include<iostream>
#include<cmath>

using namespace std;

 int reverse(int x) {
        
        int num;
        int reversed=0;
         
        while(x!=0){
            
            num=x%10;
            x/=10;
            reversed=(reversed*10)+num;
        }
        return reversed;
        
        if(reversed>(pow(2.0,31.0)-1) || reversed<-(pow(2.0,31.0)))
            return 0;

    }

int main(){

reverse(876);




} 