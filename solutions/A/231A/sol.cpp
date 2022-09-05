#include <iostream>
#include <string>

using namespace std;

int main()
{
    int task, result = 0;
    cin >> task;
    bool input[3];
        for (size_t i = 0; i < task; i++) {
            cin >> input[0] >> input[1] >> input[2];
            short buff = 0;
            for (short i = 0; i < 3; i++) {
                buff+=input[i];

                if (buff > 1) {
                    result++;
                    buff = 0;
                }
            }
        }
    cout << result;
    return 0;
}
