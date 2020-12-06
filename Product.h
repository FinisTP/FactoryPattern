#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Product {
public:
    virtual ~Product() {};
    virtual string Function() const = 0;
};

class ConcreteProductA : public Product{
public:
    string Function() const override {
        return "{We have just created a product A!}";
    }
};

class ConcreteProductB : public Product{
public:
    string Function() const override {
        return "{We have just created a product B!}";
    }
};

class ConcreteProductC : public Product{
public:
    string Function() const override {
        return "{We have just created a product C!}";
    }
};

#endif // PRODUCT_H_INCLUDED
