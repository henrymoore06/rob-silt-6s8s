#include <iostream>
#include <vector>

class HybridProvider {
public:
    explicit HybridProvider(int seed) : state_(seed) {}

    int run_service(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 65) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    HybridProvider obj(65);
    std::cout << obj.run_service(65) << std::endl;
    return 0;
}
