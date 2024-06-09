#include <iostream>


int main()
{
    using namespace std;
    const int COUNT = 200;

    for (int i = 1; i <= COUNT; i++) {
        int j = i;
        int count = 0;
        for (j; j >= 1;) {
            if (j == i or j==1) {
                count++;
                j--;
                continue;
            }
            int b = i % j;
            j--;
            if (b == 0) {
                continue;
            }
            if (b != 0) {
                count++;
            }

            
        }
        if (count == (i)) {
            cout << i << endl;
        }
    }

}

