#include <iostream>
using namespace std;

/*Assignmet Questions 1-
int main() {
    int x;
    int *ptr;
    x = 7;
    ptr = &x;
    cout << *ptr;
}
*/

//------------------------------------------------------------------------------------------------------------------------

/*Assignmet Question 2-
void multiplwBy2(int &a, int &b, int &c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
    int a = 1, b = 2, c = 3;
    multiplwBy2(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
*/

//------------------------------------------------------------------------------------------------------------------------


int main() {
    int a = 10;
    int *ptr = &a; // Pointer to integer

    int**ptr2 = &ptr; // Pointer to pointer to integer

    cout << &a << "\n"; // Print address of a
     cout << "Value of a: " << a << endl;
     cout << *(&a) << endl;
     cout << "Address of a: " << ptr << endl;
     cout << "Value pointed to by ptr / Deference: " << *ptr << endl;
     cout << "Value of ptr2: " <<ptr2 << " = " << &ptr << endl;

}
