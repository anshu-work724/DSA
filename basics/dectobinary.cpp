#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter input: \n";
    cin >> n;
    int i = 0;
    int ans = 0;

    while (n!=0)
    {
        int bit = n % 2; // storing the remainders.
        ans = bit * pow(10,i) + ans;
        n = n / 2; // right shifting
        i++;
    }
    cout <<"Answer is: " << ans <<"\n";

}
