#pragma once
//PLEASE FILL OUT THE BELOW DETAILS
//Student Name: 
//Course Number:
//Student Number: 

//complete each task which is shown as a comment. 
//complete each task directly below the comment
//each task shows a task number, and number of marks awarded
//on each task requiring an output, ensure the task goes on a separate line (unless stated)
//and ensure that it states the task number prior to output e.g. Task 11 
//upload your final three files to your assigned folder share on class.net
// \\192.168.68.114\finalExam\regiNumber


#include "functions.h";
#include <iostream>
using namespace std;



int main()
{
    //1) declare a type int called intOne (2)
    int intOne;

    //2) declare a type int called intTwo (2)
    int intTwo;

    //3) declare a type int called intThree (2)
    int intThree;

    //4) declare type float called floatOne (2)
    float floatOne;

    //5) assign intOne the value of 3 (2)
    intOne = 3;

    //6) assign intTwo the value of 5 (2)
    intTwo = 5;

    //7) assign floatOne the value of 3.0f (2)
    floatOne = 3.0f;

    //8) use the multiplication operator to multiply intOne with intTwo 
    //use intThree to store the result (3)
    intThree = intOne * intTwo;

    //9) increment intThree  (3)
    intThree++;

    //10) initialise a type char called myChar to the value 'a' (2)
    char myChar = 'a';

    //11) output the value intThree and myChar to the screen  (3)
    cout << intThree << myChar << endl;

    //12) declare a variable of type int called userValue  (3)
    int userValue;

    //13)  prompt the user to provide an input to userValue (2)    
    cout << "please provide userValue";

    //14) after prompting, get a variable from the user of type int called userValue. (3) 
    cin >> userValue;

    //15) take the input and apply a decision based on the numberbinputted . 
    //The decision should be based on if the user inputs a number above 10 
    //the code should output "above 10" (8)
    if (userValue > 10) {
        cout << "above 10";
    }

    //16) create an array of type int with 10 elements called myArray(8)
    int myArray[10];

    //17 part a) create a for loop to iterate through the above array and populate the array with 
    //{0,2,4,6,8,10,12,14,16,18} 
    //(6 marks)
    for (int i = 0; i < 10;i++) {
        myArray[i] = i * 2;
   }

    //17 part b) create a for loop to iterate through the above array and output its contents
    //ensure each number is shown on the same line, but a space separates them all
    cout << endl;
    for (int i = 0; i < 10;i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
   
    //18) initialise a variable of type int called cost to 100 (2) 
    int cost = 100;

    //19) create a pointer pointing to the above variable called costPtr (4) 
    int* costPtr = &cost;

    //20) create a function which calculates the VAT on the cost called calcVat (13) 
    //The function should be declared in the correct place and defined in the correct place
    //the function should take a cost parameter and return the VAT. Vat is an increase of 20%
    //the function requires to take a type float as parameter and return type float    
    //test the function here:
    cout << calcVat(3.0) << endl;
    

    //21) using the below string
    string s1 = "Hello, ";
    string s2 = "How Are You";
    string fullGreeting = "";
    //use a string method, join s2 to s1 (5) 
    s1.append(s2);
    
    //22) using a string method, calculate the length of the s1 string and 
    //assign to lengthFG. Output the value to the console (5) 
    int lengthFG;
    lengthFG = s1.length();
    cout << s1.length() << endl;

    //23) use a string method to take out the "How" part of the string and output(5) 
    cout << s1.substr(7, 3) << endl;

    //24) using a different string method to what you have used in above code
    // add the "!" character to the end of the string. Output the string.  (5)
    s1.push_back('!');
    
}

