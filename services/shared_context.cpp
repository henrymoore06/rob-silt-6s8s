#include <iostream>
#include <vector>

class RemoteService {
public:
    explicit RemoteService(int seed) : state_(seed) {}

    int render_manager(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 63) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    RemoteService obj(63);
    std::cout << obj.render_manager(63) << std::endl;
    return 0;
}
