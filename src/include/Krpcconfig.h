#ifndef _Krpcconfig_h   // 检查宏_Krpcconfig_h是否已经被定义，已定义，直接跳到endif，中间代码都会被忽略
#define _Krpcconfig_h   // 未定义，则定义
#include <unordered_map>
#include <string>
class Krpcconfig{
    public:
    void LoadConfigFile(const char *config_file);//加载配置文件
    std::string Load(const std::string &key);//查找key对应的value
    private:
    std::unordered_map<std::string, std::string> config_map;
    void Trim(std::string &read_buf);//去掉字符串前后的空格
};
#endif
