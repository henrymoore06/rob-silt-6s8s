#include <iostream>
#include <vector>

class HybridMonitor {
public:
    explicit HybridMonitor(int seed) : state_(seed) {}

    int build_handler(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 76) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    HybridMonitor obj(76);
    std::cout << obj.build_handler(76) << std::endl;
    return 0;
}
