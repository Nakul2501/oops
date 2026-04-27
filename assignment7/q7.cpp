#include <iostream>
using namespace std;
class matrix{
    int a[2][2];
    public:
    matrix(){
        cout << "Enter elements: ";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin >> a[i][j];
            }
        }
    }
    friend matrix operator*(matrix m1,matrix m2);
    void show(){
        cout << "Result: " << endl;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};
matrix operator*(matrix m1,matrix m2){
    matrix m;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            m.a[i][j] = 0;
            for(int k=0;k<2;k++){
                m.a[i][j] += m1.a[i][k] * m2.a[k][j];
            }
        }
    }
    return m;
}
int main(){
    matrix m1, m2;
    matrix m3 = m1 * m2;
    m3.show();
    return 0;
}