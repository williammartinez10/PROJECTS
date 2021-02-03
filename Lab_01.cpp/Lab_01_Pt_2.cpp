#include <iostream>
#include <string>

/*
* The syllabus for the course CODE101 is handed to the students. 
* The professor agreed on rounding up the Grade Letter from F to D if the margin was within 2.5%.
* The grading cutoff is as follows:
*/
std::string getLetterGrade(double grade){
    std::string letterGrade;

    if(grade >= 90){
        return "A";
    }
    else if (grade >= 80){
        return "B";
    }
    else if (grade >= 70){
        return "C";
    }
    else if((60-grade) <= 2.5){
        return "D";
    }
    else if (grade >= 60){
        return "D";
    }
    else{
        return "F";
    }
}

int main()
{
    // Breakpoint goes here
    std::cout << getLetterGrade(92.30) << std::endl;
    std::cout << getLetterGrade(84.00) << std::endl;
    std::cout << getLetterGrade(68.25) << std::endl;
    std::cout << getLetterGrade(59.20) << std::endl;
    std::cout << getLetterGrade(57.80) << std::endl;
    std::cout << getLetterGrade(23.90) << std::endl;
    std::cout << getLetterGrade(59.20) << std::endl;
}