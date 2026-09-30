#include <iostream>
using namespace std;
int main(){
cout<<"Enter any number limit:";
int n;
cin>>n;
int num = 10;
char ch = 'A';
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<num<<"  ";
        num+=1;
    }
    cout<<endl;
}
    return 0;
}