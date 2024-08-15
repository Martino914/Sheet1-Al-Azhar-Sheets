
#include <iostream>

using namespace std;

void SortSides(int& n1, int& n2, int& n3) {
    int temp;

    if (n1 > n2) {
        if (n3 > n1) {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
    }
    else {
        if (n2 > n3) {
            temp = n1;
            n1 = n2;
            n2 = temp;
        }
        else {
            temp = n1;
            n1 = n3;
            n3 = temp;
        }
    }
}

bool IsPossibleTriangle(int a, int b, int c) {
    if (a < (b + c)) {
        return true;
    }
    else {
        return false;
    }
}

int CalcSteps(int a, int b, int c) {
    bool flag = IsPossibleTriangle(a, b, c);

    if (flag) {
        return 0;
    }
    else {
        return (a - (b + c) + 1);
    }
}



int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    SortSides(a, b, c);
    cout << CalcSteps(a, b, c) << endl;

}
