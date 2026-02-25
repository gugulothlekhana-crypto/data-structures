#include<iostream>
using namespace std;
template <class T >
T findmax (T a,T b){
    if (a>b){
        return a;
    } else{
        return b;
    }
} 
int main(){
    cout << "max of integers" << findmax(5,7) << endl;
    cout << "max of float" << findmax(5.51,7.0) << endl;
    cout << "max of charecter" << findmax('f','i') << endl;
} 
