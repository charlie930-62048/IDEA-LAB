// program to calculate the Area and perimeter of the rectangle

#include<iostream>
using namespace std;

int main(){
    int l,b,A,p;

    cout<<"Enter the value of length and breadth: ";
    cin>>l>>b;

    A = l * b;

    cout<<"The Area of the rectangle is: "<<A<<endl;

    p = 2 * (l + b);

    cout<<"The Perimeter of the rectangle is: "<<p<<endl;

    return 0;
}
