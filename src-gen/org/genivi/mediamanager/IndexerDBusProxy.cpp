/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
/**
 * Indexer control interface. Allows administerial tasks for
                  the
 *  indexer backend, such as starting, stopping and requesting
                 
 *  status of the indexer.
                  For querying the database, please
 *  see
                  org.genivi.mediamanager.Browser
 */
#include "IndexerDBusProxy.h"

namespace org {
namespace genivi {
namespace mediamanager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createIndexerDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<IndexerDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

INITIALIZER(registerIndexerDBusProxy) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(Indexer::getInterfaceId(),
       &createIndexerDBusProxy);
}

IndexerDBusProxy::IndexerDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,indexerStatus_(*this, "onIndexerStatusAttributeChanged", "u", "getIndexerStatusAttribute")
    {
    }

IndexerDBusProxy::IndexerStatusAttribute& IndexerDBusProxy::getIndexerStatusAttribute() {
    return indexerStatus_;
}


/**
 * Get the path to the database file in the host file system.
                    
 *   This is the database file used by LMS to store metadata
 * @param output: Path to database file in host file system
 * @deprecated This is only used for testing purposes and will be removed
 */
COMMONAPI_DEPRECATED void IndexerDBusProxy::getDatabasePath(CommonAPI::CallStatus& callStatus, std::string& output, Indexer::IndexerError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, Indexer::IndexerError> >::callMethodWithReply(
        *this,
        "getDatabasePath",
        "",
        callStatus
        , output, e);
}
std::future<CommonAPI::CallStatus> IndexerDBusProxy::getDatabasePathAsync(GetDatabasePathAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, Indexer::IndexerError> >::callMethodAsync(
        *this,
        "getDatabasePath",
        "",
        std::move(callback));
}
/**
 * If the indexer is currently IDLE or RUNNING
                      (see
 *  IndexerStatus), stop indexing and set IndexerStatus
                      to
 *  STOPPED.
                      If indexer is currently STOPPED, no action is
 *  taken
 */
void IndexerDBusProxy::stopIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerError> >::callMethodWithReply(
        *this,
        "stopIndexing",
        "",
        callStatus
        , e);
}
std::future<CommonAPI::CallStatus> IndexerDBusProxy::stopIndexingAsync(StopIndexingAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerError> >::callMethodAsync(
        *this,
        "stopIndexing",
        "",
        std::move(callback));
}
/**
 * If indexer is currently STOPPED (see IndexerStatus),
                     
 *  status is changed to RUNNING and indexing is RUNNING. If
                     
 *  the status is IDLE or RUNNING, no action is taken.
                      Note
 *  that the status may go from RUNNING to IDLE directly
                     
 *  after issuing this call, if no files are to be indexed
 */
void IndexerDBusProxy::startIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerError> >::callMethodWithReply(
        *this,
        "startIndexing",
        "",
        callStatus
        , e);
}
std::future<CommonAPI::CallStatus> IndexerDBusProxy::startIndexingAsync(StartIndexingAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerError> >::callMethodAsync(
        *this,
        "startIndexing",
        "",
        std::move(callback));
}



void IndexerDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace mediamanager
} // namespace genivi
} // namespace org
