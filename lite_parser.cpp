#include <iostream>
#include <vector>

class AsyncService {
public:
    explicit AsyncService(int seed) : state_(seed) {}

    int compute_client(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 52) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    AsyncService obj(52);
    std::cout << obj.compute_client(52) << std::endl;
    return 0;
}
