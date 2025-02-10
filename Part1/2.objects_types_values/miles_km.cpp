#include <iostream>
using namespace std;

main(){
    float miles = 0;
    float km = 0;
    cout << "Enter miles: ";
    cin >> miles;
    km = miles*1.609;
    cout <<miles<<" miles = "<<km<<" km";
}