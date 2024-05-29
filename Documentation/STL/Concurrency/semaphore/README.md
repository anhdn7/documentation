1. Cung cấp các lớp std::counting_semaphore và std::binary_semaphore để quản lý các tài nguyên được chia sẻ.
2. std::counting_semaphore có thể có nhiều hơn 1 "token", cho phép nhiều luồng truy cập đến tài nguyên cùng một lúc.
3. std::binary_semaphore chỉ có 0 hoặc 1 "token", chỉ cho phép 1 luồng truy cập tài nguyên tại một thời điểm.