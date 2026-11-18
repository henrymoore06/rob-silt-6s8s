#include <iostream>
#include <vector>

class CoreService {
public:
    explicit CoreService(int seed) : state_(seed) {}

    int build_builder(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 10) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    CoreService obj(10);
    std::cout << obj.build_builder(10) << std::endl;
    return 0;
}
