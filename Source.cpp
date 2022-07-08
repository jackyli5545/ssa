#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "dataanalysis.h"
#include <cstring>
#include "ap.h"



using namespace alglib;

int main(int argc, char** argv)
{
    /*
    ssamodel s;
    real_1d_array x = "[0,0.5,1,1,1.5,2]";
    real_1d_array y = "[1,2,3,4,5]";
   
    ssacreate(s);
    ssasetwindow(s, 3);
    ssaaddsequence(s, x);
    ssasetalgotopkdirect(s, 1);
   
    real_1d_array trend;
    real_1d_array noise;
    char combine[1000];
    ssaanalyzesequence(s, x, trend, noise);
    printf("%s\n", trend.tostring(2).c_str()); 

   strcpy_s(combine ,trend.tostring(2).c_str());
  

    ssaaddsequence(s, y);
    ssaanalyzesequence(s, y, trend, noise);
    printf("%s\n", trend.tostring(2).c_str());
    strcat_s(combine, trend.tostring(2).c_str());

    printf(" % s\n", combine);*/


    /*
    ssamodel s;
    real_1d_array x;


    double array[] = { 14824, 14831, 14835, 14815, 14830, 14833 };
    double array2[] = { 24824, 24831, 24835, 24815, 24830, 24833 };


    x.setcontent(6, array);

    ssacreate(s);
    ssasetwindow(s,2);
    ssaaddsequence(s, x);
    ssasetalgotopkdirect(s, 1);
    real_1d_array trend;
    real_1d_array noise;

    ssaanalyzesequence(s, x, trend, noise);
    printf("%s\n", trend.tostring(2).c_str());
    
    x.setcontent(6, array2);
    ssaanalyzesequence(s, x, trend, noise);
    printf("%s\n", trend.tostring(2).c_str());
   
    */
    ssamodel s;
    real_1d_array x = "[0,0.5,1,1,1.5,2]";
    real_1d_array y = "[1,1.5,2,3,4,5]";
    ssacreate(s);
    ssasetwindow(s, 3);
    ssaaddsequence(s, x);
    ssasetalgotopkdirect(s, 1);
    real_1d_array trend;
    real_1d_array noise;
    ssaanalyzesequence(s, x, trend, noise);
    printf("%s\n", trend.tostring(2).c_str()); // EXPECTED: [0.3815,0.5582,0.7810,1.0794,1.5041,2.0105]
    
    ssaaddsequence(s, y);
    ssaanalyzesequence(s, y, trend, noise);
    printf("%s\n", trend.tostring(2).c_str()); // EXPECTED: [0.3815,0.5582,0.7810,1.0794,1.5041,2.0105]

    return 0;
}
