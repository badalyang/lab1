#include <iostream>
using namespace std;
int main() {

int A, B,a,b,c, max;
cout<<"Enter the first number:";
cin>>a;
cout<<"Enter the second number:";
cin>>b;
if(a>b){
    c = a-b;
    }

else{
    c = b-a;
}
    for(int i = 1; i<=c; i++){
        if( b%i ==0 && a%i==0){
            max=i;
          }
        }

cout<<"MAX is:"<< max<< endl;
    return 0;
}
