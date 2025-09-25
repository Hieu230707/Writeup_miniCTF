import re
key = b"27-01-1832"
data = open("schedule.enc","rb").read()
plain = bytes(b ^ key[i % len(key)] for i, b in enumerate(data))
text = plain.decode("utf-8", "ignore")
m = re.search(r"miniCTF\{[^}]+\}", text)
print(m.group(0) if m else "no-flag")
