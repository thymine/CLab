from os import path

def read_text():
    quotes = open(path.relpath("movie_quotes.txt"))
    contents = quotes.read()
    print(contents)
    quotes.close()

read_text()
