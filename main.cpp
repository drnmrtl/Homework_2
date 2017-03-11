#include <iostream>
#include "priorityqueue.hpp"
void HeapSort(std::vector <int> &vec)
{
    PriorityQueue heap;
    for(size_t i = 0; i<vec.size();++i)
    {
        heap.push(vec[i]);
    }
    int i = vec.size()-1;
    while(i>=0)
    {
        vec[i] = heap.top();
        heap.pop();
        --i;
    }
}
int main()
{
    std::vector <int> Array(20,0);
    for(int i=0;i<20;++i)
    {
        Array[i] = rand() % 100;
        std::cout << Array[i] << " ";
    }
    std::cout << std::endl;
    HeapSort(Array);
    for(int i=0;i<20;++i)
    {
        std::cout << Array[i] << " ";
    }
    return 0;
}
