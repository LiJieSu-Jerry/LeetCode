#include<iostream>
#include<vector>
#include <map>
using namespace std;

int main(){
    vector<int> a={1,2};
    map<int,int> t;
    t.insert(pair<int,int>(1,5));
    t.insert(pair<int,int>(2,6));

    cout<<t[a.back()]<<endl;
    return 0;
}