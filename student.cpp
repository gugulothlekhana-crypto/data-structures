#include<iostrean>
using namespace std;
int main(){
    int a,b;
    cout<<"enter two numbers";
    cin>> a >> b;
    cout << "sum = " << a+b << endl;
    cout << "difference = " << a-b << endl;
    cout << "multiplication = " << a*b << endl;
    if (b != 0) {
        cout << "division = " << a/b << endl;
        else{
            cout << "division by zero is not allowed" << endl;

        }
    }
    }


