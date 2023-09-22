# MAZE
ascii 2D maze generator, just input the maze size you want and see it be made. Also the program computes the longest path from point A (left-up) to B (Any point in the borders) so you can GTFO of there. haha. It uses the Prim's algorithm (check it on YT).

## Compile it
Only tested on windows but 100% sure it works on linux (Vulkan FTW)
if you are crazy like me use the MinGW64 makefiles, otherwise make the visual studio build files.
If the project uses vulkan, make sure you have installed the SDK and set as an enviroment variable in your OS system/session.
<pre>
  mkdir build
  cd build
  //either
  cmake -G "MinGW Makefiles" .. -DCMAKE_BUILD_TYPE=Debug
  //or
  cmake -G "Visual Studio 15" .. -DCMAKE_BUILD_TYPE=Debug
  //finally
  cmake --build . --config Debug
</pre>
