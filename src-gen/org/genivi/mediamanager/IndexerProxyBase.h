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
#ifndef ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_H_
#define ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_H_

#include "Indexer.h"


#include <org/genivi/mediamanager/MediaTypes.h>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Attribute.h>
#include <CommonAPI/Proxy.h>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace mediamanager {

class IndexerProxyBase: virtual public CommonAPI::Proxy {
 public:
    typedef CommonAPI::ObservableReadonlyAttribute<Indexer::IndexerStatus> IndexerStatusAttribute;

    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const Indexer::IndexerError&)> GetDatabasePathAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const Indexer::IndexerError&)> StopIndexingAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const Indexer::IndexerError&)> StartIndexingAsyncCallback;

    /**
     * Get the current status of the indexer.
     */
    virtual IndexerStatusAttribute& getIndexerStatusAttribute() = 0;


    /**
     * Get the path to the database file in the host file system.
                        
     *   This is the database file used by LMS to store metadata
     * @param output: Path to database file in host file system
     * @deprecated This is only used for testing purposes and will be removed
     */
    virtual COMMONAPI_DEPRECATED void getDatabasePath(CommonAPI::CallStatus& callStatus, std::string& output, Indexer::IndexerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> getDatabasePathAsync(GetDatabasePathAsyncCallback callback) = 0;
    /**
     * If the indexer is currently IDLE or RUNNING
                          (see
     *  IndexerStatus), stop indexing and set IndexerStatus
                          to
     *  STOPPED.
                          If indexer is currently STOPPED, no action is
     *  taken
     */
    virtual void stopIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> stopIndexingAsync(StopIndexingAsyncCallback callback) = 0;
    /**
     * If indexer is currently STOPPED (see IndexerStatus),
                         
     *  status is changed to RUNNING and indexing is RUNNING. If
                         
     *  the status is IDLE or RUNNING, no action is taken.
                          Note
     *  that the status may go from RUNNING to IDLE directly
                         
     *  after issuing this call, if no files are to be indexed
     */
    virtual void startIndexing(CommonAPI::CallStatus& callStatus, Indexer::IndexerError& e) = 0;
    virtual std::future<CommonAPI::CallStatus> startIndexingAsync(StartIndexingAsyncCallback callback) = 0;
};

} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Indexer_PROXY_BASE_H_
