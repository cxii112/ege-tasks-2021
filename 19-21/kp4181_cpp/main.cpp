#include <iostream>
#include <iomanip>
#include "Leaf.h"

int main() {
    //        ( 0, 0)
//    ( 0, 0)         ( 0, 0)
//( 0, 0) ( 0, 0) ( 0, 0) ( 0, 0)
    Leaf *root = new Leaf(std::pair<int, int>(0, 0));

    Leaf *l1 = new Leaf(std::pair<int, int>(1,0), root);
    Leaf *l2 = new Leaf(std::pair<int, int>(0,1), root);

    std::cout << std::setfill(' ') << std::setw(5) << '(';
    std::cout << std::setw(2) << (*root).value().first;
    std::cout << std::setw(1) << ',';
    std::cout << std::setw(2) << (*root).value().second;
    std::cout << std::setw(1) << ')';
    return 0;
}
