//
// Created by Arias Arevalo, Carlos on 5/6/26.
//

#ifndef WAREHOUSE_S26_PRODUCT_H
#define WAREHOUSE_S26_PRODUCT_H

#include <string>
#include <iostream>

class Product {
    unsigned int _id;
    std::string _name;
    float _price;
    unsigned int _quantity;
public:
    Product(unsigned int id, const std::string& name, float price, unsigned int quantity = 0);
    std::string GetName()const;
    unsigned int GetId()const;
    float GetPrice()const;
    void SetQuantity(unsigned int quantity);
    unsigned int GetQuantity()const;
    std::string ToString()const;
    void Buy(unsigned int quantity);
    unsigned int Sell(unsigned int quantity);
};


#endif //WAREHOUSE_S26_PRODUCT_H