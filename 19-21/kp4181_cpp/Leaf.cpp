//
// Created by Brain Update on 02.06.2021.
//

#include "Leaf.h"

void Leaf::first(const int value) { m_value.first = value; }

int Leaf::first() const { return m_value.first; }

int Leaf::second() const { return m_value.second; }

void Leaf::second(int value) { m_value.second = value; }
