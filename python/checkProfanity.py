from os import path
import urllib

def read_text():
    quotes = open(path.relpath("movie_quotes.txt"))
    contents = quotes.read()
    print(contents)
    quotes.close()
    check_profanity(contents)

def check_profanity(text_to_check):
    conn = urllib.urlopen("https://www.wdylike.appspot.com/?q=" + text_to_check)
    result = conn.read()
    print(result)
    conn.close()
    
read_text()
