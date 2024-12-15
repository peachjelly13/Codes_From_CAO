#include<bits/stdc++.h>
using namespace std;
int main(){
        string s;
        string s_;
        cin >> s;
        cin >> s_;
        int len = s_.size();
        int len_ = s.size();
        int iterations_ = len_-1;
        int count = 0;
        if(len!=len_){
                cout << "They have to be equal length";
        }
        else{
                while(iterations_>=0){
                        if(s[iterations_]!=s_[iterations_]){
                                count++;
                        }
                        iterations_--;
                }

        }
        cout << "hamming disatance: " << count;
}

