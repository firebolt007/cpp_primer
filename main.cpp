#include<iostream>
#include "GCC_4_7_0/1/Sales_item.h"
int main()
{
    int val = 0;
    Sales_item item, sum; 
    std::string book_nr;
    while(std::cin>>item)
    {
        if (book_nr.empty()) 
        { 
            book_nr = item.isbn();
            sum = item;
        }
        else if (item.isbn()==book_nr) 
        {
            sum += item;
        }
        else 
        {
            break;
        }
    }
    std::cout<<sum<<std::endl;
    return 0;
}