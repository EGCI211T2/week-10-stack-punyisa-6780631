#include<iostream>
using namespace std;

#include "stack.h"

int main(int argc, char **argv){
    Stack s;

    /* s.push(5);
      s.push(1);
      s.push(7);
      s.pop();
      s.push(6);
      s.pop();*/

 /*
  Exercise 1*/
    
    int i;
    for(i=1;i<argc;i++){
        if(argv[i][0] == 'x')  s.pop(); //strcmp(argv[i], "x") == 0 for other option. Also don't forget to include <cstring>
        else s.push(atoi(argv[i]));
    }
    //this will pop the number b4 x then in the end it will clear all the remainding numbers from the back



   return 0;
}
