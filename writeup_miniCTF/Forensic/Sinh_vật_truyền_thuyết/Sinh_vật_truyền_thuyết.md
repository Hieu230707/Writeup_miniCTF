# MiniCTF 2025 - Writeup for Forensic challenge

## Challenge

![alt text](image.png)

## Solution

Trước tiên chúng ta tải file `Blue_pegasus.jpg` và mở ảnh.

![alt text](image-1.png)

Không có gì. Vậy có lẽ metadata của file có gì đó bị sai. Chúng ta cùng check file trong HxD nào.

![alt text](image-2.png)

Đây có vẻ không phải kí tự của file `.jpg`. Ví dụ 1 file `.jpg`: ![alt text](image-3.png)

Vậy 4 kí tự đầu phải là `FF D8 FF E0`. Ta sửa lại trong file đề bài yêu cầu và save lại nó.

![alt text](image-4.png)

Sau đó sẽ có 1 file ảnh mới. Mở ảnh và chúng ta thu được flag.

![alt text](image-5.png)

## Flag

`miniCTF{BLUE_PEGA5US_LMAOOO}`