#include <iostream>
#include <vector>

class SharedSession {
public:
    explicit SharedSession(int seed) : state_(seed) {}

    int build_context(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 17) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SharedSession obj(17);
    std::cout << obj.build_context(17) << std::endl;
    return 0;
}
