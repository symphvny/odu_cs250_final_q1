#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class robot{

string arm1;
string arm2;
string arm3;
string drill, scoop, claw, probe;

public:
        robot(){
                arm1 = " ";
                arm2 = " ";
                arm3 = " ";
                }
        void setArm1(string value){
            arm1=value;
            }
        void setArm2(string value){
            arm2=value;
            }
        void setArm3(string value){
            arm3=value;
            }

        string getArm1(){
            return arm1;
            }
        string getArm2(){
            return arm2;
            }
        string getArm3(){
            return arm3;
            }
        void display(){
            cout<<"Arm 1: "<<arm1<< endl << "Arm 2: "<<arm2<< endl <<"Arm 3: "<<arm3<< endl;
            }
};

int main(){

    robot Justin;
    string input1, input2, input3, drill, scope, claw, probe;

    cout<<"Tool for Arm 1: ";
    cin>> input1;
    if (input1 == drill){cout << drill<<endl;
        if(input1 == scope){cout << scope<<endl;
         }
         if(input1 == claw){cout << claw<<endl;
         }
            if(input1 == probe){cout <<probe<<endl;
         }
         } else{cout<<"Please enter one of the following devices: drill, scoop, claw, or probe"<<endl; }

    Justin.setArm1(input1);

    cout<<"Tool for Arm 2: ";
    cin>> input2;
    if (input2 == drill){cout << drill<<endl;
        if(input2 == scope){cout << scope<<endl;
         }
         if(input2 == claw){cout << claw<<endl;
         }
            if(input2 == probe){cout <<probe<<endl;
         }
         } else{cout<<"Please enter one of the following devices: drill, scoop, claw, or probe"<<endl; }
    Justin.setArm2(input2);

    cout<<"Tool for Arm 3: ";
    cin>> input3;
    if (input3 == drill){cout << drill<<endl;
        if(input3 == scope){cout << scope<<endl;
         }
         if(input3 == claw){cout << claw<<endl;
         }
            if(input3 == probe){cout <<probe<<endl;
         }
         } else{cout<<"Please enter one of the following devices: drill, scoop, claw, or probe"<<endl; }

    Justin.setArm3(input3);

    Justin.display();
    return 0;
    }
