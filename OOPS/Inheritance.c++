#include <iostream>
using namespace std;

class Animals { // Base class
public:
    void animalSound() {
        cout << "The animal makes a sound" << endl;
    }

    // Virtual function - need to re-define in the child class      // Run time Polymorphism
    virtual void Hello() {
        cout << "Parent Hello" << endl;
    }
};

class Dogs : public Animals { // Derived class
public:
    void anilmalSound() {                               // Method overriding -: Run time Polymorphism
        cout << "The dog barks" << endl;
    }

    void Hello() {
        cout << "Child Hello" << endl;
    }

    void DogColor () {
        cout << "The dog is black" << endl;
    }
};

// Multilevel Inheritance
class Puppies : public Dogs {
public:
    void puppyAthestic() {
        cout << "The puppy is kinda cute " << endl;
    }
};


int main() {
    // Animals myAnimal1;
    // Dogs myDog1;
    // Puppies myPuppies1;

    // myAnimal.animalSound() ; // Output: The animal makes a sound
    // myDog.animalSound();    // Output: The dog barks
    // myPuppies.animalSound();  // Output: The animal makes a sound

    Dogs myDog2;
    Animals *ptr;

    ptr = &myDog2;
    ptr->Hello();    // Role of virtual keyword 
    return 0;   
}