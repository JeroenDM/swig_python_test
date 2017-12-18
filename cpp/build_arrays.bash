swig -c++ -python arrays.i
g++ -fPIC -c arrays.cxx arrays_wrap.cxx -I /home/jeroen/anaconda3/include/python3.6m
g++ -shared arrays.o arrays_wrap.o -o _arrays.so