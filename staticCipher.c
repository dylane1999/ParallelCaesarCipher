
#include <stdio.h>
#include <math.h>
#include <omp.h>
#include <string.h>
#include <time.h>

//clang -Xpreprocessor -fopenmp -lomp staticCipher.c

int main()
{

  double start_time = omp_get_wtime();
  clock_t t;
  t = clock();


  char ch_arr[200][70] = {
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "dyladndyladndfgdfdfsgsdfgsdfg",
      "zdyladndyladndfgdfdfsgsdfgsdfg",
  };
  int rows = sizeof(ch_arr) / sizeof(ch_arr[0]);

  for (size_t passwordIndex = 0; passwordIndex < rows; passwordIndex++)
  {

    char message[70];
    strcpy(message, ch_arr[passwordIndex]);
    char ch;
    int i;
    int key = 4;
    int length = strlen(message);
    int possibleKey;
    char decryptedMessage[70];

    for (i = 0; i < length; ++i) // loop through the string
    {
      ch = message[i]; //each char in message

      if (ch >= 'a' && ch <= 'z') // between a-z
      {
        ch = ch + key; //key is added to ASCII Value

        if (ch > 'z') //once the key is added if char is > z
        {
          ch = ch - 'z' + 'a' - 1; //set to n (key) spaces forward from A
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

    for (possibleKey = 1; possibleKey < 27; ++possibleKey)
    {
      for (i = 0; i < length; ++i)
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
  }

  //printf("Encrypted message: %s\n", message);

  //printf("Encrypted message: %s\n", message);

  t = clock() - t;
  double processorTime = ((double)t) / CLOCKS_PER_SEC; // calculate the elapsed time
  printf("Processor Time: %f\n", processorTime);
  
  double totalRunTime = omp_get_wtime() - start_time;
  printf("Total Run Time: %f\n", totalRunTime);

  return 0;
}
//0.000822
//0.001127
//0.000973
