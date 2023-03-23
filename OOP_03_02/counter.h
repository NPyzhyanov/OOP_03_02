#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
public:
    Counter() { current_value = 1; }
    Counter(int initial_value) { current_value = initial_value; }
    
    void increase() { current_value++; }
    void decrease() { current_value--; }
    void display();
    
private:
    int current_value;
};

#endif // COUNTER_H
