#include <iostream>
#include <cctype>
#include <cmath>
#include <string>

using namespace std;

/*
void printable(char character);

int main()
{
    printable('2');
}


void printable (char character){
    if (isprint(character)){
        if (isdigit(character)){
            cout << "It is printable and digit." << endl;
        } else {
            cout << "It is printable." << endl;
        }
    } else {
        cout << "It is not printable." << endl;
    }
}
*/


/*
void sinlog(double num1, double num2);

int main()
{
    sinlog(-4, -4);
}

void sinlog(double num1, double num2){
    double sinNum1 = sin(num1);
    double sinNum2 = sin(num2);
    double log = log2((sinNum1 + sinNum2));

    cout << "Number 1: " << sinNum1 << endl;
    cout << "Number 2: " << sinNum2 << endl;
    cout << "Logrithm: " << log << endl;
}
*/



// void startWithA(string input){
//     if (input[0] == 'A' || input[0] == 'a'){
//         cout << "Starts with an A." << endl;
//     } else {
//         cout << "Does not start with an A." << endl;
//     }
    


void startWithA ( string input ){
    size_t lowercasefound = input.find_first_of ("a") ;
    size_t uppercasefound = input.find_first_of ("A") ;

    if ( lowercasefound == 0 || uppercasefound == 0){
        cout << " Starts with A." << endl ;
    } else {
        cout << " Doesn't start with A." << endl ;
    }
    }


int main()
{
    startWithA("animal");
    startWithA("Alan");
    startWithA("jefa");
    startWithA("Madre");
    startWithA("amen");
    startWithA("_Alejandro");
    startWithA("12abc");
}



// int main()
// {
//     string s1 = "William";
//     cout << s1 << endl;

//     string s2(5, '*');
//     cout << s2 << endl;

//     cout << s1.length() << endl;

//     cout << s1.at(6) << endl;

//     s1.clear();
//     cout << s1 << endl;

//     return 0;
// }


/*
int main()
{
    string s1 = "William";
    string s2 = "Alexander";
    s1.append(s2);
    cout << s1 << endl;

    string s3 = s1.substr(0, 5);
    cout << s3 << endl;

    s1.erase(7, s1.length());
    cout << s1 << endl;

    return 0;
}
*/



/*
int main()
{
    string myStr = "William A. Martinez Martinez";
    int indx = myStr.find('.');

    cout << indx << endl;

    myStr.replace(indx, 10, "lexander");
    cout << myStr << endl;

    return 0;
}
*/




/*
int main()
{
    string fname;
    cout << "Enter your first name: ";
    getline(cin, fname);

    // if (fname.empty()){
    //     cout << "Your did not enter a name." << endl;
    // }

    cout << "Hello, " << fname << "!" << endl;

    return 0;
}
*/



/*
int main()
{
    string username;
    cout << "Enter your username: ";
    getline(cin, username);

    string uprext = "@upr.edu";

    string email = username.append(uprext);

    cout << email << endl;

    return 0;
}
*/



/*
int main()
{
    string fname, mname, lname;

    cout << " " << endl;

    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your middle name: ";
    getline(cin, mname);
    cout << "Enter your last name: ";
    getline(cin, lname);

    char ifname = fname.at(0);
    char imname = mname.at(0);
    char ilname = lname.at(0);

    cout << "\n" << "Your initials are: " << ifname << '.' << imname << '.' << ilname << "\n" << endl;

    return 0;
}
*/




/*
int main()
{
    string fname;

    cout << "Enter your name: ";
    getline(cin, fname);

    string nickname = fname.substr(0, 5);

    cout << "Your nickname is: " << nickname << endl;
    cout << "Hello " << nickname << "!" << endl;

    return 0;
}
*/




/*
int main()
{
    string username;
    cout << "Enter your username: ";
    getline(cin, username);

    username.insert(3, "@");

    cout << username << endl;

    return 0;
}
*/




/*
int main()
{
    string fname;
    cout << "Enter your first name: ";
    getline(cin, fname);

    string substr;
    cout << "Search for which character/s? ";
    getline(cin, substr);

    int position = fname.find(substr);
    cout << "Found character/s at position: " << position << endl;

    return 0;
}
*/
