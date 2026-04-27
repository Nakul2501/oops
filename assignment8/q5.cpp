#include <iostream>
using namespace std;
template <typename t>
void process(t a) {
    cout << a << endl;
}
template <typename t>
void process(t a, t b) {
    cout <<a << " and " << b << endl;
}
template <typename t, typename u>
void process(t a, u b) {
    cout << a << " and " << b << endl;
}
int main() {
    process(6.9);
    process(6, 89);
    process('a', 5.5);
    return 0;
}