#ifndef PRIORITYQUEUE_HPP
#define PRIORITYQUEUE_HPP
#include "vector"
class PriorityQueue
{
public:

    void push(int el);
    void pop();
    int top();
    PriorityQueue() {}
    ~PriorityQueue() {}
private:
    std::vector <int> A;
    void Heapify(int i);
    void BuildHeap();

};

#endif // PRIORITYQUEUE_HPP
