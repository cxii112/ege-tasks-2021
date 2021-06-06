//
// Created by cxii112 on 02.06.2021.
//

#ifndef KP4181_CPP_LEAF_H
#define KP4181_CPP_LEAF_H


#include <utility>

class Leaf {

public:
    explicit Leaf(std::pair<int, int> value, Leaf *parent = nullptr,
                  Leaf *lChild = nullptr, Leaf * rChild = nullptr) {
        m_value = value;
        m_parent = parent;
        m_lChild = lChild;
        m_rChild = rChild;
    }

    ~Leaf() {
        delete m_parent;
    }

    std::pair<int, int> value() const;

    void value(std::pair<int, int> nValue);

    Leaf *parent();

    void parent(Leaf *nParent);

    void lChild(Leaf *nChild);

    Leaf * lChild();

    void rChild(Leaf *nChild);

    Leaf * rChild();

private:
    Leaf *m_parent;
    Leaf *m_lChild;
    Leaf *m_rChild;
    std::pair<int, int> m_value;
};


#endif //KP4181_CPP_LEAF_H
