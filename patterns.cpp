#include <bits/stdc++.h>
using namespace std;
void print(int n){
for (int i=0;i<n;i++){
      for (int j =0;j<n;j++){
             cout<<"* ";
      } 
      cout<<"\n";
    }
    
}

void print2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}


void print3(int n){
   for (int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
   }
}

void print4(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}

    void print5(int n){
        for (int i=1;i<=n;i++){
            for(int j=5;j>=i;j--){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    
    void print6(int n){
        for(int i=5;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    
    void print7(int n){
        for (int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
    for(int j=0;j<=2*i-2;j++){
         cout<<"*";
    }

     for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
     cout<<endl;
    }
    }   
            
            
    void print8(int n){
        for(int i=n;i>0;i--){
            for(int j=0;j<n-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i-1;j++){
                cout<<"*";
            }
                for(int j=0;j<n;j++){
                  cout<<" ";
                }
          cout<<"\n";  
        }
    }    
    
void print9(int n){
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n/2-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";

        }
         for(int j=1;j<=n/2-i;j++){
            cout<<" ";
        }
    cout<<"\n";
    }

    for(int i=n/2;i>0;i--){
            for(int j=0;j<n/2-i;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i-1;j++){
                cout<<"*";
            }
                for(int j=0;j<n/2;j++){
                  cout<<" ";
                }
          cout<<"\n";  
        }


     
}
    
void print10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
            if(i>n) stars=2*n-i;
            for(int j=1;j<=stars;j++){
              cout<<"*";
            }
            cout<<endl; 
    }
}
 void print11(int n){

    int start=1;
    for(int i=0;i<n;i++){
      if (i%2==0) start=1;
      else start=0;
      for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
      }
      cout<<endl;
    }
 }

void print12(int n){
    int spaces=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        for(int j =0;j<spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
   cout<<"\n";
   spaces-=2;
    }
 }
void print13(int n){
    int num=1;
 for (int i =1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<< num<<" "  ;
        num+=1;
        }
        
        cout<<"\n";
 }
    
  }
 void print14(int n){
    for(int i=0;i<=n;i++){
        for(char ch ='A';ch <= 'A'+i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
 }
 
void print15(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){ //for(char c='A';c<='A'+(n-i);ch++)-->cout<<ch;
            cout<<c<<" ";
            c=c+1;
        }
        c='A';
        cout<<endl;
    }
 }
  
void print16(int n){
    char c='A';
  for(int i=1;i<=n;i++){
    for(int j=0;j<i;j++){
         cout<<c;
         
    }
    c+=1;
    cout<<"\n";
  }
}
 void print17(int n){
     for (int i=1;i<=n;i++){
          for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
     char ch='A';
     int breakpoint=(2*i-1)/2;
    for(int j=0;j<2*i-1;j++){
         cout<<ch;
         if (j<breakpoint) ch++;
         else ch--;
    }

     for(int j=1;j<=n-i;j++){
        cout<<" ";
     }
     cout<<endl;
    }
 }
void print18(int n){
    for (int i=0;i<n;i++){
        
        for(char c='E'-i;c<='E';c++){
           
            cout<<c;
            
        }
       
       
        cout<<"\n";
    }
}
void print19(int n){        
    int inis=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }

         for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        inis+=2;
        cout<<"\n";
    }

    int ins=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<ins;j++){
            cout<<" ";
        }
         for(int j=0;j<=i;j++){
            cout<<"*";
        }
        
        ins-=2;
        cout<<endl;
    }

}
void print20(int n){
    int ins=2*n-2;
    for (int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int j=0;j<ins;j++){
             cout<<" ";
        }
         for(int j=0;j<i;j++){
            cout<<"*";
        }
        ins-=2;
        cout<<"\n";
    }

    int spaces=2*(n-4);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }
           
                for(int j=0;j<spaces;j++){
                    cout<<" ";
                }
                    
                for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }
             
             spaces+=2;   
          
        cout<<"\n";   
    }
    
}
void print21(int n){
for(int i=0;i<n;i++){
    for (int j=0;j<n; j++){
        if((i==0||i==n-1) || (j==0 ||j==n-1)) cout<<"*";
        else cout<<" ";
    }
    cout<<"\n";
}
}
void print22(int n ){
    for(int i=0;i<2*n-1;i++){
      for(int j=0;j<2*n-1;j++){
        int top=i;
        int bottom=(2*n-2)-i;
        int left=j;
        int right=(2*n-2)-j;
        cout<<(n-min(min(top,bottom),min(left,right)));
      }
      cout<<endl;
    }
}
int main(){;
    int n;
    cin>>n;
        print22(n);
        }
