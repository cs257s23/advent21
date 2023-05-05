#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Variable name is fin, type is ifstream
    // Opening file called input.txt
    ifstream fin("input.txt");

    // Declare a string variable called line.
    // This has nothing in it yet.
    string line;

    // Read the first line and convert it. We do this before
    // the loop because the first line can't be an increase.
    getline(fin, line);
    int a = stoi(line);
    getline(fin, line);
    int b = stoi(line);
    getline(fin, line);
    int c = stoi(line);

    int windowA;

    // Now the line variable contains the text from the first line of the file.

    // Convert the first line of text to an integer and store it in the variable prev.
    // int prev = stoi(line);
    int increases = 0;
    while (getline(fin, line)) {
        windowA = a + b + c;
        // start assigning variables
        // what variables, and assign them to what?
        int converted = stoi(line);    

        // While you still have a as what it is
        // perform the operation. Now a is useless (falling off the window)
        int windowB = windowA - a + converted;
        
        if (windowA < windowB) {
            increases++;
        }

        // shift the window over by 1
        a = b;
        b = c;
        c = converted;
    }

    cout << increases << endl;

    return 0;
}
