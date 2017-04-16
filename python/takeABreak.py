import webbrowser
import time

url = 'http://music.163.com/song?id=18003388'

total_breaks = 3
break_count = 0
print("This program started on " + time.ctime())
while break_count < total_breaks:
    time.sleep(3) # For development only
    # time.sleep(2 * 60 * 60)
    # Open URL in a new tab, if a browser window is already open.
    webbrowser.open_new_tab(url)
    break_count += 1
