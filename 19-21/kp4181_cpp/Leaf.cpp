//
// Created by Brain Update on 02.06.2021.
//

#include "Leaf.h"

void Leaf::left(const int value) { m_left = value; }

int Leaf::left() const { return m_left; }

int Leaf::right() const { return m_right; }

void Leaf::right(int value) { m_right = value; }
