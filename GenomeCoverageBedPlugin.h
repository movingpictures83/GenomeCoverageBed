#ifndef GENOMECOVERAGEBEDPLUGIN_H
#define GENOMECOVERAGEBEDPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class GenomeCoverageBedPlugin : public Plugin
{
public: 
 std::string toString() {return "GenomeCoverageBed";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
