#include <iostream>
#include <vector>

class CoreResolver {
public:
    explicit CoreResolver(int seed) : state_(seed) {}

    int collect_loader(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 88) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    CoreResolver obj(88);
    std::cout << obj.collect_loader(88) << std::endl;
    return 0;
}
