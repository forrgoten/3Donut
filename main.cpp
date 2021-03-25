#include <iostream>
#include <cmath>
#include <string.h>
#include <unistd.h>

using namespace std;

class FloatsAndInts
{   public:
        float A = 0, B = 0;
        float i, j;
        int k;
        float z[1760];
        char b[1760];
        float c,d,e,f,g,h,D,l,m,n,t;
        int x,y,o,N;
};  

class Donut :  FloatsAndInts
{
    public:
void GetDonut()
{
    cout << "^[[2J";
    while(true)
    {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
         for (j = 0; j < 6.28; j += 0.07) {
              for (i = 0; i < 6.28; i += 0.02) {
                  c = sin(i);
                  d = cos(j);
                  e = sin(A);
                  f = sin(j);
                  g = cos(A);
                  h = d + 2; 
                  D = 1 / (c * h * e + f * g + 5);
                  l = cos(i); 
                  m = cos(B);
                  n = sin(B);
                  t = c * h * g - f * e;
                  x = 40 + 30 * D * (l * h * m - t * n);
                  y = 12 + 15 * D * (l * h * n + t * m);
                  o = x + 80 * y;
                  N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                  if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                     z[o] = D;
                     b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
              }
         }     
    }
    cout << "^[[H";
    for (k = 0; k < 1761; k++) {
              putchar(k % 80 ? b[k] : 10);
              A += 0.00004;
              B += 0.00002;
         }
         usleep(30000);
}
}
};

int main(){
    Donut don;
    don.GetDonut();
    return 0;//just have fun with classes
}

