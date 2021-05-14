// AT3528 [ABC073A] September 9
#include <iostream>
#include <cstring>
using namespace std;

string a;

int main(int argc, const char *argv[]) {
    cin >> a;
    if (a[0] == '9' or a[1] == '9') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
