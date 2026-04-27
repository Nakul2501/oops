#include <iostream>
using namespace std;
template <typename t>
int search(t ar[], t k, int n) {
    for(int i = 0; i < n; i++) {
        if(ar[i] == k) {
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int k;
    cin >> k;
    int x= search(ar, k,n);
    if(x == -1)
        cout << "Element not found";
    else
        cout << x;
    return 0;
}