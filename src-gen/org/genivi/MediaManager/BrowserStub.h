/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Browser_STUB_H_
#define ORG_GENIVI_MEDIAMANAGER_Browser_STUB_H_




#include "Browser.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <CommonAPI/SerializableStruct.h>
#include <cstdint>
#include <string>
#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace MediaManager {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service Browser. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class BrowserStubAdapter: virtual public CommonAPI::StubAdapter, public Browser {
 public:

    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for Browser.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class BrowserStubRemoteEvent {
 public:
    virtual ~BrowserStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service Browser to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class BrowserStub : public CommonAPI::Stub<BrowserStubAdapter , BrowserStubRemoteEvent> {
 public:
    virtual ~BrowserStub() { }


    /**
     * List all containers below the given path.
             returns: A JSON list of all
     *  containers with the given path as parent
             errors: NO_CONNECTION if no
     *  connection can be established to underlying
                      browsing engine
    
     *                   BAD_PATH if path parameter is invalid
     * @param path The path to search for containers. The format of the path
                   
     *  depends on the underlying browsing backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    /// This is the method that will be called on remote calls on the method listContainers.
    virtual void listContainers(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, std::string& containers, Browser::BrowserError& e) = 0;
    /**
     * Extends ListContainers with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    /// This is the method that will be called on remote calls on the method listContainersEx.
    virtual void listContainersEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, Browser::SortKey sortKey, std::string& containers, Browser::BrowserError& e) = 0;
    /**
     * List all items in the given container
             returns: A JSON list of all
     *  items with the given container as parent
             errors: NO_CONNECTION if no
     *  connection can be established to underlying
                      browsing engine
    
     *                   BAD_PATH if path parameter is invalid
     * @param path The path of the container to search for items.
                    The format
     *  of the path depends on the underlying browsing
                    backend
     * @param offset: The offset to use for indexing the results list
     * @param count: The number of results to return, starting from offset
     * @param filter: Array of keys to include in resulting JSON elements
     */
    /// This is the method that will be called on remote calls on the method listItems.
    virtual void listItems(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, std::string& items, Browser::BrowserError& e) = 0;
    /**
     * Extends ListItems with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    /// This is the method that will be called on remote calls on the method listItemsEx.
    virtual void listItemsEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, Browser::SortKey sortKey, std::string& items, Browser::BrowserError& e) = 0;
    /**
     * List all children in the given container
             returns: A JSON list of all
     *  children with the given container as parent
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
     * @param filter: Array of keys to include in resulting JSON elements
     */
    /// This is the method that will be called on remote calls on the method listChildren.
    virtual void listChildren(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, std::string& children, Browser::BrowserError& e) = 0;
    /**
     * Extends ListChildren with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    /// This is the method that will be called on remote calls on the method listChildrenEx.
    virtual void listChildrenEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, uint64_t offset, uint64_t count, std::vector<std::string> filter, Browser::SortKey sortKey, std::string& children, Browser::BrowserError& e) = 0;
    /**
     * Search for children in the given container
             returns: A JSON list of all
     *  children matching the search criteria with
                       the given
     *  container as parent
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
     * @param filter: Array of keys to include in resulting JSON elements
     */
    /// This is the method that will be called on remote calls on the method searchObjects.
    virtual void searchObjects(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, std::string& objects, Browser::BrowserError& e) = 0;
    /**
     * Extends SearchObjects with sorting capabilities
     * @param sortKey Key to sort JSON result list on
     */
    /// This is the method that will be called on remote calls on the method searchObjectsEx.
    virtual void searchObjectsEx(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string query, uint64_t offset, uint64_t count, std::vector<std::string> filter, Browser::SortKey sortKey, std::string& objects, Browser::BrowserError& e) = 0;
    /**
     * Get a list of all initial letters and their index in the
                         
     *  given container
             returns: A JSON list of tuples of initial letters and
     *  their first
                       observed position when sorting according to
     *  sortKey
             errors: NO_CONNECTION if no connection can be established to
     *  underlying
                      browsing engine
                      BAD_PATH if
     *  path parameter is invalid
     * @param container: Container to build index list for
     * @param count: How many (unsorted) items should be traversed to build
                     
     *         index
     * @param filter: List of initial letters to include
     * @param sortKey: Key to sort on when building index list
     */
    /// This is the method that will be called on remote calls on the method listIndexes.
    virtual void listIndexes(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string container, uint64_t count, std::vector<std::string> filter, Browser::SortKey sortKey, std::string& indexes, Browser::BrowserError& e) = 0;
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
    /// This is the method that will be called on remote calls on the method createContainer.
    virtual void createContainer(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string displayName, std::vector<std::string> childTypes, std::string& pathIdentifier, Browser::BrowserError& e) = 0;
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
    /// This is the method that will be called on remote calls on the method createReference.
    virtual void createReference(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string path, std::string objectPath, std::string& pathIdentifier, Browser::BrowserError& e) = 0;
    
};

} // namespace MediaManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Browser_STUB_H_