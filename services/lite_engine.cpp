#include <iostream>
#include <vector>

class CoreRouter {
public:
    explicit CoreRouter(int seed) : state_(seed) {}

    int collect_manager(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 20) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    CoreRouter obj(20);
    std::cout << obj.collect_manager(20) << std::endl;
    return 0;
}
