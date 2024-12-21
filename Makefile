build/main_gcc : main.cpp
	g++ main.cpp -o build/main_gcc -g -I/usr/include/eigen3/Eigen
	
build/main_clang : main.cpp
	clang++ main.cpp -o build/main_clang -g -I/usr/include/eigen3/Eigen

.PHONY : all
all : build/main_gcc build/main_clang
