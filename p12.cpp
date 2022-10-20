/*

ABCD
ABCD
ABCD
ABCD

*/





#include<iostream>
 using namespace std;
 int main(){
    int a,b;
    cin>>a;
    int count=1;
 
    int i=1;
    char ch= 'A';
    while(i<=a){
        int j=1;
        
        while(j<=a){
            char ab='A'+j-1;
            
            cout<< ab;
           // a=a+1;
            j=j+1;
            

        }
        cout<<endl;
        
        i=i+1;

    }
 }