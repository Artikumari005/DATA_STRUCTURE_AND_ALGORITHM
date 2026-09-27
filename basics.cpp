#include<iostream>
using namespace std;

int main(){
    /*
    int age ;
    cin >>
    if(age>20){
        cout<< " you are an adult" <<" \n";
    }else{
        cout<< "you are not an adult";
    }
    return 0;
    */

    //switch case

    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "today is monday";
        break;

    case 2:
        cout << "today is tuesday";
        break;
    case 3:
        cout << "today is wednesday";
        break;
     case 4:
        cout << "today is thursday";
        break;
    case 5:
        cout << "today is friday";
        break;
    case 6:
        cout << "today is saturday";
        break;
        
    case 7:
        cout << "today is sunday";
        break;

    
    default:
        break;
    }
}