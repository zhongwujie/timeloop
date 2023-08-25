src = $(wildcard ./*.cpp)  
obj = $(patsubst %.cpp, %.o, $(src))  
#obj = $(src:%.c=%.o)  
target = app  
CC = g++
LIB = ../include

$(target): $(obj)  
	$(CC) $(obj) -o $(target)  

%.o: %.cpp  
	$(CC) -I $(LIB) -c $< -o $@  
    
.PHONY: clean  
clean:  
	rm -rf $(obj) $(target)