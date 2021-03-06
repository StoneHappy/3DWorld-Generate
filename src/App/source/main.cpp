#include <Engine.h>
#include <Editor.h>
#include <PerlinNoise.hpp>
#include <iostream>
int main(int argc, char *argv[])
{
    Stone::PublicSingleton<Stone::Engine>::getInstance().startEngine(argc, argv);
    Stone::PublicSingleton<Stone::Editor>::getInstance().initialize(argc, argv);
    Stone::PublicSingleton<Stone::Editor>::getInstance().run();
    Stone::PublicSingleton<Stone::Engine>::getInstance().shutdownEngine();
}
