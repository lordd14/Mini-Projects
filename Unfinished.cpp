#include <iostream> //includes input/output stream
using namespace std; //uses the namespace standard

// Function to determine grade
string getGrade(int score) { //Create a custom function named getGrade that takes one integer (score) and returns a string (the grade)
    if (score >= 90) return "A"; // if score is greater or equal to 90
    else if (score >= 80) return "B"; //else if score is greater or equal to 80 return "B"
    else if (score >= 70) return "C";
    else if (score >= 60) return "D";
    else if (score >= 50) return "E";
    else return "F"; //returns any score below 50 with F
}

[[noreturn]] int main() {
    //begins the main function (YOU CAN ONLY HAVE ONE OF THESE)
    int score1, score2, score3;

    cout << "Enter your first test score (0-100): "; //prints a message to the console and asks for input
    cin >> score1; //stores the value the typed in score1

    cout << "Enter your second test score (0-100): "; //takes input from the user for a second test score
    cin >> score2; //takes input from the user and stores it in score2

    cout << "Enter your third test score (0-100): "; //character output (see out)
    cin >> score3; //character input (see in)

    int average = (score1 + score2 + score3) / 3; //calculates the average by adding 3 scores & dividing by 3

    cout << "\nYour average test score is: " << average << endl; //makes a new line and prints the persons average score
    cout << "Overall Grade: " << getGrade(average) << endl;

    cout << "\nThank you for using James's Grade Converter!" << endl; //thanks the user with a message in a new line

    // VARIABLES PRACTICE
    constexpr int age = 15; //creates an integer variable called age and values it at 15, then breaks.
    constexpr double height = 1.65; //creates a float/double(decimal) variable & stores it at 1.65
    constexpr char grade = 'A'; //creates a character variable and stores it as A (Char)
    constexpr bool isAlive = true; //creates a bool variable (true/false) and values this variable as true with (isAlive)
    const string name = "James"; //creates a string called "James"

    cout << "\n--- Variable Practice ---\n"; //creates a new line & prints a message
    cout << "Age: " << age << endl; //send output to the console (tells them their age.)
    cout << "Height: " << height << endl; //sends output to the console (tells them their height.)
    cout << "Grade: " << grade << endl; //sends output to the console (tells them their Grade.)
    cout << "IsAlive: " << isAlive << endl; //sends output to the console (tells them their Bool status.)
    cout << "Name: " << name << endl; //sends output to the console (tells them their name.)

    // SIMPLE GAME ACTION SYSTEM
    int health = 100; //creates an integer variable & calls it health valuing it at 100
    int action; //creates an integer called action

    cout << "\n--- Combat System ---\n"; //prints a new line & message
    cout << "Choose your action (1 = punch, 2 = stab, 3 = shoot): "; //sends this message to the console
    cin >> action; //takes input from user depending on number entered

    if (action == 1) {  //if action is equal to 1
        int punch = 10; //creates an integer called punch and makes you do it
        cout << "You did " << punch << " damage!" << endl; //prints message
    } else if (action == 2) { //else if action is the same as 2
        int stab = 60; //create an integer called stab and value it at 60
        cout << "You did " << stab << " damage!" << endl; //tells you what happened
    } else if (action == 3) { //else if action is the same as 3
        int shoot = 90; //use int shoot that does 90 points damage
        cout << "You did " << shoot << " damage!" << endl; //tells you what happened
    } else { //if you enter anything other than 1-3 else prints the message invalid action
        cout << "Invalid action!" << endl;
    }

    // LOOP PRACTICE
    cout << "\n--- Loop Practice ---\n"; //prints a message on a new line

    cout << "While loop: "; //prints another message after this
    int count = 1; //creates an integer called count and values it at 1
    while (count <= 5) { //uses a while loop to say while count is less or equal to 5
        cout << count << " "; //character output count "(your count here)"
        count++; //counts up by 1 (short for count = count + 1;) or count += 1; if you want to add more than 1 you need)
    } //to do this (count += 2;) this adds 2 to the count and then calculates the new total value

    cout << "\nDo-While loop: "; //creates a newline and message
    int number; //integer is called number
    do { //tells the console to do this in a while loop (do-while loop)
        cout << "\nEnter a positive number: "; //creates a new line and asks for input
        cin >> number; //stores the value typed
    } while (number <= 0); //while the number is less or equal to zero

    cout << "\nFor loop: "; //creates a new line and message
    for (int i = 1; i <= 5; i++) { //starts counting at 1 (int i = 1) keeps looping while (i <= 5)  adds 1 to i after each loop (i++) (don't forget the semicolon/break)
        cout << i << " "; //sends the output to the console (1 2 3 4 5) but won't go above 5
    }

    cout << "\n\nEnd of Day 1 Journal!" << endl; //creates a new line and message

    int scores[5]; //array of 5 integers

    //take input for each score
    for (int i = 0; i < 5; i++) {
        cout << "Enter score " << i + 1 << ": ";
        cin >> scores[i];
    }
    //print scores
    cout << "\nYour scores are:";
    for (int i = 0; i < 5; i++) {
        cout << scores[i] << " ";
    }
    int i = 0;
    while (i < 5) {
        cout << i << endl;
    }

    return 0;
}
