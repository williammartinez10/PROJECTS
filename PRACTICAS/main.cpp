#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "-----> These are tests. I am learning a new language :) <-----" << "\n" << endl;
    string me = "William";
    string sister = "Mireilly";
    string mom = "Maritza";
    string dad = "Ulysses";

    int my_age;
    my_age = 18;

    cout << "My name is " << me << "\n";
    cout << "My sister is " << sister << "\n";
    cout << "My mom is " << mom << "\n";
    cout << "My dad is " <<dad << "\n";
    cout << "I am " << my_age << " years old\n";

    me = "Jose";
    cout << "Now my name changed. My new name is " << me << endl;
    my_age = 21;
    cout << "My age also changed. I am now " << my_age << " years old" << endl;




    char grade = 'A';
    cout << grade << endl;

    string phrase = "Giraffe Academy";
    cout << phrase << endl;

    double gpa = 2.3;
    cout << gpa << endl;

    bool isMale = true;
    cout << isMale << endl;







    cout << "William Alexander\n";
    cout << "Hello" << endl;


    string word = "puppy";

    cout << word.length() << "\n";
    cout << word[0] << "\n";
    cout << word[1] << endl;
    cout << word[4] << endl;

    word[2] = 'l';
    cout << word << "\n";


    cout << word.find("y", 0) << "\n";
    cout << word.find("p", 0) << "\n";


    cout << word.substr(2, 1) << "\n";
    cout << word.substr(0, 4) << "\n";


    string wordsub;
    wordsub = word.substr(0, 4);
    cout << wordsub << "\n";






    cout << 40 << endl;
    cout << 40 * 2 << endl;
    cout << 40 / 2 << endl;
    cout << 10 % 3 << endl;
    cout << 4 + 5 * 10 << endl;
    cout << (4 + 5) * 10 << endl;


    int first_number = 5;
    double second_number = 5.5;

    first_number ++;
    cout << (first_number) << endl;

    second_number --;
    cout << (second_number) << endl;

    first_number += 2;
    cout << (first_number) << endl;

    first_number *= 2;
    cout << (first_number) << endl;

    first_number /= 4;
    cout << (first_number) << endl;

    cout << 20 + 13.55 << endl;

    cout << 10 / 3 << endl;
    cout << 10.0 / 3 << endl;
    cout << 10.0 / 3.0 << endl;



    cout << pow(2, 5) << endl;
    cout << pow(3, 3) << endl;

    cout << sqrt(36) << endl;
    cout << sqrt(81) << endl;
    cout << sqrt(10.5) << endl;

    cout << round(4.3) << endl;
    cout << round(13.6) << endl;

    cout << ceil(2.1) << endl;
    cout << ceil(89) << endl;
    cout << ceil(89.0) << endl;

    cout << floor(67.9) << endl;
    cout << floor(55) << endl;
    cout << floor(34.2) << endl;

    cout << fmax(3, 10) << endl;
    cout << fmax(24.5, 24.05) << endl;

    cout << fmin(3, 10) << endl;
    cout << fmin(24.5, 24.05) << endl;




    char letter = 'W';
    string letters = "Wam";
    cout << letter << "\n";
    cout << letters << "\n";






    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;


    string new_name;
    cout << "Enter your name: ";
    cin >> new_name;
    cout << "Hello " << new_name << "!" << endl;








    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "The total is " << num1 + num2 << endl;








    string color, pluralNoun, celebrity;

    cout << "Enter a color: ";
    cin >> color ;
    cout << "Enter a plural noun: ";
    cin >> pluralNoun ;
    cout << "Enter a celebrity: ";
    cin >> celebrity ;


    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;




    return 0;
}
