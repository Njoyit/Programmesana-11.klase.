 #include <iostream>
using namespace std;

int main(){
    char u;
    char r='r', d='d', s='s',a='a';
    int x,z;

    cout<<"ievadi divus veselus skaitlus"<<endl;
    cin>>x;
    cin>>z;
    cout<<"Izvelies darbibas veidu:r-reizinasana,d-dalisana,s-saskaitisana,a-atnemsana"<<endl;
    cin>>u;
    if (u=r){
        cout<<x*z<<endl;

    }
    else if (u=d){
       cout<<x/z<<endl;


    }
   else if (u=s){
        cout<<x+z<<endl;

    }
   else if(u=a){
        cout<<x-z<<endl;
    }




}
