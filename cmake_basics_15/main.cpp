#include <iostream>
#include "my_message.pb.h"

using namespace std;

int main() {
    // 创建一个 MyMessage 类型的实例
    my_package::MyMessage msg;

    // 设置字段值
    msg.set_id(123);
    msg.set_name("hello");

    // 序列化成二进制数据
    string buf;
    msg.SerializeToString(&buf);

    // 反序列化并输出字段值
    my_package::MyMessage new_msg;
    new_msg.ParseFromString(buf);
    cout << "id: " << new_msg.id() << endl;
    cout << "name: " << new_msg.name() << endl;

    return 0;
}
