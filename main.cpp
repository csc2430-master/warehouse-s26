#include <iostream>

#include "product.h"
#include "warehouse.h"

int main() {
    Warehouse w;
    std::cout << w.GetNumberOfProducts() << " Expected: 0\n";
/* \
    bool AddProduct(Product* newProduct);
    bool RemoveProduct(unsigned int id);
    std::string ToString()const;
    std::ostream& Write(std::ostream& output)const;
    std::istream& Read(std::istream input);
    Product* Find(unsigned int id)const;
    unsigned int GetNumberOfProducts()const;
*/
    bool flag;
    flag = w.AddProduct(new Product(44, "Soap", 2.5));
    if (flag) {
        std::cout << "Added Correctly\n";
    }else {
        std::cerr << "Did not add correctly\n";
    }
    flag = w.AddProduct(new Product(33, "Shampoo", 12.5));
    if (flag) {
        std::cout << "Added Correctly\n";
    }else {
        std::cerr << "Did not add correctly\n";
    }
    flag = w.AddProduct(new Product(74, "Toothpaste", 1.5));
    if (flag) {
        std::cout << "Added Correctly\n";
    }else {
        std::cerr << "Did not add correctly\n";
    }
    flag = w.AddProduct(new Product(11, "Lice killer", 5));
    if (flag) {
        std::cout << "Added Correctly\n";
    }else {
        std::cerr << "Did not add correctly\n";
    }
    flag = w.AddProduct(new Product(99, "Comb", 2.1));
    if (flag) {
        std::cout << "Added Correctly\n";
    }else {
        std::cerr << "Did not add correctly\n";
    }
    Product* p = new Product(99, "Not", 0.11);
    flag = w.AddProduct(p);
    if (!flag) {
        std::cout << "Not Added Correctly\n";
    }else {
        std::cerr << "Something is wrong\n";
    }
    delete p;
    std::cout << w.GetNumberOfProducts() << " Expected: 5\n";

    std::cout << w.ToString() << std::endl;
    unsigned int ids[] = {44, 33,74, 11, 99, 68};
    for (size_t i=0; i<6; i++) {
        Product* p = w.Find(ids[i]);
        if (p != nullptr) {
            std::cout << "Found it! " << p->ToString() << std::endl;
        }else {
            std::cout << "Didnt find it " << ids[i] << std::endl;
        }
    }
    flag = w.RemoveProduct(68);
    if (!flag)
        std::cout << "Didnt remove\n";
    else {
        std::cerr << "Should not have removed\n";
    }
    flag = w.RemoveProduct(44);
    if (flag)
        std::cout << "It removed\n";
    else {
        std::cerr << "Should have removed\n";
    }
    std::cout << w.ToString() << std::endl;

    return 0;
}