#include<iostream>
using namespace std;

int main(){
    int month;
    cout<<"please enter your month number;"<<endl;
    cin>>month;
    switch(month){
        case 1:
        cout<<"january"<<endl;
        break;
        case 2:
        cout<<"february"<<endl;
        break;
        case 3:
        cout<<"march"<<endl;
        break;
        case 4:
        cout<<"April"<<endl;
        break;
        case 5:
        cout<<"May"<<endl;
        break;
        case 6:
        cout<<"june"<<endl;
        break;
        case 7:
        cout<<"july"<<endl;
        break;
        case 8:
        cout<<"August"<<endl;
        break;
        case 9:
        cout<<"september"<<endl;
        break;
        case 10:
        cout<<"october"<<endl;
        break;
        case 11:
        cout<<"november"<<endl;
        break;
        case 12:
        cout<<"december"<<endl;
        break;
        default:
        cout<<"invalid month!";
    }
}
