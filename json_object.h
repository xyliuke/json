#include <string>

namespace plan9
{
    class json_object {
    public:
        
    private:
        class json_object_impl;
        std::shared_ptr<json_object_impl> impl;    
    };
}