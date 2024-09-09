#include <iostream>
using namespace std;

class Base {
private:
    int secret;      

protected:
    int protect;     

public:
    int access;      
    
    Base() : secret(0), protect(0), access(0) {}
};

class Derived_Private : private Base {
public:
    void show() {
    cout << "Derived_Private: access = " << access << endl;
    }
};

class Derived_Protected : protected Base {
public:
    void show() {
    cout << "Derived_Protected: access = " << access << endl;
    }
};

class Derived_Public : public Base {
public:
    void show() {
    cout << "Derived_Public: secret = " << secret << ", protect = " << protect
                  << ", access = " << access << endl;
    }
};

int main() {
    Derived_Private dp;
    dp.show();  
    
    Derived_Protected dprot;
    dprot.show();
    
    Derived_Public dpub;
    dpub.show();  
    
    return 0;
}

