#!/bin/sh
set -e
git clone https://github.com/google/flatbuffers -b v23.5.26
git clone https://github.com/nlohmann/json -b v3.11.2
git clone https://github.com/deepsig/libsigmf -b v1.0.2
git clone https://github.com/DTolm/VkFFT -b v1.3.1
mkdir -p flatbuffers/build
cd flatbuffers/build
cmake ..
make -j $(nproc)
sudo make install
cd ../..
mkdir -p json/build
cd json/build
cmake ..
make -j $(nproc)
sudo make install
cd ../..
mkdir -p libsigmf/build
cd libsigmf/build
cmake -DUSE_SYSTEM_JSON=ON -DUSE_SYSTEM_FLATBUFFERS=ON ..
make -j $(nproc)
sudo make install
cd ../..
if [ "$(which vulkaninfo)" != "" ] ; then
  mkdir -p VkFFT/build
  cd VkFFT/build
  cmake ..
  make -j $(nproc)
  sudo make install
  cd ../..
fi