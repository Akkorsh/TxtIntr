#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    
    int getopt(int argc, char * const argv[], const char *optstring);
    int opt;
    
    if(argc == 1) { 
        cout << "Степеной калькулятор, который вычисляет числа в степени" << endl;
        cout << "Для опции -o есть два значения ex (exp в степени) и xy (x в степени y)" << endl;
        cout << "Пример ./имя файла -o ex 5" << endl;
        return 0;
    }
    double x;
    double y;
    while((opt = getopt(argc, argv, "o:")) != -1) { 
        switch(opt) {
             case 'o':
                string type = string(optarg);
                if (type == "ex"){
                    x = atof(argv[3]);
                    double res = exp(x);
                    cout << "Возведение exp в степень " << res << endl;
                break;
                }
                if (type == "xy"){
                    x = atof(argv[3]);
                    y = atof(argv[4]);
                    double res = pow(x,y);
                    cout << "Возведение в степень " << res << endl;
                break;
                }
        }
    }
    return 0;
}
