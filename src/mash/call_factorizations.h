#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> call_factorizations(const std::string& alg, const std::string& word) {
    std::string cmd = "../lyndon/python/external_interface.py ";
    cmd += alg;
    cmd += " ";
    cmd += word;
    cmd +=" > /tmp/qualcosa";
    system(cmd.c_str());
    std::ifstream f("/tmp/qualcosa");
    std::string line;
    std::vector<std::string> factors;
    while (getline(f, line, ' '))
        factors.push_back(line);
    std::string last = factors[factors.size() - 1];
    if (last[last.size() - 1] == '\n' || last[last.size() - 1] == '\r') {
        factors.pop_back();
        last = last.substr(0, last.length() - 1);
        factors.push_back(last);
    }
    return factors;
}
