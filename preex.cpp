#include<iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
void printNum(int x){
	if(x < 0){
		cout << "(" << x << ")";
	}else{
		cout << x;
	}
}

void printPow(int x, int k){
	printNum(x);
	cout << "^";
	printNum(k);
}

int main(){
	
	int a[] = {3,0,-2,44,-4,1,69,2,-5,2,-2,0,7,-12,4,1,6,35,0,5};
	int b[] = {4,1,0,117,10,1,260,2,-12,-2,-2,-1,25,0,7,2,9,12,-49,0};
	int c[] = {5,1,2,125,25,2,-269,1,-13,0,-1,6,25,12,11,3,6,37,49,5};
	int k;
	cout << "Enter k: ";
	cin >> k;
	
	int i = 0, count = 0;
	while(i < 20){
        double z=pow(a[i],k),q=pow(b[i],k),x=pow(c[i],k);
		if(x== z + q){
			printPow(c[i],k);
			cout << " = ";
			printPow(a[i],k);
			cout << " + ";
			printPow(b[i],k);
            cout << "\n";	
            count++;	
		}
		i++;	
	}
	cout << "Totally "<<count<<" place(s)"; 
	
	return 0;
}