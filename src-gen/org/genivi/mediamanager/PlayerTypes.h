/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Player_Types_H_
#define ORG_GENIVI_MEDIAMANAGER_Player_Types_H_



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/types.h>
#include <cstdint>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

namespace PlayerTypes {
    enum class MuteStatus: int32_t {
        MUTED,
        UNMUTED
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct MuteStatusComparator;
    enum class PlayerError: int32_t {
        NO_ERROR,
        BAD_PLAYLIST,
        BACKEND_UNREACHABLE
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct PlayerErrorComparator;
    enum class ShuffleStatus: int32_t {
        SHUFFLE,
        UNSHUFFLE
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct ShuffleStatusComparator;
    enum class RepeatStatus: int32_t {
        REPEAT,
        REPEAT_SINGLE,
        NO_REPEAT
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct RepeatStatusComparator;
    enum class PlaybackStatus: int32_t {
        PLAYING,
        PAUSED
    };
    
    // Definition of a comparator still is necessary for GCC 4.4.1, topic is fixed since 4.5.1
    struct PlaybackStatusComparator;

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, MuteStatus& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const MuteStatus& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct MuteStatusComparator {
    inline bool operator()(const MuteStatus& lhs, const MuteStatus& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, PlayerError& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const PlayerError& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct PlayerErrorComparator {
    inline bool operator()(const PlayerError& lhs, const PlayerError& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, ShuffleStatus& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const ShuffleStatus& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct ShuffleStatusComparator {
    inline bool operator()(const ShuffleStatus& lhs, const ShuffleStatus& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, RepeatStatus& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const RepeatStatus& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct RepeatStatusComparator {
    inline bool operator()(const RepeatStatus& lhs, const RepeatStatus& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};

inline CommonAPI::InputStream& operator>>(CommonAPI::InputStream& inputStream, PlaybackStatus& enumValue) {
    return inputStream.readEnumValue<int32_t>(enumValue);
}

inline CommonAPI::OutputStream& operator<<(CommonAPI::OutputStream& outputStream, const PlaybackStatus& enumValue) {
    return outputStream.writeEnumValue(static_cast<int32_t>(enumValue));
}

struct PlaybackStatusComparator {
    inline bool operator()(const PlaybackStatus& lhs, const PlaybackStatus& rhs) const {
        return static_cast<int32_t>(lhs) < static_cast<int32_t>(rhs);
    }
};



static inline const char* getTypeCollectionName() {
    static const char* typeCollectionName = "org.genivi.mediamanager.PlayerTypes";
    return typeCollectionName;
}

inline CommonAPI::Version getTypeCollectionVersion() {
    return CommonAPI::Version(1, 0);
}

} // namespace PlayerTypes

} // namespace mediamanager
} // namespace genivi
} // namespace org

namespace CommonAPI {

    template<>
    struct BasicTypeWriter<org::genivi::mediamanager::PlayerTypes::MuteStatus> {
        inline static void writeType (CommonAPI::TypeOutputStream& typeStream) {
            typeStream.writeInt32EnumType();
        }
    };
    
    template<>
    struct InputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::MuteStatus> {
        static void beginReadVector(InputStream& inputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::MuteStatus>& vectorValue) {
            inputStream.beginReadInt32EnumVector();
        }
    };
    
    template <>
    struct OutputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::MuteStatus> {
        static void beginWriteVector(OutputStream& outputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::MuteStatus>& vectorValue) {
            outputStream.beginWriteInt32EnumVector(vectorValue.size());
        }
    };
    template<>
    struct BasicTypeWriter<org::genivi::mediamanager::PlayerTypes::PlayerError> {
        inline static void writeType (CommonAPI::TypeOutputStream& typeStream) {
            typeStream.writeInt32EnumType();
        }
    };
    
    template<>
    struct InputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::PlayerError> {
        static void beginReadVector(InputStream& inputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::PlayerError>& vectorValue) {
            inputStream.beginReadInt32EnumVector();
        }
    };
    
    template <>
    struct OutputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::PlayerError> {
        static void beginWriteVector(OutputStream& outputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::PlayerError>& vectorValue) {
            outputStream.beginWriteInt32EnumVector(vectorValue.size());
        }
    };
    template<>
    struct BasicTypeWriter<org::genivi::mediamanager::PlayerTypes::ShuffleStatus> {
        inline static void writeType (CommonAPI::TypeOutputStream& typeStream) {
            typeStream.writeInt32EnumType();
        }
    };
    
    template<>
    struct InputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::ShuffleStatus> {
        static void beginReadVector(InputStream& inputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::ShuffleStatus>& vectorValue) {
            inputStream.beginReadInt32EnumVector();
        }
    };
    
    template <>
    struct OutputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::ShuffleStatus> {
        static void beginWriteVector(OutputStream& outputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::ShuffleStatus>& vectorValue) {
            outputStream.beginWriteInt32EnumVector(vectorValue.size());
        }
    };
    template<>
    struct BasicTypeWriter<org::genivi::mediamanager::PlayerTypes::RepeatStatus> {
        inline static void writeType (CommonAPI::TypeOutputStream& typeStream) {
            typeStream.writeInt32EnumType();
        }
    };
    
    template<>
    struct InputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::RepeatStatus> {
        static void beginReadVector(InputStream& inputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::RepeatStatus>& vectorValue) {
            inputStream.beginReadInt32EnumVector();
        }
    };
    
    template <>
    struct OutputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::RepeatStatus> {
        static void beginWriteVector(OutputStream& outputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::RepeatStatus>& vectorValue) {
            outputStream.beginWriteInt32EnumVector(vectorValue.size());
        }
    };
    template<>
    struct BasicTypeWriter<org::genivi::mediamanager::PlayerTypes::PlaybackStatus> {
        inline static void writeType (CommonAPI::TypeOutputStream& typeStream) {
            typeStream.writeInt32EnumType();
        }
    };
    
    template<>
    struct InputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::PlaybackStatus> {
        static void beginReadVector(InputStream& inputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::PlaybackStatus>& vectorValue) {
            inputStream.beginReadInt32EnumVector();
        }
    };
    
    template <>
    struct OutputStreamVectorHelper<org::genivi::mediamanager::PlayerTypes::PlaybackStatus> {
        static void beginWriteVector(OutputStream& outputStream, const std::vector<org::genivi::mediamanager::PlayerTypes::PlaybackStatus>& vectorValue) {
            outputStream.beginWriteInt32EnumVector(vectorValue.size());
        }
    };

}


namespace std {
    //Hash for MuteStatus
    template<>
    struct hash<org::genivi::mediamanager::PlayerTypes::MuteStatus> {
        inline size_t operator()(const org::genivi::mediamanager::PlayerTypes::MuteStatus& muteStatus) const {
            return static_cast<int32_t>(muteStatus);
        }
    };
    //Hash for PlayerError
    template<>
    struct hash<org::genivi::mediamanager::PlayerTypes::PlayerError> {
        inline size_t operator()(const org::genivi::mediamanager::PlayerTypes::PlayerError& playerError) const {
            return static_cast<int32_t>(playerError);
        }
    };
    //Hash for ShuffleStatus
    template<>
    struct hash<org::genivi::mediamanager::PlayerTypes::ShuffleStatus> {
        inline size_t operator()(const org::genivi::mediamanager::PlayerTypes::ShuffleStatus& shuffleStatus) const {
            return static_cast<int32_t>(shuffleStatus);
        }
    };
    //Hash for RepeatStatus
    template<>
    struct hash<org::genivi::mediamanager::PlayerTypes::RepeatStatus> {
        inline size_t operator()(const org::genivi::mediamanager::PlayerTypes::RepeatStatus& repeatStatus) const {
            return static_cast<int32_t>(repeatStatus);
        }
    };
    //Hash for PlaybackStatus
    template<>
    struct hash<org::genivi::mediamanager::PlayerTypes::PlaybackStatus> {
        inline size_t operator()(const org::genivi::mediamanager::PlayerTypes::PlaybackStatus& playbackStatus) const {
            return static_cast<int32_t>(playbackStatus);
        }
    };
}

#endif // ORG_GENIVI_MEDIAMANAGER_Player_Types_H_
