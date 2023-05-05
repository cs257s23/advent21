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

    while (getline(fin, line)) {
        cout << line << endl;
    }

    return 0;
}
