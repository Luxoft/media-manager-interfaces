/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#include "IndexerDBusStubAdapter.h"
#include <org/genivi/MediaManager/Indexer.h>

namespace org {
namespace genivi {
namespace MediaManager {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createIndexerDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<IndexerDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

__attribute__((constructor)) void registerIndexerDBusStubAdapter(void) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(Indexer::getInterfaceId(),
                                                               &createIndexerDBusStubAdapter);
}

IndexerDBusStubAdapter::IndexerDBusStubAdapter(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        IndexerDBusStubAdapterHelper(factory, commonApiAddress, dbusInterfaceName, dbusBusName, dbusObjectPath, 
            dbusConnection, std::dynamic_pointer_cast<IndexerStub>(stub),
            false) {
}

IndexerDBusStubAdapter::~IndexerDBusStubAdapter() {
    deactivateManagedInstances();
    deinit();
    stub_.reset();
}

void IndexerDBusStubAdapter::deactivateManagedInstances() {
}

const char* IndexerDBusStubAdapter::getMethodsDBusIntrospectionXmlData() const {
    static const char* introspectionData =
        "<method name=\"getIndexerStatusAttribute\">\n"
            "<arg name=\"value\" type=\"u\" direction=\"out\" />"
        "</method>\n"
        "<signal name=\"onIndexerStatusAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"u\" />\n"
        "</signal>\n"
        /**
         * Get the path to the database file in the host file system.
                            
         *   This is the database file used by LMS to store metadata
         * @param output: Path to database file in host file system
         * @deprecated This is only used for terting purposes ansd will be removed
         */
        "<method name=\"getDatabasePath\">\n"
            "<arg name=\"output\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"
        /**
         * If the indexer is currently IDLE or RUNNING
                              (see
         *  IndexerStatus), stop indexing and set IndexerStatus
                              to
         *  STOPPED.
                              If indexer is currently STOPPED, no action is
         *  taken
         */
        "<method name=\"stopIndexing\">\n"
        "</method>\n"
        /**
         * If indexer is currently STOPPED (see IndexerStatus),
                             
         *  status is changed to RUNNING and indexing is RUNNING. If
                             
         *  the status is IDLE or RUNNING, no action is taken.
                              Note
         *  that the status may go from RUNNING to IDLE directly
                             
         *  after issuing this call, if no files are to be indexed
         */
        "<method name=\"startIndexing\">\n"
        "</method>\n"
        
    ;
    return introspectionData;
}


/**
 * Get the current status of the indexer.
 */
static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        IndexerStub,
        Indexer::IndexerStatus
        > getIndexerStatusAttributeStubDispatcher(&IndexerStub::getIndexerStatusAttribute, "u");


/**
 * Get the path to the database file in the host file system.
                    
 *   This is the database file used by LMS to store metadata
 * @param output: Path to database file in host file system
 * @deprecated This is only used for terting purposes ansd will be removed
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<std::string>
    > getDatabasePathStubDispatcher(&IndexerStub::getDatabasePath, "s");
/**
 * If the indexer is currently IDLE or RUNNING
                      (see
 *  IndexerStatus), stop indexing and set IndexerStatus
                      to
 *  STOPPED.
                      If indexer is currently STOPPED, no action is
 *  taken
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<>
    > stopIndexingStubDispatcher(&IndexerStub::stopIndexing, "");
/**
 * If indexer is currently STOPPED (see IndexerStatus),
                     
 *  status is changed to RUNNING and indexing is RUNNING. If
                     
 *  the status is IDLE or RUNNING, no action is taken.
                      Note
 *  that the status may go from RUNNING to IDLE directly
                     
 *  after issuing this call, if no files are to be indexed
 */
static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<>
    > startIndexingStubDispatcher(&IndexerStub::startIndexing, "");

/**
 * Get the current status of the indexer.
 */
void IndexerDBusStubAdapter::fireIndexerStatusAttributeChanged(const Indexer::IndexerStatus& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerStatus>>
        ::sendSignal(
            *this,
            "onIndexerStatusAttributeChanged",
            "u",
            value
    );
}


const IndexerDBusStubAdapter::StubDispatcherTable& IndexerDBusStubAdapter::getStubDispatcherTable() {
    static const IndexerDBusStubAdapter::StubDispatcherTable stubDispatcherTable = {
            /**
             * Get the current status of the indexer.
             */
            { { "getIndexerStatusAttribute", "" }, &org::genivi::MediaManager::getIndexerStatusAttributeStubDispatcher }
            ,
            /**
             * Get the path to the database file in the host file system.
                                
             *   This is the database file used by LMS to store metadata
             * @param output: Path to database file in host file system
             * @deprecated This is only used for terting purposes ansd will be removed
             */
            { { "getDatabasePath", "" }, &org::genivi::MediaManager::getDatabasePathStubDispatcher },
            /**
             * If the indexer is currently IDLE or RUNNING
                                  (see
             *  IndexerStatus), stop indexing and set IndexerStatus
                                  to
             *  STOPPED.
                                  If indexer is currently STOPPED, no action is
             *  taken
             */
            { { "stopIndexing", "" }, &org::genivi::MediaManager::stopIndexingStubDispatcher },
            /**
             * If indexer is currently STOPPED (see IndexerStatus),
                                 
             *  status is changed to RUNNING and indexing is RUNNING. If
                                 
             *  the status is IDLE or RUNNING, no action is taken.
                                  Note
             *  that the status may go from RUNNING to IDLE directly
                                 
             *  after issuing this call, if no files are to be indexed
             */
            { { "startIndexing", "" }, &org::genivi::MediaManager::startIndexingStubDispatcher }
            };
    return stubDispatcherTable;
}


} // namespace MediaManager
} // namespace genivi
} // namespace org