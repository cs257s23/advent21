#include <iostream>
#include <fstream>
#include <bitset>

using namespace std;

int main() {
    std::bitset<5> gamma("00000");
    for (int i = 4; i >= 0; i--) {
        int ones {0};
        int zeroes {0};

        ifstream fin("input.txt");
        string line;

        while (getline(fin, line)) {
            std::bitset<5> bits(line);

            if (bits.test(i)) {
                ones++;
            } else {
                zeroes++;
            }
        }

        if (ones > zeroes) {
            gamma.set(i);
        } else if (zeroes > ones) {
            gamma.reset(i);
        }

    }

    cout << gamma.to_ulong() << endl;

    return 0;
}
