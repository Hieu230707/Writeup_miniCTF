import re

KEY = b"DEADBEEF"
data = open("flag", "rb").read()

plain = bytes(b ^ KEY[i % len(KEY)] for i, b in enumerate(data))

open("decoded_from_binary_snake.txt", "wb").write(plain)

text = plain.decode("utf-8", "ignore")
m = re.search(r"(miniCTF\{[^}]+\}|CTF\{[^}]+\}|flag\{[^}]+\})", text)
if m:
    print("Flag:", m.group(1))
else:
    print("Không thấy pattern flag — mở decoded_from_binary_snake.txt để đọc nội dung.")