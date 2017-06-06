/*6.39：说明在下面的每组声明中第二条声明语句是何含义。如果有非法的声明，请指出来。

(a）. int calc(int,int);
      int calc(const int, const int);

(b). int get();
   double get();

(c). int *reset(int *);
   double *reset(double *);
   */

#include <iostream>

int main() {
    int calc(int,int);
    int calc(const int, const int);

    int get();
    double get();

    int *reset(int *);
    double *reset(double *);
    
    return 0;
}