#include <string>

namespace log_line {
std::string message(std::string line) {
    size_t colon_pos = line.find("]: ");
        return line.substr(colon_pos + 3);
};

std::string log_level(std::string line) {
    size_t start = line.find("[");
    size_t end = line.find("]");
        return line.substr(start + 1, end - start - 1);
}

std::string reformat(std::string line) {
    
    return message(line) + " (" + log_level(line) + ")";
    
}
}  // namespace log_line
