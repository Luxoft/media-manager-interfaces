/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.10.201309262002.
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
#ifndef ORG_GENIVI_MEDIAMANAGER_Indexer_DBUS_PROXY_H_
#define ORG_GENIVI_MEDIAMANAGER_Indexer_DBUS_PROXY_H_

#include <org/genivi/mediamanager/IndexerProxyBase.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>
#include <CommonAPI/DBus/DBusAttribute.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace org {
namespace genivi {
namespace mediamanager {

class IndexerDBusProxy: virtual public IndexerProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    IndexerDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~IndexerDBusProxy() { }

    virtual IndexerStatusAttribute& getIndexerStatusAttribute();


    /**
     * Get the path to the database file in the host file system.
                        
     *   This is the database file used by LMS to store metadata
     * @param output: Path to database file in host file system
     * @deprecated This is only used for testing purposes and will be removed
     */
    virtual COMMONAPI_DEPRECATED void getDatabasePath(CommonAPI::CallStatus& callStatus, std::string& output, Indexer::IndexerError& e);
    virtual std::future<CommonAPI::CallStatus> getDatabasePathAsync(GetDatabasePathAsyncCallback callback);
    /**
     * If the indexer is currently IDLE or RUNNING
                          (see
     *  IndexerStatus), stop indexing and set IndexerStatus
                          to
     *  STOPPED.
                          If indexer is currently STOPPED, no action is
     *  taken
     */
    virtual void stopIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e);
    virtual std::future<CommonAPI::CallStatus> stopIndexingAsync(StopIndexingAsyncCallback callback);
    /**
     * If indexer is currently STOPPED (see IndexerStatus),
                         
     *  status is changed to RUNNING and indexing is RUNNING. If
                         
     *  the status is IDLE or RUNNING, no action is taken.
                          Note
     *  that the status may go from RUNNING to IDLE directly
                         
     *  after issuing this call, if no files are to be indexed
     */
    virtual void startIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e);
    virtual std::future<CommonAPI::CallStatus> startIndexingAsync(StartIndexingAsyncCallback callback);


    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:
   CommonAPI::DBus::DBusObservableAttribute<CommonAPI::DBus::DBusReadonlyAttribute<IndexerStatusAttribute>> indexerStatus_;


};



} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Indexer_DBUS_PROXY_H_
