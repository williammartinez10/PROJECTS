#include <cmath>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

double area(double side1, double side2, double side3){
    double sum = (side1 + side2 + side3) / 2.0;
    double area = sqrt(sum * (sum - side1) * (sum - side2) * (sum - side3));
    return area;
}

int main()
{
    cout << "Area is " << area(20,20,20) << endl;
    cout << "Area is " << area(10,10,10) << endl;
    cout << "Area is " << area(20,20,10) << endl;


    char symbol = '1';
    if (isdigit(symbol)){
        cout << "Okay!" << endl;
    }
    if (symbol == ' '){
        cout << "Good job!" << endl;
    }


    cout << "5.4 raised to the 5th power: " << pow(5.4, 5) << endl;


    string celphone = "(787)-691-2882";
    cout << "Area code --> " << celphone.substr(1, 3) << endl;


    cout << "Celphone before replace --> " << celphone << endl;
    cout << "Celphone after replace --> " << celphone.replace(1,3,"939") << endl;
}