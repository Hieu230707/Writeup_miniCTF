# MiniCTF 2025 - Writeup for Web challenge

## Challenge

![alt text](image.png)

## Solution

Trước tiên chúng ta tải file `rabbit_schedule_challenge.zip` và extract file.

Chúng ta được cung cấp tệp mã hóa `schedule.enc` và gợi ý trong `README.txt`. Nhiệm vụ là giải mã tệp để thu được nội dung lịch và trích xuất flag.

![alt text](image-1.png)

**Xem gợi ý trong README:** 
![alt text](image-2.png)

Bản mã được tạo bằng cách XOR từng byte dữ liệu với chuỗi khóa lặp lại. Khi giải mã, ta lặp khóa theo độ dài tệp và XOR lại lần nữa (vì XOR tự đảo).

Chúng ta cùng giải mã nào. Tạo file `solve.py` cạnh `schedule.enc`.

Để tạo file `solve.py` chúng ta mở VS Code và `Open Folder` thư mục chứa `schedule.enc`. Sau đó thêm 1 file `solve.py` với nội dung như sau: [solve.py](solve.py).

Vậy là chúng ta có file `solve.py`.

![alt text](image-3.png)

Tiếp theo chúng ta chạy file `solve.py` trong Terminal.

![alt text](image-4.png)

Như vậy chúng ta đã có flag.

## Flag
`miniCTF{white_rabbit_rush}`