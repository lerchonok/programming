#include<iostream>

template <typename T>
class isOdd{
public:
    bool operator()(T value){
        return value % 2 == 0;
    }
};

template <typename T>
class isBiggerThan10{
public:
    bool operator() (T value){
        return value > 10;
    }
};


template <typename T>
class isOrdered{
private:
    bool isASC;
public:
    isOrdered(): isASC(true){}

    void changeOrder(){
        isASC = !isASC;
    }

    bool operator() (T value1, T value2){
        if(isASC){
            return value1 < value2;
        }
        else return value1 > value2;
    }
};


template <typename ForwardIterator, typename Predicate>
bool noneOf(ForwardIterator begin, ForwardIterator end, Predicate predicate){
    for(;begin != end; begin++){
        if(predicate(*begin)){
            return false;
        }
    }
    return true;
}

template<typename ForwardIterator, typename Predicate>
bool isSorted(ForwardIterator begin, ForwardIterator end, Predicate predicate) {
    predicate.changeOrder();
    end--;
    auto newBegin = begin++;
    for(;newBegin != end; begin++, newBegin++){
        if(!predicate(*newBegin, *begin)){
            return false;
        }
    }
    return true;
}

template <typename BackwardIterator, typename T>
BackwardIterator findBackward(BackwardIterator begin, BackwardIterator end, T key){
    for(;begin != end; begin++){
        if(*begin == key){
            return begin;
        }
    }
    return end;
}
