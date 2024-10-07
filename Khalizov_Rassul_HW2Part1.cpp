// Rassul Khalizov
// Homework 2
// 30/1/24

#include<iostream>
using namespace std;

int main()
{
    // declares the month and day as integers 
    double day;
    double month; 

    // labels the input month and day as the integer values month and day
    cout<<"What is the month input as a numerical value?";
    cin >> month; 
    
    cout<<"What is the day of the month?";
    cin >> day; 


    // when months and day are in between the specific values for Spring, it outputs "It is now Spring!"
    if (month == 3 || day >= 21 || day <= 31) 
    {
        cout<<"It is now Spring!"; 
    }
    
    else if (month == 4 || day <= 30)
    { 
        cout<<"It is now Spring!"; 
    }

    else if (month == 5 || day <= 31)
    {
        cout<<"It is now Spring!";
    }

    else if (month == 6 || day <= 20)
    {
        cout<<"It is now Spring!";
    }


    // when months and day are in between the specific values for Summer, it outputs "It is now Summer!"


    else if (month == 6 || day >= 21 || day <= 30 ) 
    {
        cout<<"It is now Summer!";
    }

    else if (month == 7 || day <= 31)
    {
        cout<<"It is now Summer!";
    }

    else if (month == 8 || day <= 31)
    {
        cout<<"It is now Summer!";
    }

    else if (month == 9 || day <= 22 ) 
    { 
        cout<<"It is now Summer!";
    }


    //when months and day are in between the specific values for Fall, it outputs "It is now Fall!"

    else  if (month == 9 || day >= 23 || day <= 30 )
    {
        cout<<"It is now Fall!";
    }

    else if (month == 10 || day <= 31)
    {
        cout<<"It is now Fall!";
    }

    else if (month == 11 || day <= 30)
    {
        cout<<"It is now Fall!";
    }

    else if (month == 12 || day <= 21)
    {
        cout<<"It is now Fall!";
    }

    

    //when months and day are in between the specific values for Winter, it outputs "It is now Winter!"

    else if (month == 12 || day >= 22 || day <= 31)
    {
        cout<<"It is now Winter!";
    }

    else if (month == 1 || day <= 31)
    {
        cout<<"It is now Winter!";
    }

    else if (month == 2 || day <= 29)
    {
        cout<<"It is now Winter!";
    }

    else if (month == 3 || day <= 20)
    {
        cout<<"It is now Winter!";
    }   


    // when the month or day is not a valid input, it outputs "This is NOT a valid day, please input a valid day and month"
    else if (day >= 0)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }

    else if (month == 1 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }

    else if (month == 2 || day > 29)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 3 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 4 || day > 30)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 5 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 6 || day > 30)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 7 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 8 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 9 || day > 30)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 10 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 11 || day > 30)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }
    
    else if (month == 12 || day > 31)
    {
        cout<<"This is NOT a valid day, please input a valid day and month";
    }

    else if (month <= 0)
    {
        cout<<"This is NOT a valid month, please input a valid day and month";
    }

/*
What is the month input as a numerical value?3
What is the day of the month?22
It is now Spring!         
*/
}
