#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int FirstDigit = x / 1000;
    if (FirstDigit % 2 == 0) {
        cout << "EVEN";
    }
    else {
		cout << "ODD";
    }

    return 0;

}

