
#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>

class vect2
{
private:
    int x;
    int y;

public:
    // Orthodox Canonical Form
    vect2();
    vect2(int n1, int n2);
    vect2(const vect2 &other);
    vect2 &operator=(const vect2 &other);
    ~vect2();

    // インデックスアクセス
    int &operator[](int index);
    int operator[](int index) const;

    // 単項演算子
    vect2 operator-() const;

    // 二項演算子
    vect2 operator+(const vect2 &other) const;
    vect2 operator-(const vect2 &other) const;
    vect2 operator*(int n) const;

    // 前置・後置
    vect2 &operator++();
    vect2 operator++(int);
    vect2 &operator--();
    vect2 operator--(int);

    // 複合代入演算子
    vect2 &operator+=(const vect2 &other);
    vect2 &operator-=(const vect2 &other);
    vect2 &operator*=(int n);

    // 比較演算子
    bool operator==(const vect2 &other) const;
    bool operator!=(const vect2 &other) const;
};

// 左側がintの場合の乗算
vect2 operator*(int n, const vect2 &other);
std::ostream &operator<<(std::ostream &os, const vect2 &obj);

#endif
