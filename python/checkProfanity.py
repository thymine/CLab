def read_text():
    quotes = open("D:\movie_quotes.txt")
    contents = quotes.read()
    print(contents)
    quotes.close()

read_text()
