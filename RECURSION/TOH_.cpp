/*
Implementation of the classical tower of hanoi problem
*/
#include<bits/stdc++.h>
using namespace std;
void toh(char from , char aux, char to, int n){
    if (n==0)       //if the number of disks is zero, we cant shift any. thus, this is the base condition
        return;
    
    toh(from , to , aux , n-1);     //sending the disks from a to b frist
    cout<<"Moved disks "<<n<<" from "<<from<<" to "<<to<<endl;
    toh(aux, from ,to , n-1);       //sending the disks from auxiliary (b) rod to final rod(c)
}
int main(){
    int n;
    cout<<"Enter the umber of disks : ";
    cin>>n;
    cout<<"The pattern of disk rearrangement is : "<<endl;
    toh('A','B','C',n);
    return 0;
}