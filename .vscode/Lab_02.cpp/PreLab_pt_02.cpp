#include <iostream>
#include <cmath>
#include <string>

using namespace std;


/*
// STARTER CODE HERE
// COMPLETE THE FOLLOWING FUNCTION 
void radius(double x1, double y1, double xCenter, double yCenter) {
    double result = 0;
    
    //YOUR CODE GOES HERE
    result = sqrt(pow(x1 - xCenter, 2) + pow(y1 - yCenter, 2));
    cout << "The radius is: " << result << endl;
}

int main()
{
    radius(14.25, 13.68, 25.678, 10.32547);
    return 0;
}
*/




/*
// STARTER CODE HERE
// COMPLETE THE FOLLOWING FUNCTION 
void maxRoundedValue(double first, double second) {
    cout << "The maximum rounded value is: ";
    
    //YOUR CODE GOES HERE
    int roundedf = floor(first);
    int roundeds = ceil(second);

    if (roundedf > roundeds){
        cout << roundedf << endl;
    } else if (roundedf < roundeds){
        cout << roundeds << endl;
    } else {
        cout << roundeds << endl;
    }
};


int main()
{
    maxRoundedValue(12.445, 5.112);
    maxRoundedValue(890.992, 891.3);
    return 0;
}
*/




/*
void degreeAngleCosine (double d) {
    double pi = 2*acos(0.0);
    // cout << "YOUR CODE HERE" << endl;
    cout << cos((d) * (pi/180)) << endl;
};

int main()
{
    degreeAngleCosine(30);
    return 0;
}
*/




/*
void stringPractice1(string password);

int main() {
  stringPractice1("1234");
  stringPractice1("pa33w0rd");
  return 0;
}

void stringPractice1(string password) {
    // cout << password.length();
    if (password.length() < 8){
    cout << "password is too short" << endl;
    }
    else if (password.length() >= 8){
        cout << "none";
    }
}
*/




/*
void stringPractice2(string name, string department, string college);

int main()
{
  stringPractice2("Pedro", "CIIC", "Engineering");
  return 0;
}


void stringPractice2(string name, string department, string college) {
    cout << "Welcome " << name << " to the " << department << " department " << "in the College of " << college << endl;
}
*/




/*
void stringPractice3(string twoWords);

int main()
{
    stringPractice3("Two Words");
}

// COMPLETE THE FOLLOWING FUNCTION 
void stringPractice3(string twoWords) {
    // YOUR CODE HERE
    int indx = twoWords.find(' '); 
    // cout << indx;
    twoWords.replace(indx, 1, "_");
    cout << twoWords << endl;
}
*/




/*
void stringPractice4(string word);

int main()
{
    stringPractice4("Vehicle");
    return 0;
}


void stringPractice4(string word) {
    // YOUR CODE HERE
    word.erase(0, 2);
    word.append("---");
    cout << word << endl;
}
*/



//----------------------------------------------------------------------------------------------


/*
void practiceCharMethod1(char c);

int main()
{
    practiceCharMethod1('f'); // Test with different characters
    return 0;
}


void practiceCharMethod1(char character)
{
    cout << "Inverse Capitalization: ";
    //YOUR CODE GOES HERE

    if (isupper(character)){
        char c = tolower(character);
        cout << c;
    } else if (islower(character)){
        char c = toupper(character);
        cout << c;
    }
}
*/




// void practiceCharMethod2(char c);  ??????????????????????



/*
void practiceCharMethod3(char c);

int main()
{
    practiceCharMethod3('L'); // Test with different characters
    return 0;
}


void practiceCharMethod3(char character)
{
    bool okToUse;
    
   //YOUR CODE GOES HERE
    if (isspace(character) || ispunct(character)){
       okToUse = false;
    } else {
        okToUse= true;
    }
    cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
*/




/*
void practiceCharMethod4(char c);

int main()
{
    practiceCharMethod4('a'); // Test with different characters
    return 0;
}


void practiceCharMethod4(char character)
{
    // YOUR CODE HERE
    if (character == 'a' || character == 'b' || character == 'c'){
        cout << "first three letters";
    } else if (character == 'A' || character == 'B' || character == 'C'){
        cout << "first three letters";
    } else {
        cout << "none";
    }
}
*/