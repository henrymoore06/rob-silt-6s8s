#include <iostream>
#include <vector>

class SmartRegistry {
public:
    explicit SmartRegistry(int seed) : state_(seed) {}

    int run_service(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 81) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SmartRegistry obj(81);
    std::cout << obj.run_service(81) << std::endl;
    return 0;
}
