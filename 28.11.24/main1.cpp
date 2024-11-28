#include "ArrayValueCalculator.h"

int main() {
    ArrayValueCalculator calc;
    string validArray[4][4] = {
        {"1", "2", "3", "4"},
        {"5", "6", "7", "8"},
        {"9", "10", "11", "12"},
        {"13", "14", "15", "16"}
    };

    string invalidDataArray[4][4] = {
        {"1", "2", "3", "X"},
        {"5", "6", "Y", "8"},
        {"9", "Z", "11", "12"},
        {"13", "14", "15", "16"}
    };

    try {
        int result = calc.doCalc(validArray);
        cout << "Sum: " << result << endl;
    } catch (const ArraySizeException& e) {
        cout << "ArraySizeException: " << e.what() << endl;
    } catch (const ArrayDataException& e) {
        cout << "ArrayDataException: " << e.what() << endl;
    }

    try {
        int result = calc.doCalc(invalidDataArray);
        cout << "Sum: " << result << endl;
    } catch (const ArraySizeException& e) {
        cout << "ArraySizeException: " << e.what() << endl;
    } catch (const ArrayDataException& e) {
        cout << "ArrayDataException: " << e.what() << endl;
    }

    return 0;
}

