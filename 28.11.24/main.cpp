#include "ArrayValueCalculator.h"

int ArrayValueCalculator::doCalc(const string arr[4][4]) 
{
    int sum = 0;
    for (int i = 0; i < 4; ++i) 
    {
        for (int j = 0; j < 4; ++j)
        {
            try {
                sum += stoi(arr[i][j]);
            } catch (invalid_argument&) 
            {
                throw ArrayDataException(i, j);
            } catch (out_of_range&) 
            {
                throw ArrayDataException(i, j);
            }
        }
    }
    return sum;
}

