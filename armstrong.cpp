#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, originaln, lastdigit, sum=0;

    cin>>n;

    originaln=n;
    while(n>0){
        lastdigit = n%10;
        // sum+= pow(lastdigit,3); According to appni kasha it should run but it didn't
        //but it runs I suppose
        sum+= lastdigit * lastdigit * lastdigit;
        n=n/10;
    }

    if(sum==originaln){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}
//
