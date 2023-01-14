#include<bits/stdc++.h>
using namespace std;
// int cnt =0;

//printing 1 five times
// void f(){
//     if(cnt ==5)
//         return;
//     cout<<1<<endl;
//     cnt ++;
//     f();
// }

//printing your name n times

// void name (int n){
//     if(n==0)
//         return;
//     cout<<"Esha"<<endl;
//     name(n-1);
// }


//printing 1 to n linearly
// void print(int n){
//     if(n<=0) return;
//     else{
//         print(n-1);
//         cout<<n<<endl;
//     }
// }

//printing from n to 1 linearly
void print(int n){
    if(n<=0) return;
    else{
        cout<<n<<endl;
        print(n-1);
    }
}
int main(){
    int n;
    cin>>n;

    // int i=1;
    print(n);
    //name(n);
    //f();
    return 0;
}