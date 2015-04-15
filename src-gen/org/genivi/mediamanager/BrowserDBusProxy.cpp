/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.10.201309262002.
*
* 
*/
#include "BrowserDBusProxy.h"

namespace org {
namespace genivi {
namespace mediamanager {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createBrowserDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<BrowserDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

INITIALIZER(registerBrowserDBusProxy) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(Browser::getInterfaceId(),
       &createBrowserDBusProxy);
}

BrowserDBusProxy::BrowserDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,        lostServer_(*this, "lostServer", "s"),
        foundServer_(*this, "foundServer", "s")
    {
    }


BrowserDBusProxy::LostServerEvent& BrowserDBusProxy::getLostServerEvent() {
    return lostServer_;
}
BrowserDBusProxy::FoundServerEvent& BrowserDBusProxy::getFoundServerEvent() {
    return foundServer_;
}

/**
 * Return a list of all media manager identifiers. These are
         used to
 *  indicate which media manager we should interact with.
         returns: A list
 *  of all media managers found
 */
void BrowserDBusProxy::discoverMediaManagers(CommonAPI::CallStatus& callStatus, std::vector<std::string>& identifiers, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::vector<std::string>, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "discoverMediaManagers",
        "",
        callStatus
        , identifiers, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::discoverMediaManagersAsync(DiscoverMediaManagersAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::vector<std::string>, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "discoverMediaManagers",
        "",
        std::move(callback));
}
/**
 * List all containers below the given path.
         returns: ResultMapList of
 *  all containers with the given path as parent.
         	   	  See
 *  MediaTypes.fidl for a list of allowed keys.
         errors: NO_CONNECTION if
 *  no connection can be established to underlying
                 browsing
 *  engine
                 BAD_PATH if path parameter is invalid
 * @param path The path to search for containers. The format of the path
               
 *  depends on the underlying browsing backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting ResultMapList
 */
void BrowserDBusProxy::listContainers(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listContainers",
        "sttas",
        path, offset, count, filter,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listContainersAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListContainersAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listContainers",
        "sttas",
        path, offset, count, filter, 
        std::move(callback));
}
/**
 * Extends ListContainers with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserDBusProxy::listContainersEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listContainersEx",
        "sttas(is)",
        path, offset, count, filter, sortKey,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listContainersExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, ListContainersExAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listContainersEx",
        "sttas(is)",
        path, offset, count, filter, sortKey, 
        std::move(callback));
}
/**
 * List all items in the given container
         returns: A ResultMapList of all
 *  items with the given container as parent.
         		  See MediaTypes.fidl for
 *  a list of allowed keys.
         errors: NO_CONNECTION if no connection can be
 *  established to underlying
                 browsing engine
                
 *  BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for items.
                The format
 *  of the path depends on the underlying browsing
                backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting ResultMapList
 */
void BrowserDBusProxy::listItems(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listItems",
        "sttas",
        path, offset, count, filter,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listItemsAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListItemsAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listItems",
        "sttas",
        path, offset, count, filter, 
        std::move(callback));
}
/**
 * Extends ListItems with sorting capabilities
 * @param sortKey Key to sort ResultMapList
 */
void BrowserDBusProxy::listItemsEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listItemsEx",
        "sttas(is)",
        path, offset, count, filter, sortKey,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listItemsExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, ListItemsExAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listItemsEx",
        "sttas(is)",
        path, offset, count, filter, sortKey, 
        std::move(callback));
}
/**
 * List all children in the given container
         returns: A ResultMapList of
 *  all children with the given container as parent.
         		  See
 *  MediaTypes.fidl for a list of allowed keys.
         errors: NO_CONNECTION if
 *  no connection can be established to underlying
                  browsing
 *  engine
                  BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for children.
                The
 *  format of the path depends on the underlying browsing
                backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting ResultMapList
 */
void BrowserDBusProxy::listChildren(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listChildren",
        "sttas",
        path, offset, count, filter,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listChildrenAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, ListChildrenAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listChildren",
        "sttas",
        path, offset, count, filter, 
        std::move(callback));
}
/**
 * Extends ListChildren with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserDBusProxy::listChildrenEx(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listChildrenEx",
        "sttas(is)",
        path, offset, count, filter, sortKey,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listChildrenExAsync(const std::string& path, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, ListChildrenExAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listChildrenEx",
        "sttas(is)",
        path, offset, count, filter, sortKey, 
        std::move(callback));
}
/**
 * Search for children in the given container
         returns: A ResultMapList of
 *  all children matching the search criteria with
                   the given
 *  container as parent.See MediaTypes.fidl for a list of
                  
 *  allowed keys.
         errors: NO_CONNECTION if no connection can be
 *  established to underlying
                 browsing engine
                
 *  BAD_PATH if path parameter is invalid
 * @param path The path of the container to search for children.
                The
 *  format of the path depends on the underlying browsing
                backend
 * @param query Search query to match children against. The format of the
               
 *  query depends on the underlying browsing backend
 * @param offset: The offset to use for indexing the results list
 * @param count: The number of results to return, starting from offset
 * @param filter: Array of keys to include in resulting ResultMapList
 */
void BrowserDBusProxy::searchObjects(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "searchObjects",
        "ssttas",
        path, query, offset, count, filter,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::searchObjectsAsync(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, SearchObjectsAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "searchObjects",
        "ssttas",
        path, query, offset, count, filter, 
        std::move(callback));
}
/**
 * Extends SearchObjects with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserDBusProxy::searchObjectsEx(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, CommonAPI::CallStatus& callStatus, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "searchObjectsEx",
        "ssttas(is)",
        path, query, offset, count, filter, sortKey,
        callStatus
        , m, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::searchObjectsExAsync(const std::string& path, const std::string& query, const uint64_t& offset, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, SearchObjectsExAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, uint64_t, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<MediaTypes::ResultMapList, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "searchObjectsEx",
        "ssttas(is)",
        path, query, offset, count, filter, sortKey, 
        std::move(callback));
}
/**
 * Get a list of all initial letters and their index in the
                     
 *  given container
         returns: A list of tuples of initial letters and
 *  their first
                   observed position when sorting according to
 *  sortKey
         errors: NO_CONNECTION if no connection can be established to
 *  underlying
                 browsing engine
                 BAD_PATH if path
 *  parameter is invalid
 * @param container: Container to build index list for
 * @param count: How many (unsorted) items should be traversed to build
                 
 *         index
 * @param filter: List of initial letters to include
 * @param sortKey: Key to sort on when building index list
 */
void BrowserDBusProxy::listIndexes(const std::string& container, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, CommonAPI::CallStatus& callStatus, std::string& indexes, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "listIndexes",
        "stas(is)",
        container, count, filter, sortKey,
        callStatus
        , indexes, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::listIndexesAsync(const std::string& container, const uint64_t& count, const std::vector<std::string>& filter, const BrowserTypes::SortKey& sortKey, ListIndexesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, uint64_t, std::vector<std::string>, BrowserTypes::SortKey>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "listIndexes",
        "stas(is)",
        container, count, filter, sortKey, 
        std::move(callback));
}
/**
 * Create a new empty container with path used as root
         returns: Path
 *  identifier for the newly created container
         errors: NO_CONNECTION if
 *  no connection can be established to underlying
                  browsing
 *  engine
                  BAD_PATH if path parameter is invalid
 * @param path: Path to place the newly created container in
 * @param displayName: Display name for the new container
 * @param childTypes: Array of allowed types on children in new container
 */
void BrowserDBusProxy::createContainer(const std::string& path, const std::string& displayName, const std::vector<std::string>& childTypes, CommonAPI::CallStatus& callStatus, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "createContainer",
        "ssas",
        path, displayName, childTypes,
        callStatus
        , pathIdentifier, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::createContainerAsync(const std::string& path, const std::string& displayName, const std::vector<std::string>& childTypes, CreateContainerAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string, std::vector<std::string>>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "createContainer",
        "ssas",
        path, displayName, childTypes, 
        std::move(callback));
}
/**
 * Place a reference in a container, pointing to an object
         returns: Path
 *  identifier for the container containing the reference
         errors:
 *  NO_CONNECTION if no connection can be established to underlying
              
 *     browsing engine
                  BAD_PATH if path parameter is invalid
 * @param path: Path to place the newly created container in
 * @param objectPath: Path to object to create reference to
 */
void BrowserDBusProxy::createReference(const std::string& path, const std::string& objectPath, CommonAPI::CallStatus& callStatus, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodWithReply(
        *this,
        "createReference",
        "ss",
        path, objectPath,
        callStatus
        , pathIdentifier, e);
}
std::future<CommonAPI::CallStatus> BrowserDBusProxy::createReferenceAsync(const std::string& path, const std::string& objectPath, CreateReferenceAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<std::string, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<std::string, BrowserTypes::BrowserError> >::callMethodAsync(
        *this,
        "createReference",
        "ss",
        path, objectPath, 
        std::move(callback));
}



void BrowserDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace mediamanager
} // namespace genivi
} // namespace org
