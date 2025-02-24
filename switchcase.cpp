#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"enter choice(1-3): ";
    cin >> choice;
    switch(choice){
        case 1:
            cout<<"urs c is 1"<<endl;
        break;

        case 2:
            cout<<"urs c is 2"<<endl;
        break;

        case 3:
            cout<<"urs c is 3"<<endl;
        break;

        default:
            cout<<"invalid c"<<endl;
    }
    return 0;

}