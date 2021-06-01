//
// Created by cxii112 on 02.06.2021.
//

#ifndef KP4181_CPP_LEAF_H
#define KP4181_CPP_LEAF_H


#include <utility>

class Leaf {
    Leaf(std::pair<int, int> value, Leaf *parent = nullptr) {
        m_value = value;
        m_parent = parent;
    }

    ~Leaf() {
        delete m_parent;
    }

public:
    std::pair<int, int> value() const;

    void value(std::pair<int, int> nValue);

    Leaf *parent();

    void parent(Leaf *nParent);

private:
    Leaf *m_parent;
    std::pair<int, int> m_value;
};


#endif //KP4181_CPP_LEAF_H
