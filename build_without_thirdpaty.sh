if [ $# -ge 1 ]; then
  th="$1"
else
  th = "j4"
fi

mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make $th
