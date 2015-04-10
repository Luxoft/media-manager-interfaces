/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.10.201309262002.
*
* 
*/
#include <org/genivi/mediamanager/BrowserStubDefault.h>

namespace org {
namespace genivi {
namespace mediamanager {

BrowserStubDefault::BrowserStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Browser::getInterfaceVersion()) {
}

const CommonAPI::Version& BrowserStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

BrowserStubRemoteEvent* BrowserStubDefault::initStubAdapter(const std::shared_ptr<BrowserStubAdapter>& stubAdapter) {
    CommonAPI::Stub<BrowserStubAdapter, BrowserStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


/**
 * Return a list of all media manager identifiers. These are
         used to
 *  indicate which media manager we should interact with.
         returns: A list
 *  of all media managers found
 */
void BrowserStubDefault::discoverMediaManagers(const std::shared_ptr<CommonAPI::ClientId> clientId, std::vector<std::string>& identifiers, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    discoverMediaManagers(identifiers, e);
}
void BrowserStubDefault::discoverMediaManagers(std::vector<std::string>& identifiers, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::listContainers(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listContainers(path, offset, count, filter, m, e);
}
void BrowserStubDefault::listContainers(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
}

/**
 * Extends ListContainers with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserStubDefault::listContainersEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listContainersEx(path, offset, count, filter, sortKey, m, e);
}
void BrowserStubDefault::listContainersEx(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::listItems(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listItems(path, offset, count, filter, m, e);
}
void BrowserStubDefault::listItems(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
}

/**
 * Extends ListItems with sorting capabilities
 * @param sortKey Key to sort ResultMapList
 */
void BrowserStubDefault::listItemsEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listItemsEx(path, offset, count, filter, sortKey, m, e);
}
void BrowserStubDefault::listItemsEx(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::listChildren(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listChildren(path, offset, count, filter, m, e);
}
void BrowserStubDefault::listChildren(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
}

/**
 * Extends ListChildren with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserStubDefault::listChildrenEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listChildrenEx(path, offset, count, filter, sortKey, m, e);
}
void BrowserStubDefault::listChildrenEx(std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::searchObjects(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    searchObjects(path, query, offset, count, filter, m, e);
}
void BrowserStubDefault::searchObjects(std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
}

/**
 * Extends SearchObjects with sorting capabilities
 * @param sortKey Key to sort ResultMapList on
 */
void BrowserStubDefault::searchObjectsEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    searchObjectsEx(path, query, offset, count, filter, sortKey, m, e);
}
void BrowserStubDefault::searchObjectsEx(std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, MediaTypes::ResultMapList& m, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::listIndexes(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string container, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, std::string& indexes, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    listIndexes(container, count, filter, sortKey, indexes, e);
}
void BrowserStubDefault::listIndexes(std::string container, uint64_t count, std::vector<std::string> filter, BrowserTypes::SortKey sortKey, std::string& indexes, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::createContainer(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string displayName, std::vector<std::string> childTypes, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    createContainer(path, displayName, childTypes, pathIdentifier, e);
}
void BrowserStubDefault::createContainer(std::string path, std::string displayName, std::vector<std::string> childTypes, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    // No operation in default
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
void BrowserStubDefault::createReference(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string objectPath, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    // Call old style methods in default 
    createReference(path, objectPath, pathIdentifier, e);
}
void BrowserStubDefault::createReference(std::string path, std::string objectPath, std::string& pathIdentifier, BrowserTypes::BrowserError& e) {
    // No operation in default
}




BrowserStubDefault::RemoteEventHandler::RemoteEventHandler(BrowserStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace mediamanager
} // namespace genivi
} // namespace org
