#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter input:";
    cin >> n;

    int i = 0;
    int ans = 0;
    while (n!=0)
    {
        int bit = n%10;
        if(bit==1){
            ans = pow(2,i) + ans;
            // cout << ans << endl;
        }
        n = n / 10; // input is in int so right shigting the input. 
        i++;
        
    }
    cout << "Answer is: " << ans << endl;
    
    return 0;
}