#include <algorithm>
#include <iostream>
#include <string>

class NephewInterface {
public:
    virtual std::string getName() const = 0;
    virtual unsigned getAge() const = 0;
};

class Nephew : public NephewInterface {
private:
    std::string _name;
    unsigned _age;
public:
    Nephew(const std::string& name, unsigned age);
    ~Nephew();
    std::string getName() const override;
    unsigned getAge() const override;
};

Nephew::Nephew(const std::string& name, unsigned age): _name(name), _age(age) {}

Nephew::~Nephew() { _name.clear(); }

std::string Nephew::getName() const { return _name; }

unsigned Nephew::getAge() const { return _age; }

namespace NephewComparator {
    bool byAge(const Nephew& lhs, const Nephew& rhs) {
        return lhs.getAge() < rhs.getAge();
    }
}

int main() {
    unsigned H, Z, L;
    std::cin >> H >> Z >> L;
    Nephew nephews[] = {
        Nephew("huguinho", H),
        Nephew("zezinho", Z),
        Nephew("luisinho", L)
    };
    std::sort(nephews, nephews + 3, NephewComparator::byAge);
    std::cout << nephews[1].getName() << std::endl;
    return 0;
}
