//implement an algo to determine if a string has all unique characters
// Not using any additional data structures
#include<iostream>
#include<unordered_set>
using namespace std;

bool usingDataStructures(string x){
    unordered_set<char> unique;
    for(auto i:x){
        if(unique.find(i)!=unique.end())
            return false;
        unique.insert(i);
    }
    return true;
}

bool notUsingDataStructures(string x){
    int n = x.length();
    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(x[i]==x[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string a = "44", b = "117", c = "132";

    cout << usingDataStructures(a)<<endl;
    cout << notUsingDataStructures(a);
}