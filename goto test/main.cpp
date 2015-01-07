#include <iostream>

using namespace std;
int c = 0;
int main()
{

    stop:
        cout << "Hello again 'stop'" << endl;
    c++;
    cout << "Hello world!" << c << endl;
    if (c < 100){
        goto stop;
    }
    return 0;
}
