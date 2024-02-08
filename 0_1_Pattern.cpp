#include <iostream>
using namespace std;
// At (1,1),(2,2),(3,3)........Row No.+ Col No. = Even -> Print 1
// i = row no.    j = col no.
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((+j)%2==0){
                cout<<" 1";
            }
            else{
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}