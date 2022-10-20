#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int i,j;

    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==1 || i==a || j==1 || j==b){
                cout<< " "<<"*";
            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
        
    }
     return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;
 
// Function to print hollow rectangle
void print_rectangle(int n, int m)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n ||
                j == 1 || j == m)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
 
}
 
// Driver Code
int main()
{
    int rows = 6, columns = 20;
    print_rectangle(rows, columns);
    return 0;
}
*/