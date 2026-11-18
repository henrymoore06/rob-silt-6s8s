#include <iostream>
#include <vector>

class AtomicResolver {
public:
    explicit AtomicResolver(int seed) : state_(seed) {}

    int sync_collector(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 67) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AtomicResolver obj(67);
    std::cout << obj.sync_collector(67) << std::endl;
    return 0;
}
