#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data; 
    int size;
public:
    Array(int n);          
    ~Array();          
    void remove(int index); 
    int getSize() const;    
    int get(int index) const; //возращение значения элементов
};

#endif
