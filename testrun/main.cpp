#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool comp(string s1, string s2){
        int  a =0, b=0;
        for(int i: s1){
            a+=i;
        }
        for(int i: s1){
            b+=i;
        }
        return a==b;
    }

int main(){
    vector<string> strs({ "eat", "tea", "tan", "ate", "nat", "bat"});
    sort(strs.begin(), strs.end(), comp);
    for(string i: strs){
        cout<<i<<endl;
    }
    return 0;
}