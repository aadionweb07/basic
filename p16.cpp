// #include <iostream>
// using namespace std;
// int main(){
//     int a,i,j;
//     cin>>a;
//     for(i=0;i<a;i++){
//         for(j=0;i<a;j++){
            
//         }
//     }
    
// }

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,i=0;
    double bin=0,ans=0;
    cin>>a;
    
    while(a!=0){
        b = a&1;
        bin += b * pow(10, i);
        i++;
        a=a>>1;
    }
    i=31;
    while(bin > 0){
        a = (int)bin % 10;
        ans += a* pow(2,i);
        bin = bin/10;
        i--;

    }
    cout<< ans;
    
}