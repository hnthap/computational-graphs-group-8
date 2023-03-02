
all: clean build run

build:
	g++ cpp/app.cpp -o app.exe

run:
	./app

clean:
	del -f app.exe
