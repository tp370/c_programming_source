CC = clang # flag for implicit rules
CFLAGS = -g -Wall # flags for compiling
LDLIBS = -lm # flags for linking, -lm is for math library
# variables
name = Ted
last_name = Charles
# 变量可以用 `$(name)` 或 `${name}` 来引用, 也可以用 `$(name:pattern=replacement)` 来替换
# 例如: `$(name:Te%=%)` 会将 `name` 中以 `Te` 开头的部分替

# 这行表示注释

# 文件名一定要叫 Makefile, 大小写区分, 使用 `make <target>` 生成 target
# 如果想要取别的名字, 可以用 `make -f "filename" <target>`.

# 重要的事情 - 只认识 TAB, 空格是不认的, 但是在 GNU Make 3.82 之后, 可以通过
# 设置参数 .RECIPEPREFIX 进行修改

#-----------------------------------------------------------------------
# 初级
#-----------------------------------------------------------------------
# 目标: hello
# targets: prerequisites
#       recipe
hello:
	@echo "Hello World" 
	@echo "${name} is ${last_name}"
# "@" suppresses the command output
	
demo.out: demo.c
	@${CC} ${CFLAGS} -o $@ $< ${LDLIBS}
	@./$@
	
# $@ is the target, $< is the first prerequisites

# -----------------------------------------------------------------------
# Phony(假的) Targets
#-----------------------------------------------------------------------

# phony targets 意思是 targets 并不是文件, 可以想象成一个任务的名字而已.
# 因为不是文件, 无法比对是否有更新, 所以每次make都会执行.
# all: maker process

example.txt: maker

maker:
	@echo "This is an example file" > example.txt

# 如果定义的 phony target 与文件名重名, 可以用 .PHONY 显式地指明哪些 targets 是 phony
# .PHONY: all maker process
# This is a special target. There are several others.
# most of them common used is all clean install 
# variables and functions 
all: demo.c example.txt # can use variable regular symbols
	@echo $^ 
# $^ is all prerequisites, $@ is the target
	@echo $@ 
# 
	@echo $<
	@echo $?
	@echo $+
	@echo $|
	@echo $*

echo_inbuilt:
	echo ${CC}
	echo ${CXX}
	echo $(FC)
	echo $(CFLAGS)
	echo $(CPPFLAGS)
	echo ${CXXFLAGS}
	echo ${LDFLAGS}
	echo ${LDLIBS}

# functions built-in
all_markdown:
	@echo ${wildcard *.c}
# patsubst
# $(func arg0, arg1, arg2, )
# filter notdir join


clean:
	@rm -f demo.out example.txt