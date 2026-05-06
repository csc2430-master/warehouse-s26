//
// Created by Arias Arevalo, Carlos on 5/6/26.
//

#include "product.h"

#include <sstream>

Product::Product(unsigned int id, const std::string &name, float price, unsigned int quantity)
    :_id(id), _name(name), _price(price < 0 ? 0 : price), _quantity(quantity){

}

std::string Product::GetName() const {
    return _name;
}

unsigned int Product::GetId() const {
    return _id;
}

float Product::GetPrice() const {
    return _price;
}

void Product::SetQuantity(unsigned int quantity) {
    _quantity = quantity;
}

unsigned int Product::GetQuantity() const {
    return _quantity;
}

std::string Product::ToString() const {
    std::stringstream ss;
    ss << "ID: " << _id
       << " Name: " << _name
       << " Price: " << _price
       << " Quantity: " << _quantity;
    return ss.str();
}

void Product::Buy(unsigned int quantity) {
    _quantity += quantity;
}

unsigned int Product::Sell(unsigned int quantity) {
    if (quantity > _quantity) {
        unsigned actualQuantity = _quantity;
        _quantity = 0;
        return actualQuantity;
    }else {
        _quantity -= quantity;
        return quantity;
    }
}
