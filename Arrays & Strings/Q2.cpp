#include<iostream>
#include<vector>
using namespace std;

bool checkPermutation(string a,string b){
    int aSize = a.length();
    int bSize = b.length();

    if(aSize!=bSize){
        return false;
    }
    vector<char>freq(26, 0);
    for(auto i:a){
        freq[i]++;
    }
    for(auto i:b){
        if(freq[i]==0)
            return false;
        else
            freq[i]--;
    }
    for(auto i:freq){
        if(i!=0)
            return false;
    }
    return true;
}
int main(){
    string a, b;
    cout << "Enter strings: \n";
    cin >> a >> b;

    bool check = checkPermutation(a, b);
    if(check){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}