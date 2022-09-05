#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input, result;
    short size;
    cin >> size;
    for (size_t i = 0; i < size; i++) {
    cin >> input;
    if (input.size() > 10) {
        cout << input[0] << input.size() - 2 << input[input.size() - 1] << endl;

    }
    else {
        cout << input << endl;
    }
    }
    return 0;
}
