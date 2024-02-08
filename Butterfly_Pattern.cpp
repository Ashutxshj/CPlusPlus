#include <iostream>

// Rows: 1 to n
// Neeche waala pattern uper waale ka mirror image
// Stars equal to row number
// 2*n -2*Row_no = the number of spaces
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*n - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}