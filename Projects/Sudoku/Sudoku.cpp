#ifndef __IOSTREAM_H
#include<iostream>
#endif

#ifndef __STRING_H
#include<string>
#endif

#ifndef __VECTOR_H
#include<vector>
#endif

#include<iomanip>

using namespace std;

void print(vector<vector<int>> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++)
            std::cout << std::setw(10) << std::fixed << std::setprecision(2) << arr[i][j];
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr;
    int addVal = 1;
    for(int i=0;i<9;i++){
        vector<int> newArr ;
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++)
                newArr.push_back( k+addVal);
        }
        addVal+=3;
        if(addVal>=9) addVal = 1;
        arr.push_back(newArr);
        newArr.clear();
    }
    print(arr);

    return 0;
}