/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.4.
* Used org.franca.core 0.8.9.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Player_STUB_H_
#define ORG_GENIVI_MEDIAMANAGER_Player_STUB_H_




#include "Player.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.h>
#include <CommonAPI/OutputStream.h>
#include <cstdint>
#include <vector>

#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace MediaManager {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service Player. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class PlayerStubAdapter: virtual public CommonAPI::StubAdapter, public Player {
 public:
    ///Notifies all remote listeners about a change of value of the attribute mute.
    virtual void fireMuteAttributeChanged(const Player::MuteStatus& mute) = 0;
    ///Notifies all remote listeners about a change of value of the attribute shuffle.
    virtual void fireShuffleAttributeChanged(const Player::ShuffleStatus& shuffle) = 0;
    ///Notifies all remote listeners about a change of value of the attribute repeat.
    virtual void fireRepeatAttributeChanged(const Player::RepeatStatus& repeat) = 0;
    ///Notifies all remote listeners about a change of value of the attribute rate.
    virtual void fireRateAttributeChanged(const Player::RateStatus& rate) = 0;
    ///Notifies all remote listeners about a change of value of the attribute volume.
    virtual void fireVolumeAttributeChanged(const double& volume) = 0;
    ///Notifies all remote listeners about a change of value of the attribute canGoNext.
    virtual void fireCanGoNextAttributeChanged(const bool& canGoNext) = 0;
    ///Notifies all remote listeners about a change of value of the attribute canGoPrevious.
    virtual void fireCanGoPreviousAttributeChanged(const bool& canGoPrevious) = 0;
    ///Notifies all remote listeners about a change of value of the attribute canPause.
    virtual void fireCanPauseAttributeChanged(const bool& canPause) = 0;
    ///Notifies all remote listeners about a change of value of the attribute canPlay.
    virtual void fireCanPlayAttributeChanged(const bool& canPlay) = 0;
    ///Notifies all remote listeners about a change of value of the attribute canSeek.
    virtual void fireCanSeekAttributeChanged(const bool& canSeek) = 0;
    ///Notifies all remote listeners about a change of value of the attribute currentTrack.
    virtual void fireCurrentTrackAttributeChanged(const uint64_t& currentTrack) = 0;
    ///Notifies all remote listeners about a change of value of the attribute playbackStatus.
    virtual void firePlaybackStatusAttributeChanged(const Player::PlaybackStatus& playbackStatus) = 0;

    
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for Player.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class PlayerStubRemoteEvent {
 public:
    virtual ~PlayerStubRemoteEvent() { }

    /// Verification callback for remote set requests on the attribute mute
    virtual bool onRemoteSetMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::MuteStatus mute) = 0;
    /// Action callback for remote set requests on the attribute mute
    virtual void onRemoteMuteAttributeChanged() = 0;

    /// Verification callback for remote set requests on the attribute shuffle
    virtual bool onRemoteSetShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::ShuffleStatus shuffle) = 0;
    /// Action callback for remote set requests on the attribute shuffle
    virtual void onRemoteShuffleAttributeChanged() = 0;

    /// Verification callback for remote set requests on the attribute repeat
    virtual bool onRemoteSetRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::RepeatStatus repeat) = 0;
    /// Action callback for remote set requests on the attribute repeat
    virtual void onRemoteRepeatAttributeChanged() = 0;

    /// Verification callback for remote set requests on the attribute rate
    virtual bool onRemoteSetRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::RateStatus rate) = 0;
    /// Action callback for remote set requests on the attribute rate
    virtual void onRemoteRateAttributeChanged() = 0;

    /// Verification callback for remote set requests on the attribute volume
    virtual bool onRemoteSetVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double volume) = 0;
    /// Action callback for remote set requests on the attribute volume
    virtual void onRemoteVolumeAttributeChanged() = 0;









};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service Player to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class PlayerStub : public CommonAPI::Stub<PlayerStubAdapter , PlayerStubRemoteEvent> {
 public:
    virtual ~PlayerStub() { }

    /**
     * Mute or unmute audio. When muted, the player backend will
                         
     *  not produce any audio output.
     */
    /// Provides getter access to the attribute mute
    virtual const Player::MuteStatus& getMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Shuffle or unshuffle the current play queue. Shuffling,
                      
     *  un-shuffling and then re-shuffling will yield two different
                      
     *  shufflings (which are not guaranteed to be different)
     */
    /// Provides getter access to the attribute shuffle
    virtual const Player::ShuffleStatus& getShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Toggle repeat for the current playlist. If enabled,
                         
     *  playback will continue with the first item of the current
                        
     *   play queue when the last item has finished playing
     */
    /// Provides getter access to the attribute repeat
    virtual const Player::RepeatStatus& getRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Set the playback rate
     */
    /// Provides getter access to the attribute rate
    virtual const Player::RateStatus& getRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Get or set volume, 0 is muted, and 1.0 means maximum
                         
     *  volume. Values outside this range will be capped
     */
    /// Provides getter access to the attribute volume
    virtual const double& getVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates whether Next() is available
     */
    /// Provides getter access to the attribute canGoNext
    virtual const bool& getCanGoNextAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates whether Previous() is available
     */
    /// Provides getter access to the attribute canGoPrevious
    virtual const bool& getCanGoPreviousAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates whether Pause() is available
     */
    /// Provides getter access to the attribute canPause
    virtual const bool& getCanPauseAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates whether Play() is available
     */
    /// Provides getter access to the attribute canPlay
    virtual const bool& getCanPlayAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates whether Seek and SetPosition() are available
     */
    /// Provides getter access to the attribute canSeek
    virtual const bool& getCanSeekAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates the index in the play queue of the currently
                         
     *  playing track
     */
    /// Provides getter access to the attribute currentTrack
    virtual const uint64_t& getCurrentTrackAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates current playback status
     */
    /// Provides getter access to the attribute playbackStatus
    virtual const Player::PlaybackStatus& getPlaybackStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;
    /**
     * Indicates current position in the currently playing
                          track
     */
    /// Provides getter access to the attribute position
    virtual const uint64_t& getPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) = 0;

    /**
     * Skip to the next track in the play queue. If there is no
                          
     *  next track, playback is stopped. If playback is paused or
                        
     *    stopped, this function will set the next plack to be
                          
     *  played once playback is activated
     */
    /// This is the method that will be called on remote calls on the method next.
    virtual void next(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Open the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                       NO_ERROR    On success
     * @param uri URI of media to play, uri format is decided by backend
     */
    /// This is the method that will be called on remote calls on the method openUri.
    virtual void openUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, Player::PlayerError& e) = 0;
    /**
     * Enqueue the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                      NO_ERROR    On success
     * @param uri URI of media to enqueue, uri format is decided by backend
     */
    /// This is the method that will be called on remote calls on the method enqueueUri.
    virtual void enqueueUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, Player::PlayerError& e) = 0;
    /**
     * Dequeue the item with the supplied index in the playback
                         
     *  engine.
     * @param pos index of media to dequeue
     */
    /// This is the method that will be called on remote calls on the method dequeueIndex.
    virtual void dequeueIndex(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, Player::PlayerError& e) = 0;
    /**
     * Retrieve the current play queue in JSON format
             returns: Current play
     *  queue in JSON format
     */
    /// This is the method that will be called on remote calls on the method getCurrentPlayQueue.
    virtual void getCurrentPlayQueue(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& playQueue, Player::PlayerError& e) = 0;
    /**
     * Dequeue all elementrs, emptying the play queue
     */
    /// This is the method that will be called on remote calls on the method dequeueAll.
    virtual void dequeueAll(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Use the supplied playlist as the current play queue. If
                         
     *  the play queue is invalid, the old play queue is
                         
     *  untouched.
             returns: BAD_PLAYLIST If playlist can not be loaded
          
     *              NO_ERROR     On success
     */
    /// This is the method that will be called on remote calls on the method openPlaylist.
    virtual void openPlaylist(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, Player::PlayerError& e) = 0;
    /**
     * Pause playback in the playback engine.
                           If already
     *  paused, this has no effect
                           Note: If CanPause is false,
     *  this has no effect
     */
    /// This is the method that will be called on remote calls on the method pause.
    virtual void pause(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Start or resume playback in the playback engine.
                           If
     *  playback is already commencing, this has not effect.
                           If
     *  paused, playback resumes from the current position.
                           If
     *  there is no track to play, calling this has no effect
                          
     *  Note: If CanPlay is false, this has no effect
     */
    /// This is the method that will be called on remote calls on the method play.
    virtual void play(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Starts playback (see Play) if paused
                          Pauses playback (see
     *  Pause) is playing
     */
    /// This is the method that will be called on remote calls on the method playPause.
    virtual void playPause(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Loads previous track in play queue
                          If there is no
     *  previous track, playback is stopped
                          If playback is
     *  stopped or paused, it remains this way,
                          but the next
     *  track to be played will the set
                          by this function
           
     *                Note: If CanGoPrevious is false, this has no effect
     */
    /// This is the method that will be called on remote calls on the method previous.
    virtual void previous(const std::shared_ptr<CommonAPI::ClientId> clientId, Player::PlayerError& e) = 0;
    /**
     * Seek relatively in the current track
                          If a negative seek
     *  leads to a play position less than 0,
                          the play position
     *  will be set to 0.
                          If a positive seek leads outside the
     *  length of the current
                          track, this is treated like a call
     *  to Next()
                          Note: If CanSeek is false, this has no effect
     * @param pos Relative seek amount in microseconds
     */
    /// This is the method that will be called on remote calls on the method seek.
    virtual void seek(const std::shared_ptr<CommonAPI::ClientId> clientId, int64_t pos, Player::PlayerError& e) = 0;
    /**
     * Jump to the specified position in the current
                           If the
     *  position is not within range of the current track,
                           do
     *  nothing
             Note: If CanSeek is false, this has no effect
     * @param pos Absolute position in microseconds
     */
    /// This is the method that will be called on remote calls on the method setPosition.
    virtual void setPosition(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, Player::PlayerError& e) = 0;
    
};

} // namespace MediaManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Player_STUB_H_
