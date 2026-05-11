//
// Created by Arias Arevalo, Carlos on 5/6/26.
//

#include "warehouse.h"
#include <sstream>

Warehouse::Warehouse(): _numberOfProducts(0) {

}

Warehouse::~Warehouse() {
    for (size_t i = 0; i <  _numberOfProducts; i++)
        delete _products[i];
}

bool Warehouse::AddProduct(Product *newProduct) {
    if (_numberOfProducts == MAX)
        return false;
    Product* p = Find(newProduct->GetId());
    if (p)
        return false;
    _products[_numberOfProducts] = newProduct;
    _numberOfProducts++;
    return true;
}

bool Warehouse::RemoveProduct(unsigned int id) {
    int pos = -1;
    for (size_t i=0; i < _numberOfProducts; i++) {
        if (_products[i]->GetId() == id) {
            pos = i;
            break;
        }
    }
    if (pos == -1)
        return false;
    Product* p = _products[pos];
    for (size_t i = pos; i < _numberOfProducts - 1; i++)
        _products[i] = _products[i + 1];
    delete p;
    _numberOfProducts--;
    return true;
}

std::string Warehouse::ToString() const {
    std::stringstream ss;
    for (size_t i = 0; i < _numberOfProducts; ++i) {
        if (i == _numberOfProducts - 1) {
            ss << _products[i]->ToString();
        }else {
            ss << _products[i]->ToString() << ", ";
        }
    }
    return ss.str();
}

std::ostream & Warehouse::Write(std::ostream &output) const {
    for (size_t i = 0; i < _numberOfProducts; ++i) {
        output << _products[i]->ToString() << "\n";
    }
    return output;
}

std::istream & Warehouse::Read(std::istream input) {
    return input;
}

Product * Warehouse::Find(unsigned int id) const {
    for (size_t i = 0; i < _numberOfProducts; ++i) {
        if (_products[i]->GetId() == id)
            return _products[i];
    }
    return nullptr;
}

unsigned int Warehouse::GetNumberOfProducts() const {
    return _numberOfProducts;
}
