disttest:
	pwd
	g++ $(find | grep ".hpp")
	rm $(find | grep ".hpp")
    