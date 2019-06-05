#include <iostream>
#include <vector>
vector<int> std::sort(vector<int>array)
{
    for (int i = 0 ;i < array.size();i++)
    {
        for (int j = 0; j < array.size() - 1; ++j)
        {
            if (array[j] > array[i])
            	std::swap(array[j], array[i]);
        }
    }

    return array;
}

int main()
{
    vector<int> array ;
    int a;
s    while(std::cin>>a)
    {
    array.push_back(a);
    }
    std::cout<< "Sorted numbers are: "<<std::endl;

    for (int i = 0; i < array.size(); ++i)
    {
    	std::cout << sort(array)[i] <<std::endl;
    }
}
