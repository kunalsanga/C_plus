#include<iostream>
using namespace std;
int square(int num){
    return num*num;
}
int main(){
    int result =square(5);
    cout<<"the square is: "<<result<<endl;
    return 0;
}