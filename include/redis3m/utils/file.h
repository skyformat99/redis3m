#pragma once

#include <string>

namespace redis3m
{
namespace utils
{

std::string read_content_of_file(const std::string& path);

extern std::string datadir;

}
}
