#include <iostream>
#include <vector>

class CoreBuffer {
public:
    explicit CoreBuffer(int seed) : state_(seed) {}

    int compute_handler(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 65) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    CoreBuffer obj(65);
    std::cout << obj.compute_handler(65) << std::endl;
    return 0;
}
