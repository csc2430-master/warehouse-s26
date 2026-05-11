#include <iostream>

#include "product.h"
#include "warehouse.h"

int main() {

    Product* p[5];

    Warehouse a;
    Product* p = new Product("a", 1, 1, 1)
    flag = a.AddProduct(p);
    if (!flag)
        delete p;
    return 0;
}