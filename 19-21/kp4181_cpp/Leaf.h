//
// Created by cxii112 on 02.06.2021.
//

#ifndef KP4181_CPP_LEAF_H
#define KP4181_CPP_LEAF_H


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
    int left() const;
    void left(int value);
    int right() const;
    void right(int value);

private:
    Leaf *m_parent;
    int m_right;
    int m_left;
};


#endif //KP4181_CPP_LEAF_H
