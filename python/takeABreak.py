import webbrowser
import time

url = 'http://music.163.com/song?id=18003388'

time.sleep(3)
# Open URL in a new tab, if a browser window is already open.
webbrowser.open_new_tab(url)
