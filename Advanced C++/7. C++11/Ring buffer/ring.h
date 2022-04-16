#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template <class T>
class ring {
private:
    int m_pos;
    int m_size;
    T* m_values;

public:
    class iterator;

public:
    ring(int size): m_pos(0), m_size(size), m_values(NULL) {
        m_values = new T[size];
    }
    ~ring() {
        delete [] m_values;
    }
    int size() {
        return m_size;
    }
    void add(T value) {
        m_values[m_pos] = value; // or use `m_values[m_pos++] = value;`
        m_pos++;
        if (m_pos == m_size) {
            m_pos = 0;
        }
    }
    T& get(int pos) {
        return m_values[pos];
    }
    iterator begin() {
        return iterator(0, *this);
    }
    iterator end() {
        return iterator(m_size, *this);
    }

};

template <class T>
class ring<T>::iterator {
private:
    int m_pos;
    ring& m_ring;

public:
    iterator(int pos, ring& ring): m_pos(pos), m_ring(ring) {}
    iterator& operator++(int) { // the post-fix case needs a parameter
    // to distringuish it from the pre-fix case, and that is useless otherwise
    m_pos++;
    return *this;
    }
    iterator& operator++() { // the pre-fix case does not need parameters at all
    m_pos++;
    return *this;
    }
    T& operator*() {
        return m_ring.get(m_pos);
    }
    bool operator!=(const iterator& other) const {
        return m_pos != other.m_pos;
    }
    
};

#endif