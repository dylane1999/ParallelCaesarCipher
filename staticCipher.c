
#include <stdio.h>
#include <math.h>
#include <omp.h>
#include <string.h>

//clang -Xpreprocessor -fopenmp -lomp staticCipher.c

/*
 * This program computes pi as
 * \pi = 4 arctan(1)
 *     = 4 \int _0 ^1 \frac{1} {1 + x^2} dx
 */
int main()
{

  double start_time = omp_get_wtime();

  // #pragma omp parallel for shared(NSTEPS, dx) private(x) reduction(+:pi)
  //   for (i = 0; i < NSTEPS; i++)
  //   {
  //     x = (i + 0.5) * dx;
  //     pi += 1.0 / (1.0 + x * x);
  //   }

  char message[] = "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4";
  char ch_arr[33][70] = {
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                         "dyladn4#*W&*gnijhfgkjiju4578s8uin45tiuy8bzHJGFHJKBhus4",
                      
                     };
  char ch;
  int i;
  int key = 4;
  int length = strlen(message);
  int possibleKey;
  char decryptedMessage[1000];

//#pragma omp parallel for schedule(static, 256) //shared(i) private(x) reduction(+:pi)
  for (i = 0; i < length; ++i)                 // loop through the string
  {
    ch = message[i]; //each char in message

    if (ch >= 'a' && ch <= 'z') // between a-z
    {
      ch = ch + key; //key is added to ASCII Value

      if (ch > 'z') //once the key is added if char is > z
      {
        ch = ch - 'z' + 'a' - 1; //set to a
      }

      message[i] = ch;
    }
    else if (ch >= 'A' && ch <= 'Z') //same thing for capital letters
    {
      ch = ch + key;

      if (ch > 'Z')
      {
        ch = ch - 'Z' + 'A' - 1;
      }

      message[i] = ch;
    }
  }

  //printf("Encrypted message: %s\n", message);

#pragma omp parallel for shared(message) private(possibleKey, i) //schedule(static, 256) //shared(i) private(x) reduction(+:pi)
  for (possibleKey = 1; possibleKey < 27; ++possibleKey)
  {
    for (i = 0; message[i] != '\0'; ++i)
    {
      ch = message[i];

      if (ch >= 'a' && ch <= 'z')
      {
        ch = ch - possibleKey;

        if (ch < 'a')
        {
          ch = ch + 'z' - 'a' + 1;
        }

        decryptedMessage[i] = ch;
      }
      else if (ch >= 'A' && ch <= 'Z')
      {
        ch = ch - possibleKey;

        if (ch < 'A')
        {
          ch = ch + 'Z' - 'A' + 1;
        }

        decryptedMessage[i] = ch;
      }
    }
   // printf("Decrypted message: %s\n", decryptedMessage);
  }

  //printf("Encrypted message: %s\n", message);

  double run_time = omp_get_wtime() - start_time;
  printf("run time is %f\n", run_time);

  return 0;
}
//0.000822
//0.001127
//0.000973


