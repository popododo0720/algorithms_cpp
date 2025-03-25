#include <iostream>

class IntAdder {
    private:
        int currentSum = 0;

    public: 
        IntAdder(): currentSum(0) {}

        int add(int value) {
            return currentSum += value;
        }

        int flush() {
            int result = currentSum;
            currentSum = 0;
            return result;
        }
};

int main () {
    IntAdder adder;
    std::cout << adder.add(5) << "\n";
    std::cout << adder.add(5) << "\n";
    std::cout << adder.add(5) << "\n";
    std::cout << adder.flush() << "\n";
    std::cout << adder.add(5) << "\n";
}