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



void explainvectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);


    vector <pair <int,int>>vec;
    vec.push_back ({1,2});
    vec.emplace_back(1,2);

    vector <int>f(5,100);
    vector<int>f10(5);
    vector <int>f1(5,20);
    vector <int>f2(f1);  //another container just a copy of it

    vector <int>::iterator it  =v.begin();
    it++;
    cout<<*(it)<<"\n";
    it+=2;
    cout<<*(it);
    vector <int>::iterator ot=v.end(); //it stores next to the last element in the vector container if we want the last value do ot--;
    cout<<v.back():

    //printing the entire vector;

    for(vector <int>::iterator ww =v.begin(); ww!=v.end();ww++){
        cout<<*(ww)<<"\n";
    }
        for(auto  ww=v.begin(); ww!=v.end();ww++){
            cout<<*(ww)<<"\n";
        }
    for(auto ww:v){
        cout<<ww<<"\n";
    }
   v.erase(v.begin()+1)

   vector <int> vv(2,100);
   vv.insert(v.begin(),300);
   vv.insert(v.begin()+1,2,10);


   //{10,20}
   v.size();//2
   //{10,20}
   v.push_back();//{10}
   //v1={10,20};
   //v2={20,30};
   v1.swap(v2);  //v1{20,30},  v2={10,20} 
   v1.clear();//erases the entire vector
   v1.empty();//thus the vector has only one valure means return true and zero values means return fa;se

   list<int>ls;
   ls.push_back(2);
   ls.embrace_back(4);
   ls.push_front(3);//{2,3,4}
   ls.emplace_front();//{0,2,3,4}

   //deque is again similar to list and vector
   deque<int>dq;
   dq.push_back(2);//{2}
   dq.emplace_back(5);//{2,5}
   dq.push_front(4);//{4,2,5}
   dq.emplace_front(3);//{3,4,2,5}
   dq.pop_back();//{3,4,2}
   dq.pop_front();//{4,2}
   dq.back();//2  return the first element in the queue
   dq.front();//4 return the last element in the queue

   stack<int>stk; //stack is a data structure it follows lifo --> last in first out
   stk.push(1);
   stk.push(2);
   stk.push(3);
   stk.push(4);
   stk.emplace(5);
   //push pop,top only three
   // at last the stack have{1,2,3,4,5}
cout<<stk.top();//it removes the last element 5 but in stack it is still present the 5 is still present so print 5
cout<<stk.pop();// now the 5 will be removed and in stack it have {4,3,2,1}
cout<<stk.top();//it prints now 4 the top 
cout<<stk.size();//{4,3,2,1}--> the size of stack is 4
//note here stack doesn't follows the indexes
cout<<stk.empty();//false

stack<int>st1,st2;
st1.swap(st2);

// the time complextity takes is constant0(1); 

queue<int>q;
//push pop front  back swap only 5
q.push(1);
q.push(2);
q.push(3);
q.emplace(4);
q.back()+=5;
cout<<q.back();
q.front();//1
q.pop();//2,3,4,9 it deletes the first in guy
q.front();//2 it prints the first one
queue<int>q1,q2;
q1.push(1);
q1.push(2);
q2.push(3);
q2.push(4);


q1.swap(q2);
//queue implementation
 queue<int>q;
    int x,n;
    cout<<"Enter no of elements to push: ";
    cin>>x;
    for(int i=0;i<x;i++){
        cout<<"enter elements: "<<"\n";
        cin>>n;
        q.push(n);
        
    }
    queue<int>temp=q;
    while(!temp.empty()){
        cout<<temp.front();
        temp.pop();
        cout<<"\n";
    }

/*
Feature / Container	Stack (std::stack)	Queue (std::queue)	Deque (std::deque)
Underlying container	deque (default), can use vector or list	deque (default), can use list	N/A (it is itself a container)
Order	LIFO (Last In, First Out)	FIFO (First In, First Out)	Can act as FIFO or LIFO (double-ended)
Insert at back	push(x)	push(x), emplace(x)	push_back(x), emplace_back(x)
Insert at front	❌ Not allowed	❌ Not allowed	push_front(x), emplace_front(x)
Remove from back	❌ Not allowed	❌ Not allowed	pop_back()
Remove from front	pop() (from top)	pop() (from front)	pop_front()
Access top/front/back	top()	front(), back()	front(), back(), random access []
Supports iteration	❌ No (must pop elements to access)	❌ No (must pop elements to access)	✅ Yes, supports begin(), end(), range-based for loops
Random access	❌ Not allowed	❌ Not allowed	✅ Yes (dq[i])
Typical use case	Undo functionality, expression evaluation	Task scheduling, order processing	Flexible insertion/removal at both ends
*/
} 



void preority{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emblace(10);
    while(!pq.empty()){
 //first it will store 5, next 2,8,10,
    //it will print the greater one among all like tree it is not linear data structure
  pq.top();//10
  pq.pop();//now 8 is the highest element because top 10 is removed so it print descending order
  //when we insert 3 it will go into store after 2,-->10,8,5,2,3
    }
    //first it will store 5, next 2,8,10,
    //it will print the greater one among all like tree it is not linear data structure
  pq.top();//10
  pq.pop();//now 8 is the highest element because top 10 is removed so it print descending order
  //when we insert 3 it will go into store after 2,-->5,2,3,8,
}
  pq.push(3);
  //it will store 3 above mentioned
 cout<<pq.pop();//it will print 8
 // this another name is maximum heap


 //now minimum heap minimum element at the top
 priority_queue<int, vector<int>,greater<int>> pq;
  pq.push(2);//2
   pq.push(5);//2,5
   pq.push(8);//2,5,8
   pq.emblace(10);//2,5,8,10
   cout<<pq.top();//minimum element is 2
   //push()-->log(n);
   //top()-->0(1);
   //pop()-->log(n);

}


void explainset{
    set<int>ss;
   ss.insert(1);
   ss.emplace(2);
   ss.insert(2);
   ss.insert(4);
   ss.inert(3);
   //set is ordered and unique
   //imagine{1,2,3,4,5}
   auto it =ss.find(3);
   auto it=ss.find(6);
   ss.erase(it1,it2);

   //log(n)

   void multiset{
    // stored sorted but not unique 
    multiset<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(1);
    in cc=s.count(1);
     s.erase(1);//-->it deletes all the ones 
     s.erase(s.find(1));//->> it deleted the iterator address now one one can be deleted 
     s.erase(s.find(1),s.find(1)+2);//--> two ones deleted at last in multiset{1}
     
     //unorederedset
     ///everything is unique but it is unshorted we dont konw how it is stored
     //unoredered_set<int>ss;
     //timecomplexity 0(1); // in worst case the time complexoty is 0(n); it happens once in the blue moon  
     //all the operations are the smae only the lower bound and upper bound operations are not work
   }


void explainmap{

//mmp.emplace({4,1}) ;  .insert is also possible
    map<int,int>m;
    m[1]=2;
    map<int,pair<int,int>>mp;
    mp[2]={1,3};
        map<pair<int,int>,int>mpp;

        mpp[{1,2}]=10;
        mpp[{2,3}]=11;
        mpp[{3,4}]=12;
        mpp[{4,5}]=13;


//for(auto *it:mpp)
        for(auto it=mpp.begin(), ws!=mpp.end(),it++) cout<<ws<<"\n";
        cout << "Key: " << it->first //*it.first
             << " -> Value: (" << it->second.first 
             << ", " << it->second.second << ")\n";
    
             auto it=mpp.find(3);
             cout<<*(it).second;
             //all the lower bound and the upper bound and the swapping erase,size , empty are the same;
     //maps are shorted ascending order and the unique keys no duplicates 
     //time complexitylog(n)

//  Container	Sorted	Unique Keys
//   map	     Yes	   Yes
// unordered_map No        Yes
// multimap      Yes       No
    }


void multimapexplain{
    // multimap: key = int, value = string
    multimap<int, string> mpp;

    // Insert elements
    mpp.insert({1, "A"});
    mpp.insert({2, "B"});
    mpp.insert({1, "C"}); // duplicate key allowed
    mpp.insert({3, "D"});
    mpp.insert({2, "E"}); // duplicate key allowed

    // Iterate and print
    for (auto it = mpp.begin(); it != mpp.end(); it++) {
        cout << "Key: " << it->first << " -> Value: " << it->second << "\n";
    }

    
}


void unorederedexplain{
     unordered_map<int, string> ump;

    // Insert elements
    ump[3] = "C";
    ump[1] = "A";
    ump[2] = "B";
    ump[4] = "D";

    // Iterate and print
    for (auto it = ump.begin(); it != ump.end(); it++) {
        cout << "Key: " << it->first << " -> Value: " << it->second << "\n";
    }
}

//unoredered map time complexity is 0(1);
//in worst case it will exhibits 0(n); once in a big moon; it appears 
}
int main() {
  
    explainvectors();
    return 0;
}
