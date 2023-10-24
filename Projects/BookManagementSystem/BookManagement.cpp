#include "Admin/Admin.cpp"

#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

#ifndef __VECTOR_H
#include<string>
#endif

using namespace std;

void displayMainOptions(){
    cout<<"Enter\n1\tfor logging as Admin\nAny other no. to exit\n\t:\t";
}

bool login(vector<Admin*> &listAdmin,string usr,string pwd,int &usrIdx){
for(int i=0;i<listAdmin.size();i++){
    if(listAdmin[i] -> authorize(usr,pwd)) {
        usrIdx = i;
        return true;
    }
}
return false;
}

int main(){
    vector<Admin*> listAdmin;
    listAdmin.push_back(new Admin("root","pwd1"));
    bool exitFlag = false;
    int caseValue = 0, usrIdx = 0;
    while(true){
        string usr,pwd;
        displayMainOptions();
        cin>>caseValue;
        switch(caseValue){
        case 1:
                cout<<"\n\tEnter the new username\t:\t";
                cin>>usr;
                cout<<"\n\tEnter the password\t:\t";
                cin>>pwd;
                if(login(listAdmin, usr, pwd, usrIdx)){
                    cout<<"\n\tSuccessfully logged in !!!\n";
                    listAdmin[usrIdx] -> showOptions();
                }
                else cout<<"\n\tWrong username or password\n";
        break;
        default:
            exitFlag = true;
        }
    if(exitFlag) break;
    }

    return 0;
}