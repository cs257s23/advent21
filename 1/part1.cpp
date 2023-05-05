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

    // Now the line variable contains the text from the first line of the file.

    // Convert the first line of text to an integer and store it in the variable prev.
    int prev = stoi(line);

    int increases = 0;
    while (getline(fin, line)) {
        int converted = stoi(line);
        if (converted > prev) {
            increases++;
        }
        prev = converted;
    }

    cout << increases << endl;

    return 0;
}
