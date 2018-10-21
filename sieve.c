#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

long sieve(long target){
  long length = (long)(target * log(target) * 1.2);
  char *list = malloc(length);

  for(int x=3; x<length; x+=2){
    list[x] = 'I';
  }
  for(int x=0; x<length; x+=2){
    list[x] = 'C';
  }
  list[1] = 'C';
  list[2] = 'P';

  int count_prime = 1;
  int i=3;
  while(count_prime!=target && i<length){
    if (list[i] == 'I'){
      count_prime++;
      list[i] = 'P';
      for (int ii=2*i; ii<length; ii+=i){
        list[ii] = 'C';
      }
    }
    i+=2;
  }
  return i-2;
}
