#ifndef FACTORY_H_INCLUDED
#define FACTORY_H_INCLUDED

#include "Product.h"

class Creator{
public:
    virtual ~Creator() {}
    virtual Product* FactoryMethod() const = 0;

    string BusinessLogic() const {
        Product* product = this->FactoryMethod();
        string result = "Message from creator: " + product->Function();
        delete product;
        return result;
    }
};

class ConcreteCreatorA : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductA();
    }
};

class ConcreteCreatorB : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductB();
    }
};

class ConcreteCreatorC : public Creator {
public:
    Product* FactoryMethod() const override {
        return new ConcreteProductC();
    }
};


#endif // FACTORY_H_INCLUDED
