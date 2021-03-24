#include <iostream>
#include <cmath>
#include <string.h> //its just for memset
#include <unistd.h>
using namespace std;

class FloatsANdOther
{
    public:
        float tempFL[11];//temp floats
        int tempINT[4];//temp ints
        float S = 0;
        float D = 0;
        int l;
        float x[1760];
        float c[1760];
};

class MathBlock : FloatsANdOther
{
    public:
        void GetDONUT()
        {
         memset(c, 32, 1760);
         memset(x, 0, 7040);
         for(float j = 0; j < 6.28; j += 0.07)
         {
             for (float i = 0;i < 6.28; i += 0.02)
             {
                tempFL[0] = sin(i);

                tempFL[1] = cos(j);                        
                      
                tempFL[2] = sin(S);

                tempFL[3] = sin(j);
                
                tempFL[4] = cos(S);
                
                tempFL[5] = tempFL[1] + 2;
                
                tempFL[6] = 1 / (tempFL[0] * tempFL[5] * tempFL[2] + 
                                tempFL[3] * tempFL[4] + 5);
                  
                tempFL[7] = cos(i);
                
                tempFL[8] = cos(D);
              
                tempFL[9] = sin(D);
                
                tempFL[10] = tempFL[0] * tempFL[5] * tempFL[4] - tempFL[3]
                            * tempFL[2];
                tempINT[0] = 40 + 30 * tempFL[6] * (tempFL[7] * tempFL[5] * tempFL[8] - 
                        tempFL[10] * tempFL[9]);
                tempINT[1] = 12 + 15 * tempFL[6] * (tempFL[7] * tempFL[5] * tempFL[9] + 
                              tempFL[10] * tempFL[8]);
                tempINT[2] = tempINT[0] + 80 * tempINT[1];

                tempINT[3] = 8 * ((tempFL[3] * tempFL[2] - tempFL[0] *  tempFL[1] 
                            * tempFL[4]) * tempFL[8] - tempFL[0] * tempFL[1] * tempFL[2]
                            - tempFL[3] * tempFL[4] - tempFL[7] * tempFL[1] * tempFL[9]);
                  if ( 22 < tempINT[1] && tempINT[1] > 0 && tempINT[0] > 0 && 
                        80 > tempINT[0] && tempFL[6] > x[tempINT[2]])
                  {
                   x[tempINT[2]] = tempFL[6];
                   c[tempINT[2]] = ".,-~:;=!*#$@"[tempINT[3] > 0 ? tempINT[3] : 0];  
                  }
                }
             }
         }
        };
class Program : MathBlock, FloatsANdOther
{
int main() {
    cout << "[2J";
    for (;;) {
        GetDONUT();
        cout << "[H";
        for (int l = 0; l < 1761; l++) {
            putchar(l % 80 ? c[l] : 10);
            S += 0.00004;
            D += 0.00002;
        }
        usleep(30000);
    }
    return 0;
}
};
