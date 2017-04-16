import os
import re

def rename_files():
    # 1) Get file names from a folder
    file_list = os.listdir(r"D:\prank")
    saved_path = os.getcwd()

    os.chdir(r"D:\prank")
    # 2) For each file, rename file name
    for file_name in file_list:
        print("Old Name - " + file_name)
        new_name = file_name.translate(None, '1234567890')
        os.rename(file_name, new_name)
        print("New Name - " + new_name)
    os.chdir(saved_path)

rename_files()
