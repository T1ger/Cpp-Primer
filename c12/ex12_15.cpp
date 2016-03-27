#include <iostream>
#include <string>
#include <memory>

struct connection {
    std::string ip;
    int port;
    connection(std::string _ip, int _port): ip(_ip), port(_port){ }
};

struct destination {
    std::string ip;
    int port;
    destination(std::string _ip, int _port): ip(_ip), port(_port){ }
};

connection connect(destination* dest_ptr) {
    std::shared_ptr<connection> conn_ptr(new connection(dest_ptr->ip, dest_ptr->port));
    std::cout << "connection established (" << conn_ptr.use_count() << ")" << std::endl;
    return *conn_ptr;
}

void disconnect(connection* conn_ptr) {
    std::cout << "connection close(" << conn_ptr->ip << ":" << conn_ptr->port << ")" << std::endl;
}
/*
void end_connection(connection* conn_ptr) {
    disconnect(conn_ptr);
}
*/
void f(destination &d) {
    connection conn = connect(&d);
    std::shared_ptr<connection> p(&conn, [](connection* p){ disconnect(p); });
    std::cout << "connectiong now(" << p.use_count() << ")" << std::endl;
}

int main() {
    destination dest("192.168.1.1", 22);
    f(dest);

    return 0;
}