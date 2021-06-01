//
// Created by cxii112 on 02.06.2021.
//

#ifndef KP4181_CPP_LEAF_H
#define KP4181_CPP_LEAF_H


#include <utility>

class Leaf {
    Leaf(int left, int right, Leaf *parent = nullptr) {
        m_left = left;
        m_right = right;
        m_parent = parent;
    }
    ~Leaf() {
        delete m_parent;
    }

public:
    int first() const;
    void first(int value);
    int second() const;
    void second(int value);

private:
    Leaf *m_parent;
    std::pair<int, int> m_value;
};


#endif //KP4181_CPP_LEAF_H
