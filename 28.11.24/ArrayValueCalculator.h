#pragma once
#include <iostream>
#include <exception>
using namespace std;

class ArraySizeException : public exception 
{
public:
    const char* what() const noexcept
    {
        return "Invalid array size. Expected a 4x4 array.";
    }
};

class ArrayDataException : public exception 
{
    string message;
public:
    ArrayDataException(int row, int col) 
    {
        message = "Invalid data at [" + to_string(row) + "][" + to_string(col) + "]";
    }
    const char* what() const noexcept override {
        return message.c_str();
    }
};

class ArrayValueCalculator 
{
public:
    int doCalc(const string arr[4][4]);
};

