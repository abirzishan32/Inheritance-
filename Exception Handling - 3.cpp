#include <bits/stdc++.h>
using namespace std;

//Nested try-catch blocks
    
int main() {
    int n;
    cin>>n;
    try{    //Outer Try
        try{        //Inner Try
            if(n==1){       //Throwing Exceptions
                throw 1;
            }
            else if(n==2){      //Throwing Exceptions
                throw 2;
            }
            else if(n==3){      //Throwing Exceptions
                throw 3;
            }
            else{       //Throwing Exceptions 
                throw 4;
            }
        }
        catch(int n){       //Inner Catch
            cout<<"Inner Catch "<<n<<endl;
            throw;      //Re-Throwing Exceptions. In this case we throw it without any arguments
        }       
    }
    catch(int n){       //Outer Catch
        cout<<"Outer Catch "<<n<<endl;
    }       
    return 0;
}
