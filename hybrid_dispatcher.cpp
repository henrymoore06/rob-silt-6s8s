#include <iostream>
#include <vector>

class SecureAdapter {
public:
    explicit SecureAdapter(int seed) : state_(seed) {}

    int render_scheduler(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 19) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SecureAdapter obj(19);
    std::cout << obj.render_scheduler(19) << std::endl;
    return 0;
}
