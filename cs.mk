all:
	cd 262; make all
	cd 295; make all
	cd 364/buffer; make
	cd 364/ko; make
	cd 364/merge; make
	cd 364/rng; make
	cd 364/split; make
clean:
	cd 262; make clean
	cd 295; make clean
	cd 364/buffer; make clean
	cd 364/ko; make clean
	cd 364/merge; make clean
	cd 364/rng; make clean
	cd 364/split; make clean
format:
	cd 262; make format
	cd 295; make format
	cd 364/buffer; make format
	cd 364/ko; make format
	-cd 364/merge; make format
	cd 364/rng; make format
	cd 364/split; make format
tidy:
	cd 262; make tidy
	cd 295; make tidy
	cd 364/buffer; make tidy
	cd 364/ko; make tidy
	-cd 364/merge; make tidy
	cd 364/rng; make tidy
	cd 364/split; make tidy

avg:
	262/avg 3
list:
	262/list
buffer:
	cd 364/buffer; ./buffer input.txt
ko:
	364/ko/ko 5 5
merge:
	cd 364/merge; ./merge
rng:
	cd 364/rng; ./rng 3
split:
	cd 364/split; ./split
