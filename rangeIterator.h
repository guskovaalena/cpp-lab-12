//
// Created by Alena Guskova on 06.02.2024.
//

#ifndef CPP_LAB_12_RANGEITERATOR_H
#define CPP_LAB_12_RANGEITERATOR_H


template <typename T, typename Iterator>
class rangeIterator {

private:
    Iterator cur;
    Iterator end;

public:
    rangeIterator(Iterator cur, Iterator end){
        this->cur = cur;
        this->end = end;
    }

    T& operator*(){
        return *cur;
    }

    rangeIterator& operator++(){
        ++cur;
        return *this;
    }

    rangeIterator& operator--(){
        --cur;
        return *this;
    }

    bool operator!=(const rangeIterator& other) const{
        return cur != other.cur;
    }
};


#endif //CPP_LAB_12_RANGEITERATOR_H
