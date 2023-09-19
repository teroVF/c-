#include <iostream>

class A {
public:
    void foo() {
        std::cout << "A::foo()" << std::endl;
    }
};

class B : public virtual A {
public:
    // B herda de A, então A::foo() está disponível em B.
};

class C : public virtual A {
public:
    // C também herda de A.
};

class D : public B, public C {
public:
    // D herda de ambas B e C, que, por sua vez, herdam de A.
};

int main() {
    D d;
    d.foo(); // Ambiguidade! Qual A::foo() deve ser chamado?
    
    return 0;
}