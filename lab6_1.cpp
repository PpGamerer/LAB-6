#include<iostream>
using namespace std;

int main(){
int num;
cout << "Enter an integer: ";
cin >> num;

int even = 0;
int odd = 0;

while(num != 0){
    if(num%2==0){
        even += 1;
     } else {
        odd += 1;
     }
    cout << "Enter an integer: ";
    cin >> num;
} 
   
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}



