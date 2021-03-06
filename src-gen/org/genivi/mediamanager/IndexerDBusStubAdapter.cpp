/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.10.201309262002.
*
* 
*/
#include "IndexerDBusStubAdapter.h"
#include <org/genivi/mediamanager/Indexer.h>

namespace org {
namespace genivi {
namespace mediamanager {

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

INITIALIZER(registerIndexerDBusStubAdapter) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(Indexer::getInterfaceId(),
                                                               &createIndexerDBusStubAdapter);
}



IndexerDBusStubAdapterInternal::~IndexerDBusStubAdapterInternal() {
    deactivateManagedInstances();
    IndexerDBusStubAdapterHelper::deinit();
}

void IndexerDBusStubAdapterInternal::deactivateManagedInstances() {

}

const char* IndexerDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"getIndexerStatusAttribute\">\n"
            "<arg name=\"value\" type=\"i\" direction=\"out\" />"
        "</method>\n"
        "<signal name=\"onIndexerStatusAttributeChanged\">\n"
            "<arg name=\"changedValue\" type=\"i\" />\n"
        "</signal>\n"
        /**
         * Get the path to the database file in the host file system.
                            
         *   This is the database file used by LMS to store metadata
         * @param output: Path to database file in host file system
         * @deprecated This is only used for testing purposes and will be removed
         */
        "<method name=\"getDatabasePath\">\n"
            "<arg name=\"output\" type=\"s\" direction=\"out\" />\n"
            "<arg name=\"e\" type=\"i\" direction=\"out\" />\n"
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
            "<arg name=\"e\" type=\"i\" direction=\"out\" />\n"
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
            "<arg name=\"e\" type=\"i\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        IndexerStub,
        CommonAPI::Version
        > IndexerDBusStubAdapterInternal::getIndexerInterfaceVersionStubDispatcher(&IndexerStub::getInterfaceVersion, "uu");

/**
 * Get the current status of the indexer.
 */
CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        IndexerStub,
        Indexer::IndexerStatus
        > IndexerDBusStubAdapterInternal::getIndexerStatusAttributeStubDispatcher(&IndexerStub::getIndexerStatusAttribute, "i");


/**
 * Get the path to the database file in the host file system.
                    
 *   This is the database file used by LMS to store metadata
 * @param output: Path to database file in host file system
 * @deprecated This is only used for testing purposes and will be removed
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<std::string, Indexer::IndexerError>
    > IndexerDBusStubAdapterInternal::getDatabasePathStubDispatcher(&IndexerStub::getDatabasePath, "si");
/**
 * If the indexer is currently IDLE or RUNNING
                      (see
 *  IndexerStatus), stop indexing and set IndexerStatus
                      to
 *  STOPPED.
                      If indexer is currently STOPPED, no action is
 *  taken
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<Indexer::IndexerError>
    > IndexerDBusStubAdapterInternal::stopIndexingStubDispatcher(&IndexerStub::stopIndexing, "i");
/**
 * If indexer is currently STOPPED (see IndexerStatus),
                     
 *  status is changed to RUNNING and indexing is RUNNING. If
                     
 *  the status is IDLE or RUNNING, no action is taken.
                      Note
 *  that the status may go from RUNNING to IDLE directly
                     
 *  after issuing this call, if no files are to be indexed
 */
CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    IndexerStub,
    std::tuple<>,
    std::tuple<Indexer::IndexerError>
    > IndexerDBusStubAdapterInternal::startIndexingStubDispatcher(&IndexerStub::startIndexing, "i");


/**
 * Get the current status of the indexer.
 */
void IndexerDBusStubAdapterInternal::fireIndexerStatusAttributeChanged(const Indexer::IndexerStatus& value) {
    CommonAPI::DBus::DBusStubSignalHelper<CommonAPI::DBus::DBusSerializableArguments<Indexer::IndexerStatus>>
        ::sendSignal(
            *this,
            "onIndexerStatusAttributeChanged",
            "i",
            value
    );
}



const IndexerDBusStubAdapterHelper::StubDispatcherTable& IndexerDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}

const CommonAPI::DBus::StubAttributeTable& IndexerDBusStubAdapterInternal::getStubAttributeTable() {
    return stubAttributeTable_;
}

IndexerDBusStubAdapterInternal::IndexerDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                false),
        IndexerDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<IndexerStub>(stub),
            false),
        stubDispatcherTable_({
            /**
             * Get the current status of the indexer.
             */
            { { "getIndexerStatusAttribute", "" }, &org::genivi::mediamanager::IndexerDBusStubAdapterInternal::getIndexerStatusAttributeStubDispatcher }
            ,
            /**
             * Get the path to the database file in the host file system.
                                
             *   This is the database file used by LMS to store metadata
             * @param output: Path to database file in host file system
             * @deprecated This is only used for testing purposes and will be removed
             */
            { { "getDatabasePath", "" }, &org::genivi::mediamanager::IndexerDBusStubAdapterInternal::getDatabasePathStubDispatcher },
            /**
             * If the indexer is currently IDLE or RUNNING
                                  (see
             *  IndexerStatus), stop indexing and set IndexerStatus
                                  to
             *  STOPPED.
                                  If indexer is currently STOPPED, no action is
             *  taken
             */
            { { "stopIndexing", "" }, &org::genivi::mediamanager::IndexerDBusStubAdapterInternal::stopIndexingStubDispatcher },
            /**
             * If indexer is currently STOPPED (see IndexerStatus),
                                 
             *  status is changed to RUNNING and indexing is RUNNING. If
                                 
             *  the status is IDLE or RUNNING, no action is taken.
                                  Note
             *  that the status may go from RUNNING to IDLE directly
                                 
             *  after issuing this call, if no files are to be indexed
             */
            { { "startIndexing", "" }, &org::genivi::mediamanager::IndexerDBusStubAdapterInternal::startIndexingStubDispatcher }
            }),
        stubAttributeTable_() {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &org::genivi::mediamanager::IndexerDBusStubAdapterInternal::getIndexerInterfaceVersionStubDispatcher });
}

const bool IndexerDBusStubAdapterInternal::hasFreedesktopProperties() {
    return false;
}

} // namespace mediamanager
} // namespace genivi
} // namespace org
