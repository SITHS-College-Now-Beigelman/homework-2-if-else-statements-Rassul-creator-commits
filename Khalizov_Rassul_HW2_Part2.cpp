// Rassul Khalizov
// Homework 2 Part 2 
// October 6th 

#include<iostream>

using namespace std; 

int main()
{
    // declares the variables as numbers
    double Judge1;
    double Judge2;
    double Judge3;
    double Judge4;
    double Judge5;
    double Judge6;
    double min;
    double max;

    // asks for the input of each judge and marks them as a number
    cout<<"What is the score of Judge 1?"; 
    cin >> Judge1 ; 

     cout<<"What is the score of Judge 2?"; 
    cin >> Judge2 ; 

     cout<<"What is the score of Judge 3?"; 
    cin >> Judge3 ; 

     cout<<"What is the score of Judge 4?"; 
    cin >> Judge4 ; 

     cout<<"What is the score of Judge 5?"; 
    cin >> Judge5 ; 

     cout<<"What is the score of Judge 6?"; 
    cin >> Judge6 ; 

    // Arrange the numbers to find the maximium and minimium 
    if (Judge2 < min)
    min = Judge2; 

    if (Judge3 < min)
    min = Judge3;

    if (Judge4 < min)
    min = Judge4;

    if (Judge5 < min)
    min = Judge5;

    if (Judge6 < min)
    min = Judge6;

    if (Judge2 < max)
    min = Judge2;

    if (Judge3 < max)
    min = Judge3;

    if (Judge4 < max)
    min = Judge4;

    if (Judge5 < max)
    min = Judge5;

    if (Judge6 < max)
    min = Judge6;

    // outputs the average score by subtracting the minimium and maximium scores
    cout<<"The final score is " <<((Judge1 + Judge2 + Judge3 + Judge4 +Judge5 + Judge6 - min - max)/4);

    What is the score of Judge 1?1
What is the score of Judge 2?2
What is the score of Judge 3?3
What is the score of Judge 4?4
What is the score of Judge 5?5
What is the score of Judge 6?6
The final score is 5.25%
        
return 0; 
}
