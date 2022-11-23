#include <iostream>
#include "csp_functions.hpp"

using namespace std;


int main(int argc, char * argv[]) {
    cout << "Serving CSP ZMQ Server" << endl;
    run_proxy_server();
    cout << "Ending Progam" << endl;
    return 0;
}