#include <bits/stdc++.h>
using namespace std;
void dosomething(){
    pair <int,int> p= {1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair <int, pair<int,int>> s={1,{1,3}};
    cout<<s.first<<" "<<s.second.first;

    cout<<"\n";

    pair <int,int> arr[]={{1,2},{2,3},{2,4}};
    cout<<arr[0].first<<"\n";
    cout<<arr[0].second;

}
int main(){
    dosomething();
    return 0;
}