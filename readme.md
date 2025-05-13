# 工具
## Protocol Buffer Compiler
Protocol Buffer Compiler，通常简称为 protoc。它是 Protocol Buffers 工具集中的核心工具，用于从 .proto 文件生成特定编程语言的数据访问类（如 C++、Java、Python 等）。

user.pb.cc 文件通常是由 protoc 编译器从 user.proto 文件生成的 C++ 源文件。这个文件包含了根据 .proto 文件中定义的消息类型和服务的具体实现代码。例如，如果 user.proto 文件定义了一个 User 消息类型，user.pb.cc 文件将包含用于序列化和反序列化 User 消息的 C++ 类和方法。

1. 编写`.proto`文件
2. 运行`.proto`编译器
```sh
protoc --cpp_out=. user.proto
```