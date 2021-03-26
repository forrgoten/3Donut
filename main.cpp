#include <algorithm>
#include <cstdlib>
#define _POSIX_C_SOURCE 200809L
#include <iostream>
#include <cmath>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

char* getCmdOption(char ** begin, char ** end, const std::string & option)
{
    char ** itr = find(begin, end, option);
    if (itr != end && ++itr != end)
    {
        return *itr;
    }
    return 0;
}

bool cmdOptionExists(char** begin, char** end, const std::string& option)
{
    return std::find(begin, end, option) != end;
}


class RainBow
{
    public:
void rainbow(double freq, int i) {
	int red, green, blue;
	double pi = 3.14159;

	red = sin(freq*i + 0) * 127 + 128;
	green = sin(freq*i + 2*pi/3) * 127 + 128;
	blue = sin(freq*i + 4*pi/3) * 127 + 128;

	printf("[38;2;%02d;%02d;%02dm", red, green, blue);
	// TODO: Replace to sprintf?
    }    
};

class FloatsAndInts
{   
    public:
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
        RainBow rnw;
        void PutRainbow()
        {
            double freq = 0.1;
      for (k = 0; k < 1761; k++)
      {
               rnw.rainbow(freq, k);
               putchar(k % 80 ? b[k] : 10);
               A += 0.00004;
               B += 0.00002;
      }
        }

void PutWhite()
{
      for (k = 0; k < 1761; k++)
      {
                putchar(k % 80 ? b[k] : 10);
                A += 0.00004;
                B += 0.00002;
      }
}
void GetDonut(bool RainBOW)
{
    printf("[2J");
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
    printf("[H");
    RainBow rnw;
    double freq = 0.1;
    if (RainBOW)
    {
        PutRainbow();
    }
    else{
    PutWhite();
    }
         usleep(30000);
}
}
};

int main(int argc, char * argv[]){
    Donut don;
    bool RainBOW = false;
    if(cmdOptionExists(argv, argv+argc, "-h")){
        cout << "Usage: donut [FLAGS]\nDisplay an animated donut\nFlags:\n1.-h display this screen\n2.-r display a rainbow donut" << endl;
        exit(0);
 }
    if(cmdOptionExists(argv, argv+argc, "-r"))
            {
            RainBOW = true;
            }
    don.GetDonut(RainBOW);
    return 0;//just have fun with classes
}

