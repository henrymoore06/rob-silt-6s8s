#include <iostream>
#include <vector>

class RemoteLoader {
public:
    explicit RemoteLoader(int seed) : state_(seed) {}

    int fetch_client(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 91) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    RemoteLoader obj(91);
    std::cout << obj.fetch_client(91) << std::endl;
    return 0;
}
