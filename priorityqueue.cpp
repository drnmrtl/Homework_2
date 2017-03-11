#include "priorityqueue.hpp"

void PriorityQueue::Heapify(int i)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    if( l<A.size() && A[l] > A[i])
    {
        largest = l;
    }
    else largest = i;
    if ( r < A.size() && A[r] > A[i] && A[r] > A[l])
    {
        largest = r;
    }
    if (largest != i)
    {
      int temp = A[i];
      A[i] = A[largest];
      A[largest] = temp;
      Heapify(largest);
    }
}

void PriorityQueue::BuildHeap()
{
    for(int i = (A.size()-2)/2; i>0; ++i)
    {
        Heapify(i);
    }
}
void PriorityQueue::pop()
{
    A[0] = A[A.size()-1];
    A.pop_back();
    Heapify(0);
}

void PriorityQueue::push(int el)
{
    A.push_back(el);
    int i = A.size()-1;
    int parent = (i-1)/2;
    while(i>0 && A[parent]<A[i])
    {
        int temp = A[parent];
        A[parent] = A[i];
        A[i] = temp;
        i = parent;
        parent = (i-1)/2;
    }
}
int PriorityQueue::top()
{
    return A[0];
}




