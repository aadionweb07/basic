/*

ABCD
BCDE
CDEF
DEFG

 */






#include<iostream>
 using namespace std;
 int main(){ 
    int a,b;
    cin>>a;
    int count=0;
 
    int i=1;
    int value=i;
    char ch= 'A';
    while(i<=a){
        int j=1;
        
        while(j<=a){
            char ab='A'-1+i+j-1;
            
            cout<< ab;
            count++;
           // a=a+1;
            j=j+1;
             

        }
        cout<<endl;
        
        i=i+1;

    }
 }


