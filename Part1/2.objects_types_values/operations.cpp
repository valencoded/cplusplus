#include <iostream>
using namespace std;
main(){
    cout<<"Enter two integer values: \n";
    double val1, val2, smaller, larger, sum, diff, prod, ratio;
    bool equals = false;
    cin>>val1>>val2;

    //we determine which one is samller larger or if they are equals
    if (val1 < val2){
        smaller = val1;
        larger = val2;
    }else if (val2 < val1){
        smaller = val2;
        larger = val1;
    }else {
        equals = true;
    }
    //we solve the operations
    sum = val1 + val2;
    diff = abs(val2 - val1);
    prod = val1 * val2;
    ratio = val1/val2;

    //we print the results
    if (equals == false){
        cout << "\nsmaller: "<< smaller <<"\nlarger: "<< larger;
    } else {
        cout <<"the values are equals";
    }
    cout << "\nsum: "<<sum<<"\ndifference: "<<diff<< "\nproduct: "<<prod<<"\nratio: "<<ratio;

    return 0;
}