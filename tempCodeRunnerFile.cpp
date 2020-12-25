#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,k,i,j=0,k=0;
cout << "Enter n: ";
cin >> n;
cout << "Enter k: ";
cin >> k;
while (j<n)
{
    cout <<"_";
    j++;
}
i=n*n;
while (i>0)
{
if (i%k==0)
{
    cout <<"o";
}
else
{
    cout <<"x";
}
if (n==1)
{
    cout <<"\n";
}
else if(i%n==1){
    cout <<"\n";
}
i=i-1;
}
while (k<n)
{
    cout <<"_";
    k++;
}


}