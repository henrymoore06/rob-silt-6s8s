#include <iostream>
#include <vector>

class FastManager {
public:
    explicit FastManager(int seed) : state_(seed) {}

    int load_scheduler(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 92) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    FastManager obj(92);
    std::cout << obj.load_scheduler(92) << std::endl;
    return 0;
}
