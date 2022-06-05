#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    cin >> k;
    if (k < 1) {
        cout << 0 << " " << 0;
        return 0;
    }
    int* array = new int[k];

for (int i = 0; i < k; i++) {
        cin >> array[i];
    }
    int num = array[0];
    int count = 1;
    int start = 0;
    int end = 0;
    int maxstart = 0;
    int maxend = 0;

    for (int i = 1; i < k; i++) {
        end = i;
        if (num == array[i]) {
            count++;
            if (count == 3) {
                start = i - 1;
                count--;
            }
        }
        else {
            num = array[i];
            count = 1;
        }

        if ((end - start) > (maxend - maxstart)) {
            maxstart = start;
            maxend = end;
        }
    }
    cout << maxstart + 1 << " " << maxend + 1;
}