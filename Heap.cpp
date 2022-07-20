#include <iostream>

#include "cMaxHeap.h"

#define MAX 10
  
// ***********************************************
// ***********************************************
// ***********************************************

int main(int argv, char** argc) {
	
cMaxHeap mh(MAX);

int n;

  srand ( time(NULL) );

  std::cout << " Entrada => [ ";

  for (unsigned int i = 0 ; i < MAX ; i++ ) {

    n = rand() % 100;
    std::cout <<  n << " , ";

    if (!mh.insertHeap(n)) {
      std::cout << "ERROR : insert Heap " << n << std::endl;
      break;
      }
    }
  std::cout << " ] " << std::endl;

  std::cout << "Saida => [ ";

  while ( mh.removeHeap(n) ) 
    std::cout <<  n << " , ";
    
  std::cout << " ] " << std::endl;

  return 0;
}

