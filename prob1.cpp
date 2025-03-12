#include <iostream>
#include <string>
using namespace std;

class student {
   public:
    int stdId  ;
    string stdName;
    int fee;
    string course;
void setinfo(int i, int f, string n, string c){
     stdName = n;
     stdId = i;
     fee = f;
     course =c;

}
void getinfo(){
    cout<<stdName<<endl<<stdId<<endl<<fee<<endl<<course<<endl;
}
};



int main(){
    student i1;
    i1.stdName= "abdul";
    i1.stdId=002;
    i1.fee=1000;
    i1.course= "b tech";
    i1.getinfo();
    

    return 0;
}



    