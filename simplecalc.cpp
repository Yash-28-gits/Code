#include<iostream>
using namespace std;
float Add(float x, float y){
    cout<<x+y;
}
float Sub(float x,float y){
    cout<<abs(x-y);
}
float Div(float a,float b){
    cout<<a/b;
}
float Mul(float a,float b){
    cout<<a*b;
}
int main() {
    cout<<"SIMPLE CALCULATOR\n";
    cout << "1.Addition\n2.Subtraction\n3.Divide\n4.Multiplication\n";
    int count,x,y;
    cout<<"Enter your choice: ";
    cin>>count;
    cout<<"Enter two numbers";
    cin>>x>>y;

    switch(count){
        case 1:
            Add(x,y);
            break;
        case 2:
            Sub(x,y);
            break;
        case 3:
            Div(x,y);
            break;
        case 4:
            Mul(x,y);
            break;
    }
}
