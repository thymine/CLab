import os
from os.path import join

def delete_all_classes():
    for root, dirs, files in os.walk(r'D:\sourcecode'):
        for name in files:
            if name.endswith('.class'):
                print "Delete ",
                print(join(root, name))
                os.remove(join(root, name))
    
delete_all_classes()
