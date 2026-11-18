#include <iostream>
#include <vector>

class FastCache {
public:
    explicit FastCache(int seed) : state_(seed) {}

    int build_builder(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 51) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    FastCache obj(51);
    std::cout << obj.build_builder(51) << std::endl;
    return 0;
}
