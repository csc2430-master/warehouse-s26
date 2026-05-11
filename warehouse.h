//
// Created by Arias Arevalo, Carlos on 5/6/26.
//

#ifndef WAREHOUSE_S26_WAREHOUSE_H
#define WAREHOUSE_S26_WAREHOUSE_H

#include "product.h"

const int MAX = 5;

class Warehouse {
    Product* _products[MAX];
    unsigned int _numberOfProducts;

public:
    Warehouse();
    ~Warehouse();
    Warehouse(const Warehouse& w) = delete;
    const Warehouse& operator=(const Warehouse& rhs) = delete;
    bool AddProduct(Product* newProduct);
    bool RemoveProduct(unsigned int id);
    std::string ToString()const;
    std::ostream& Write(std::ostream& output)const;
    std::istream& Read(std::istream input);
    Product* Find(unsigned int id)const;
    unsigned int GetNumberOfProducts()const;

};


#endif //WAREHOUSE_S26_WAREHOUSE_H