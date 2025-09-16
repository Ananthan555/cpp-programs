#include <bits/stdc++.h>
using namespace std;
/*void dosomething(){
    pair <int,int> p= {1,3};
    cout<<p.first<<" "<<p.second;
    cout<<endl;
    pair <int, pair<int,int>> s={1,{1,3}};
    cout<<s.first<<" "<<s.second.first<<"\n";
    pair<int, pair<int,pair<int,pair<int,int>>>>mypair={1,{2,{3,{4,5}}}};
    cout<<mypair.first<<"\n";
    cout<<mypair.second.first<<"\n";
    cout<<mypair.second.second.first<<"\n";

    cout<<"\n";
    pair<int,pair<int,pair<int,pair<int,int>>>> arr1[]= {
    {1,{2,{3,{4,5}}}},
    {6,{7,{8,{9,10}}}},
    {11,{12,{13,{14,15}}}};
    };
    cout<<arr1[0].first<<"\n";
    
    pair <int,int> arr[]={{1,2},{2,3},{2,4}};
    cout<<arr[0].first<<"\n";
    cout<<arr[0].second;

}
int main(){
    dosomething();
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

void dosomething() {
    // Simple pair
    pair<int,int> p = {1,3};
    cout << "Pair p: " << p.first << " " << p.second << endl;

    // Pair with another pair
    pair<int, pair<int,int>> s = {1,{1,3}};
    cout << "Pair s: " << s.first << " " << s.second.first << endl;

    // Nested pair
    pair<int, pair<int, pair<int, pair<int,int>>>> mypair = {1,{2,{3,{4,5}}}};
    cout << "mypair first: " << mypair.first << endl;
    cout << "mypair second.first: " << mypair.second.first << endl;
    cout << "mypair second.second.first: " << mypair.second.second.first << endl;

    // Array of nested pairs
    pair<int, pair<int, pair<int, pair<int,int>>>> arr1[] = {
        {1,{2,{3,{4,5}}}},
        {6,{7,{8,{9,10}}}},
        {11,{12,{13,{14,15}}}}
    };
    cout << "arr1[0].first: " << arr1[0].first << endl;

    // Array of simple pairs
    pair<int,int> arr[] = {{1,2},{2,3},{2,4}};
    cout << "arr[0].first: " << arr[0].first << endl;
    cout << "arr[0].second: " << arr[0].second << endl;
}

int main() {
    dosomething();
    return 0;
}
