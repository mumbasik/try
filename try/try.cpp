// try.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <exception>
using namespace std;
void IsLucky(int number) {
    int num = 0;
    int temp = number;
    if (number == 0) {
        num = 0;
    }
    else {
        
        while (temp != 0) {
            num++;
            temp /= 10;
        }
    }
    if (num < 6) {
        throw "The count lower than 6" ;
    }
    if (num > 6) {
        throw exception("The count of  the  number higher than 6");
    }
}

int main()
{
    int number;
    cout << "The number: " << endl;
    cin >> number;
    try {
        
        IsLucky(number);

    }
    catch (const char* s) {
        cout << "Error: " << s << endl;
    }
    catch (const exception& a) {
        cout << "Error: " << a.what() << endl;
    }
}



