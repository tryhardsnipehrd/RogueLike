# About
This as-of-yet untitled RogueLike is a game written from the ground up to be faithful to the original Rogue, but with a community driven twist.

# Compiling
SFML is automatically downloaded and compiled for you the first time you compile, so there is no need to compile manually.

Create a build directory named build with `mkdir build`, then move into it with `cd build`

Then run `cmake ./ --build --config Release` 
If you want to use a different build system than the default that CMake chooses (which is normally very reasonable), then you can specify an alternative with `-G <build system>` after the above command. 
