#include <bits/stdc++.h>
using namespace std;
//parameterized function
/*
void dosomething(int n,int n1){
   int num=n1+n;
   cout<<num;
}
int main()
{
    int n1;
    cin>>n1;
    int n;
    cin>>n;
    dosomething(n,n1);
    return 0;
}
    */

//non parameterized function
/*
void dosomething(){
    cout<<"hey how are you";
}
int main(){
    dosomething();
    return 0;
}
    */
//parameterized function with no of values
/*
void dosomething(string name,string name2){
           int len=name.size();
           name[0]='m';
           cout<<"the name is: "<<name<<endl;

           cout<<"the name2 value is : "<<name2;

}

int main(){
    string name;
    cin>>name;
    string name2;
    cin>>name2;
    dosomething(name,name2);
    return 0;

}
   */
  
   //pass by reference  it gives the copy of the value..
/*
   void dosomething(int num){
        cout<<num<<"\n";
        num+=5;
        cout<<num <<"\n";
        num+=5;
        cout<<num<<"\n";

   }
   int main(){
    int num=10;
    dosomething(num);
    cout<<num;
    return 0;

   }*/

   //pass by references 
/*
   void dosomething(string &s){
    s[0]='t';
    cout<<s<<endl;
   }
   int main(){
    string s="raj";
    dosomething(s); 
    cout<<s<<endl;   
   }
*/

void dosomething(int arr[],int n){
    arr[0]+=100;
    cout<<arr[0]<<endl;

}
int main(){
    int n=5;
    int arr[n];
    for (int i=0;i<n;i++){
       cin>>arr[i];
    }
    dosomething(arr,n);     
       
       cout<<"the value inside in ther main function: "<<arr[0]<<"\n";
    
    return 0;
}
   