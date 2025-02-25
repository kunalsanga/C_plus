#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin >> num;
    if(num >0){
        cout<<"it is +ve int."<<endl;
    }else if(num<0){
        cout<<"it is -ve int."<<endl;

    }else{
        cout<<"it is zero."<<endl;
    }
    return 0;
}