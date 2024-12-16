//when you have been given two integer values like n = 14, n_ = 19
#include<bits/stdc++.h>
using namespace std;
int main(){
        int number_one;
        int number_two;
        cin >> number_one;
        cin >> number_two;
        int result_xor = number_one^number_two;
        int set_bits = 0;
        while(result_xor>0){
                set_bits += result_xor & 1;
                result_xor >>= 1;
        }
        cout << set_bits;
}
