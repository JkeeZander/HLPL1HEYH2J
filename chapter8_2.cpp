#include "std_lib_facilities.h"
void swap_v(int a ,int b){
int temp;
temp = a;
a = b;
b = temp;
}

void swap_cr(const int& a, const int& b){
int temp;
temp = a;
a = b;
b = temp;

}

void swap_r(int &a, int &b){
int temp;
temp = a;
a = b;
b = temp;
}
int main(){

int x = 7;

int y = 9;

swap_r(x,y);

swap_v(x,y);

int cx = 7;

int cy = 9;

swap_v(cx,cy);

swap_cr(cx,cy);

double dx = 7.7;

double dy = 9.9;

swap_v(dx,dy);

swap_cr(dx,dy);

return 0;
}


