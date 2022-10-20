 #include<iostream>
 using namespace std;
 int main(){
    int a,b;
    cin>>a;
    int count=1;
 
    int i=1;
    while(i<=a){
        int j=1;
        
        while(j<=i){
            
            cout<< i-j+1 <<" "  ;
           // a=a+1;
            j=j+1;
            

        }
        cout<<endl;
        i=i+1;

    }
 }