import os
from Crypto.Cipher import AES

KEY_LENGTH = 16
IV_LENGTH = 16

if __name__ == '__main__':
  key = bytes([6, 194, 160, 50, 194, 140, 40, 194, 159, 2, 194, 155, 38, 194, 159, 17])
  file_name = "./newdecode_ch/files/shotmaster_full"
  with open(file_name, "rb") as f:
    file_size = os.path.getsize(file_name)
    iv = f.read(IV_LENGTH)
    content_size = file_size - IV_LENGTH
    content = f.read(content_size)
    cipher = AES.new(key, AES.MODE_CBC, iv)
    data = cipher.decrypt(content)
    # print(data)
    with open("./output", "wb") as binary_file:
      binary_file.write(data)