//
// Created by cxii112 on 02.06.2021.
//

#include "Leaf.h"

std::pair<int, int> Leaf::value() const {
    return m_value;
}

void Leaf::value(std::pair<int, int> nValue) {
    m_value = nValue;
}

Leaf *Leaf::parent() {
    return m_parent;
}

void Leaf::parent(Leaf *nParent) {
    m_parent = nParent;
}
