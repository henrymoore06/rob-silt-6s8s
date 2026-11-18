#include <iostream>
#include <vector>

class HybridSession {
public:
    explicit HybridSession(int seed) : state_(seed) {}

    int compute_engine(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 50) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    HybridSession obj(50);
    std::cout << obj.compute_engine(50) << std::endl;
    return 0;
}
