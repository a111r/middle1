#include "middle.h"

int itc_second_max_num(long long number)
{
    if(number < 0)
    {
        number = number * (-1);
    }
    if(itc_len_num(number)==1)
        {return(-1);}
    int maxi = 0 , maxim = 0 , b = 0;
    int len;
    len=itc_len_num(number);
    for(int i = 0;i < len;i++)
    {
        b = number % 10;
        if(b > maxi)
        {
            maxim = maxi;
            maxi = b;

        }
        else if(b > maxim)
        {
            maxim=b;
        }
        number = number / 10;
    }
    return maxim;
}

int itc_second_simple_max_num(long long number)
{
    if(number < 0)
    {
         number = number * (-1);
    }
    if(itc_len_num(number)==1)
        {return(-1);}
    int maxi = 0, maxim = 0 , b = 0;
    int len=itc_len_num(number);
    for(int i=0;i<len;i++)
    {
        b = number % 10;
        if(b > maxi)
        {
            maxim = maxi;
            maxi = b;
        }
        else if(b > maxim)
        {
            maxim = b;
        }
        number = number / 10;
    }
    if(maxi == maxim)
    {
        return(-1);
    }
    return maxim;
}

long long itc_bin_num(long long number)
{
    int bin = 0;
    int k = 0;
    while(number > 0){
        bin += number % 2 * itc_pow(10, k);
        number /= 2;

        k++;
    }
    return bin;

}

long long itc_oct_num(long long number)
{
    int bin = 0;
    int k = 0;
    while(number > 0){
        bin += number % 8  * itc_pow(10, k);
        number /= 8;
        k++;
    }
    return bin;
}

int itc_rev_bin_num(long long number)
{
    int dec= 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(2, step);
        number /= 10;
        step++;
    }
    return dec;
}
