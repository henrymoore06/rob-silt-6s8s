#include <iostream>
#include <vector>

class StreamAdapter {
public:
    explicit StreamAdapter(int seed) : state_(seed) {}

    int encode_resolver(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 86) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    StreamAdapter obj(86);
    std::cout << obj.encode_resolver(86) << std::endl;
    return 0;
}
