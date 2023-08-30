#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "GenomeCoverageBedPlugin.h"

void GenomeCoverageBedPlugin::input(std::string file) {
 inputfile = file;
}

void GenomeCoverageBedPlugin::run() {}

void GenomeCoverageBedPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand +=  "genomeCoverageBed ";
myCommand += " -ibam ";
myCommand += inputfile;
myCommand += " -d >";
myCommand += outputfile;
std::cout << myCommand << std::endl;
system(myCommand.c_str());
}

PluginProxy<GenomeCoverageBedPlugin> GenomeCoverageBedPluginProxy = PluginProxy<GenomeCoverageBedPlugin>("GenomeCoverageBed", PluginManager::getInstance());

