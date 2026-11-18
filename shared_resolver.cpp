#include <iostream>
#include <vector>

class SimpleWorker {
public:
    explicit SimpleWorker(int seed) : state_(seed) {}

    int resolve_controller(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 95) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    SimpleWorker obj(95);
    std::cout << obj.resolve_controller(95) << std::endl;
    return 0;
}
