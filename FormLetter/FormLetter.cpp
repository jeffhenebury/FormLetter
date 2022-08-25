// FormLetter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "C:\Users\jeffh\source\repos\std_lib_facilities.h"

int main()
{
    cout << "Enter the name of the person you want to write to: \n";
    string name;
    cin >> name;

    std::cout << "Dear " << name << ",\n\n";
    cout << "How are you? I am doing poorly. The Vermont snows are hundreds of feet deep!\n";
    cout << "\n[Okay, letter writer, now gimme another name!]\n";
    cout << "Other friend name:\n";
    string other_friend_name;
    cin >> other_friend_name;
    cout << "\n Interesting name,  " << other_friend_name << ". We all know gender is a construct, but what gender is your friend?\n";
    cout << "(m for male, f for female, o for other):";
    char other_friend_gender;
    cin >> other_friend_gender;
    string pronoun;
    if (other_friend_gender == 'm') {
        pronoun = "he";
    }
    else if (other_friend_gender == 'f') {
        pronoun = "she";
    }
    else
    {
        pronoun = "they";
    }
    cout << "\nHave you seen " << other_friend_name << " lately? I heard " <<pronoun << " got lost in a bag of potatoes.The fool!\n";

    cout << "By the way, letter-writer, how old are you?";
    int age;
    cin >> age;
    if ((age < 0) || (age > 110)) {
        simple_error("You are kidding! What disrespect! I am shutting this letter down RIGHT NOW.");
    }
    else if (age < 12) {
        cout << " Next year ye shall be " << age << " years old... that is, if the gullywag monster doesn't eat you first!\n";
    }
    else if (age == 17) {
        cout << "Next year you shall be able to vote ... that is, unless the choo-choo monster runs you over first!\n";
    }
    else if (age >= 70) {
        cout << "I hope you are enjoying retirement, likely hiding, because being a bit older it is surely harder to run" << 
           " from the terrible froodoo monster.";
    }
    cout << "Yours in solidarity and respect and compassion,\n\n";
    cout << "Jeffrey Henebury, Esquire at Law";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
