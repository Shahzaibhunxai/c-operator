#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=12; i++){
        cout<<i<<"st month"<<endl;
        for(int j=1; j<=4; j++){
            cout<<"Week # "<<j<<endl;
            for(int x=1; x<=7; x++){
                cout<<"day"<<x<<endl;
            }
        }
    }
}
