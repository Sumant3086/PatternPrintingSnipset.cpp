#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    char alphabet='a';
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<alphabet;
        }
        alphabet ++;
        cout<<endl;
    }
}