
all: clean build run

build:
	g++ app.cpp -o app.exe

run:
	./app

clean:
	del -f app.exe
