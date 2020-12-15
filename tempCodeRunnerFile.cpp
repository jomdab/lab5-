#include<iostream>
using namespace std;

int main(){
    int x=12,e=0,o=0;
 while(x!=0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x%2==0 && x!=0){
        e++;
    } 
    else if(x%2!=0 && x!=0){
        o++;
    }
 }
    cout << "#Even numbers = "<< e;
    cout << "#Odd numbers = " << o;
    return 0;
}
