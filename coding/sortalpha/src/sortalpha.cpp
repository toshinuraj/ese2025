#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::vector<string> array;
    std::string a;
    std::cout<< "Enter words for sorting. press <CTRL><D> to signal EoF"<<std::endl;
    while(std::cin>>a)
    array.push_back(a);
    std::sort (array.begin(),array.end());
    std::cout<< "Sorted words are: "<<std::endl;
    int i= array.size();
    if(i==0)
    {
    	std::cout<<"No words has been sorted"<<std::endl;
        return 1;
    }
    for (int j = 0; j < i; ++j)
    {std::cout<< array[i]<<std::endl;}
}
