all: porttest

porttest:
	clang -x c test.c -framework CoreFoundation -o porttest

test: porttest
	./porttest

clean:
	rm ./porttest
