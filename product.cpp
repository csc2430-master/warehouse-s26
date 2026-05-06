//
// Created by Arias Arevalo, Carlos on 5/6/26.
//

#include "product.h"

Product::Product(unsigned int id, const std::string &name, float price, unsigned int quantity)
    :_id(id), _name(name), _quantity(quantity){
    if (price < 0)
        _price = 0;
    else
        _price = price;
}

std::string Product::GetName() const {
}

unsigned int Product::GetId() const {
}

float Product::GetPrice() const {
}

void Product::SetQuantity(unsigned int quantity) {
}

unsigned int Product::GetQuantity() const {
}

std::string Product::ToString() const {
}

void Product::Buy(unsigned int quantity) {
}

unsigned int Product::Sell(unsigned int quantity) {
}
