/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Player_H_
#define ORG_GENIVI_MEDIAMANAGER_Player_H_




#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

class Player {
 public:
    virtual ~Player() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* Player::getInterfaceId() {
    static const char* interfaceId = "org.genivi.mediamanager.Player";
    return interfaceId;
}

CommonAPI::Version Player::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace mediamanager
} // namespace genivi
} // namespace org

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
}

#endif // ORG_GENIVI_MEDIAMANAGER_Player_H_