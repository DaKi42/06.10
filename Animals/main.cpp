#include"Mylibrary.h"
/*дз:
* 1.Создать класс Попугай на основе Animal, реализовать нужные интерфейсы
* 2. Создать класс Самолет, и реализовать нужный интерфейс.
* 3. Создать функцию, который может работать и с объектом класса самолет, и с объектом класса попугай!!

*/

class Ship :public iSwim {
public:
    virtual void Swim() {
        cout << "Корабли плывут по воде.\n";
    }
};

class Airplane : public iFly {
public:
    virtual void Fly() { 
        cout << "Самолеты летают в небе.\n";
    }
};

void Func(iFly* ptr) {
    ptr->Fly();
}

void Func(iSwim* ptr) {
    ptr->Swim();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Pinguin obj("Антарктический пингвин", 150, "Антарктика");
    Parrot obj1("Канарейка", 10, "Канарские острова");

    Ship sh;
    Func(&obj);
    Func(&sh);

    Airplane air;
    Func(&obj1);
    Func(&air);
}