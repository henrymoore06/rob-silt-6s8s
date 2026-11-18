#include <iostream>
#include <vector>

class DynamicCache {
public:
    explicit DynamicCache(int seed) : state_(seed) {}

    int flush_manager(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 36) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    DynamicCache obj(36);
    std::cout << obj.flush_manager(36) << std::endl;
    return 0;
}
