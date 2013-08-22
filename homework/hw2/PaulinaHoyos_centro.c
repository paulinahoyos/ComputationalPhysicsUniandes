#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int  count_lines(char* file);


main(int argc, char * argv []){

  int n_lines = count_lines(argv[1]);

  /*arrays for the group of points in the three corrdinates*/
  float *arr_x = (float *)malloc((n_lines) * sizeof(float));
  float *arr_y = (float *)malloc((n_lines) * sizeof(float));
  float *arr_z = (float *)malloc((n_lines) * sizeof(float));

 int  n=count_lines(argv[1]) ;
 printf("%d", n);

  return 0;
}


/*counts the number of lines in the input file*/
int  count_lines(char* file){
  
  int n_lines = 0;

  FILE *in = fopen(file, "r");

  float a,b,c;
  do{
  n_lines= n_lines+1;
  }while(fscanf(in, "%f %f %f", &a, &b, &c)==3);

  fclose(in);

  return n_lines;
}