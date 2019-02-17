# gtest-c-template

## setup

```
brew install cmake

cd  ~
git clone https://github.com/google/googletest.git  
cd ~/googletest/
mkdir install
cd install
cmake -DCMAKE_CXX_COMPILER="c++" -DCMAKE_CXX_FLAGS="-std=c++11 -stdlib=libc++" ../  

make
sudo make install
echo "export CPLUS_INCLUDE_PATH=/usr/local/include" >> ~/.zshrc  
echo "export LIBRARY_PATH=/usr/local/lib" >> ~/.zshrc  
source ~/.zshrc


```

## test

```
cd test
make tests
```
