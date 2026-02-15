#include <iostream>
using namespace std;  

class Student {
private:
    string name;
    float cgpa;

public:
    // Constructor Overloading-:   Compile Time Polymorphism
    
    //Default Constructor
    Student() {
        cout << "Constructor called\n";
    }

    //Parameterized Constructor
    Student(string n, float c) {           
        this->name = n;
        this->cgpa = c;
    } 

    //Copy Constructor
    Student(Student &s) {
        this->name = s.name;
        this->cgpa = s.cgpa;
    }

    // Member Functions
    void getPercentage() {
        cout << (cgpa * 10) << "%\n";
    }

    // Setters
    void setName(string n) {
        name = n;
    }

    void setCgpa(float c) {  
        cgpa = c;
    }

    // Getters
    string getName() {
        return name;
    }

    float getCgpa() {         
        return cgpa;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called\n";
    }

};


//Function Overloading -:   Compile Time Polymorphism
class Demo {
    public:
        void sum( int a, int b) {
            cout << a + b << endl;
        }

        void sum( int a, int b, int c) {
            cout << a + b + c << endl;
        }

};


// Operator Overloading :- Compile Time Polymorphism    (Syntax: ClassName operator OperatorName (ClassName const &obj))
class Complex {
    private:
        int real, imaginary;
    public:
        Complex(int r = 0, int i = 0) {
            real = r;
            imaginary = i;
        }

        void show() {
            cout << real << " + i" << imaginary << endl;
        }

        Complex operator + (Complex &obj) {
            int resReal = this->real + obj.real;
            int resImaginary = this->imaginary + obj.imaginary;
            return Complex(resReal, resImaginary);
        }
    
};

int main() {
    //Student s1( "Kanu", 9.40);
    //s1.setName("Kanu");
    //s1.setCgpa(9.40);
    //cout << s1.getName() << endl;   
    //cout << s1.getCgpa() << endl;
    //s1.getPercentage();

    // Demo d1;
    // d1.sum(1, 2);
    // d1.sum(1, 2, 3);

    // Complex c1(1, 2), c2(3, 4), c3;
    // c3 = c1 + c2;
    // c3.show();



    return 0;
}
