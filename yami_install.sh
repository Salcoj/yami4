cd src;
cd core;
make -j 4;
cd ..;
cd cpp;
make -j 4;
cd ..;
cd ..;
cp include/* /usr/local/include/ -rf;
cp lib/* /usr/local/lib/ -rf;