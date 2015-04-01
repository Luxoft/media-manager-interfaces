cmake_minimum_required(VERSION 2.6)

FIND_PACKAGE (PkgConfig)

pkg_check_modules (PC_COMMONAPI     REQUIRED CommonAPI)
pkg_check_modules (PC_COMMONAPIDBUS REQUIRED CommonAPI-DBus)

INCLUDE_DIRECTORIES (${PC_COMMONAPI_INCLUDE_DIRS}
                     ${PC_COMMONAPIDBUS_INCLUDE_DIRS}
                     ./src-gen/)
set (SOURCES_BRO
    ./src-gen/org/genivi/mediamanager/BrowserDBusProxy.cpp
)

add_library("MediaManagerBrowserProxy" ${SOURCES_BRO})

set (SOURCES_PLAYER
    ./src-gen/org/genivi/mediamanager/PlayerDBusProxy.cpp
)

add_library("MediaManagerPlayerProxy" ${SOURCES_PLAYER})

set (SOURCES_INDEXER
    ./src-gen/org/genivi/mediamanager/IndexerDBusProxy.cpp
)

add_library("MediaManagerIndexerProxy" ${SOURCES_INDEXER})
