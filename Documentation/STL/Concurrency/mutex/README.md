# mutex
- Là một lớp cho phép đồng bộ hóa truy cập vào các tài nguyên được chia sẻ.
- Đảm bảo rằng chỉ có một luồng được truy cập vào tài nguyên tại một thời điểm.
- Có các kiểu như std::mutex, std::recursive_mutex, std::timed_mutex, và std::recursive_timed_mutex

# recursive_mutex
_ Cho phép cùng một luồng sở hữu và khóa mutex nhiều lần.
- Mỗi lần lock() được gọi, mutex phải được unlock() cùng số lần.
- Hữu ích khi một hàm hoặc một đoạn code cần sở hữu mutex để truy cập vào tài nguyên chia sẻ, và hàm đó gọi các hàm khác cũng cần truy cập vào cùng tài nguyên đó.

# timed_mutex
_ Tương tự như std::mutex, nhưng cho phép chờ đợi trong một khoảng thời gian cụ thể để khóa mutex.
- Có các phương thức try_lock_for() và try_lock_until() để thực hiện việc này.
- Hữu ích khi bạn muốn tránh tình trạng deadlock bằng cách giới hạn thời gian chờ đợi để khóa mutex.

# recursive_timed_mutex
- Kết hợp các tính năng của std::recursive_mutex và std::timed_mutex.
- Cho phép cùng một luồng sở hữu và khóa mutex nhiều lần, và cũng cho phép chờ đợi trong một khoảng thời gian cụ thể để khóa mutex.
- Hữu ích trong các trường hợp cần sử dụng recursive mutex với thời gian chờ đợi giới hạn.
