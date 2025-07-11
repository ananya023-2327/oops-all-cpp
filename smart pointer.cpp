#include <iostream>
#include <memory>   // unique_ptr, shared_ptr

int main() {
    // unique_ptr: sole ownership
    std::unique_ptr<int> uptr = std::make_unique<int>(42);
    std::cout << "unique_ptr value: " << *uptr << '\n';

    // shared_ptr: reference‑counted ownership
    std::shared_ptr<int> sp1 = std::make_shared<int>(100);
    std::shared_ptr<int> sp2 = sp1;               // now two owners
    std::cout << "shared_ptr use_count: " << sp1.use_count() << '\n';
    std::cout << "shared_ptr value: " << *sp2 << '\n';

    // memory is released automatically when last smart pointer goes out of scope
    return 0;
}
