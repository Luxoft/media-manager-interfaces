/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#pragma once

#include <org/genivi/mediamanager/PlayerStub.h>
#include <sstream>
#include <assert.h>

namespace org {
namespace genivi {
namespace mediamanager {

/**
 * Provides an abstract implementation for PlayerStub.
 * That abstract class is suitable if your service ignores which client is interactng with it.
 * All the methods and attribute getters/setters are pure virtual, which ensures that any change in the interface
 * definition will likely cause a compile error in the service implementation.
 */
class PlayerServiceAbstract : public PlayerStub {
 public:
    PlayerServiceAbstract() :
        remoteEventHandler_(this), interfaceVersion_(Player::getInterfaceVersion()) {
}

    PlayerStubRemoteEvent* initStubAdapter(const std::shared_ptr<PlayerStubAdapter>& stubAdapter) {
    stubAdapters_.push_back(stubAdapter);
    return &remoteEventHandler_;
}


virtual const PlayerTypes::MuteStatus& getMuteAttribute() = 0 ;

void fireMuteAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireMuteAttributeChanged(getMuteAttribute());
}

const PlayerTypes::MuteStatus& getMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getMuteAttribute();
}

void setMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value) {
    setMuteAttribute(value);
}

virtual void setMuteAttribute(PlayerTypes::MuteStatus value) = 0;


virtual const PlayerTypes::ShuffleStatus& getShuffleAttribute() = 0 ;

void fireShuffleAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireShuffleAttributeChanged(getShuffleAttribute());
}

const PlayerTypes::ShuffleStatus& getShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getShuffleAttribute();
}

void setShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value) {
    setShuffleAttribute(value);
}

virtual void setShuffleAttribute(PlayerTypes::ShuffleStatus value) = 0;


virtual const PlayerTypes::RepeatStatus& getRepeatAttribute() = 0 ;

void fireRepeatAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireRepeatAttributeChanged(getRepeatAttribute());
}

const PlayerTypes::RepeatStatus& getRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRepeatAttribute();
}

void setRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value) {
    setRepeatAttribute(value);
}

virtual void setRepeatAttribute(PlayerTypes::RepeatStatus value) = 0;


virtual const double& getRateAttribute() = 0 ;

void fireRateAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireRateAttributeChanged(getRateAttribute());
}

const double& getRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRateAttribute();
}

void setRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    setRateAttribute(value);
}

virtual void setRateAttribute(double value) = 0;


virtual const double& getVolumeAttribute() = 0 ;

void fireVolumeAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireVolumeAttributeChanged(getVolumeAttribute());
}

const double& getVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getVolumeAttribute();
}

void setVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    setVolumeAttribute(value);
}

virtual void setVolumeAttribute(double value) = 0;


virtual const bool& getCanGoNextAttribute() = 0 ;

void fireCanGoNextAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCanGoNextAttributeChanged(getCanGoNextAttribute());
}

const bool& getCanGoNextAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanGoNextAttribute();
}


virtual const bool& getCanGoPreviousAttribute() = 0 ;

void fireCanGoPreviousAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCanGoPreviousAttributeChanged(getCanGoPreviousAttribute());
}

const bool& getCanGoPreviousAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanGoPreviousAttribute();
}


virtual const bool& getCanPauseAttribute() = 0 ;

void fireCanPauseAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCanPauseAttributeChanged(getCanPauseAttribute());
}

const bool& getCanPauseAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanPauseAttribute();
}


virtual const bool& getCanPlayAttribute() = 0 ;

void fireCanPlayAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCanPlayAttributeChanged(getCanPlayAttribute());
}

const bool& getCanPlayAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanPlayAttribute();
}


virtual const bool& getCanSeekAttribute() = 0 ;

void fireCanSeekAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCanSeekAttributeChanged(getCanSeekAttribute());
}

const bool& getCanSeekAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanSeekAttribute();
}


virtual const uint64_t& getCurrentTrackAttribute() = 0 ;

void fireCurrentTrackAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireCurrentTrackAttributeChanged(getCurrentTrackAttribute());
}

const uint64_t& getCurrentTrackAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCurrentTrackAttribute();
}


virtual const PlayerTypes::PlaybackStatus& getPlaybackStatusAttribute() = 0 ;

void firePlaybackStatusAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->firePlaybackStatusAttributeChanged(getPlaybackStatusAttribute());
}

const PlayerTypes::PlaybackStatus& getPlaybackStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getPlaybackStatusAttribute();
}


virtual const uint64_t& getPositionAttribute() = 0 ;


const uint64_t& getPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getPositionAttribute();
}


virtual const uint64_t& getDurationAttribute() = 0 ;

void fireDurationAttributeChangedNotification() {
    for (auto& stubAdapter_ : stubAdapters_)
	                stubAdapter_->fireDurationAttributeChanged(getDurationAttribute());
}

const uint64_t& getDurationAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getDurationAttribute();
}



/**
 * Skip to the next track in the play queue. If there is no
                      
 *  next track, playback is stopped. If playback is paused or
                    
 *    stopped, this function will set the next plack to be
                      
 *  played once playback is activated
 */
virtual void next(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return next(e);
}
virtual void next(PlayerTypes::PlayerError& e) = 0;

/**
 * Open the supplied Uri for playback in the playback engine.
         returns:
 *  INVALID_URI When an invalid URI is supplied
                              
 *  (decided by playback engine)
                   NO_ERROR    On success
 * @param uri URI of media to play, uri format is decided by backend
 */
virtual void openUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return openUri(uri, e);
}
virtual void openUri(std::string uri, PlayerTypes::PlayerError& e) = 0;

/**
 * Enqueue the supplied Uri for playback in the playback engine.
         returns:
 *  INVALID_URI When an invalid URI is supplied
                              
 *  (decided by playback engine)
                  NO_ERROR    On success
 * @param uri URI of media to enqueue, uri format is decided by backend
 */
virtual void enqueueUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return enqueueUri(uri, e);
}
virtual void enqueueUri(std::string uri, PlayerTypes::PlayerError& e) = 0;

/**
 * Dequeue the item with the supplied index in the playback
                     
 *  engine.
 * @param pos index of media to dequeue
 */
virtual void dequeueIndex(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return dequeueIndex(pos, e);
}
virtual void dequeueIndex(uint64_t pos, PlayerTypes::PlayerError& e) = 0;

/**
 * Retrieve the current play queue in JSON format
         returns: Current play
 *  queue in JSON format
 */
virtual void getCurrentPlayQueue(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& playQueue, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return getCurrentPlayQueue(playQueue, e);
}
virtual void getCurrentPlayQueue(std::string& playQueue, PlayerTypes::PlayerError& e) = 0;

/**
 * Dequeue all elements, emptying the play queue
 */
virtual void dequeueAll(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return dequeueAll(e);
}
virtual void dequeueAll(PlayerTypes::PlayerError& e) = 0;

/**
 * Use the supplied playlist as the current play queue. If
                     
 *  the play queue is invalid, the old play queue is
                     
 *  untouched.
         returns: BAD_PLAYLIST If playlist can not be loaded
      
 *              NO_ERROR     On success
 */
virtual void openPlaylist(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return openPlaylist(uri, e);
}
virtual void openPlaylist(std::string uri, PlayerTypes::PlayerError& e) = 0;

/**
 * Pause playback in the playback engine.
                       If already
 *  paused, this has no effect
                       Note: If CanPause is false,
 *  this has no effect
 */
virtual void pause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return pause(e);
}
virtual void pause(PlayerTypes::PlayerError& e) = 0;

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
virtual void play(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return play(e);
}
virtual void play(PlayerTypes::PlayerError& e) = 0;

/**
 * Starts playback (see Play) if paused
                      Pauses playback (see
 *  Pause) is playing
 */
virtual void playPause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return playPause(e);
}
virtual void playPause(PlayerTypes::PlayerError& e) = 0;

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
virtual void previous(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return previous(e);
}
virtual void previous(PlayerTypes::PlayerError& e) = 0;

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
virtual void seek(const std::shared_ptr<CommonAPI::ClientId> clientId, int64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return seek(pos, e);
}
virtual void seek(int64_t pos, PlayerTypes::PlayerError& e) = 0;

/**
 * Jump to the specified position in the current
                       If the
 *  position is not within range of the current track,
                       do
 *  nothing
         Note: If CanSeek is false, this has no effect
 * @param pos Absolute position in microseconds
 */
virtual void setPosition(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    return setPosition(pos, e);
}
virtual void setPosition(uint64_t pos, PlayerTypes::PlayerError& e) = 0;




 protected:
    /**
     * Mute or unmute audio. When muted, the player backend will
                         
     *  not produce any audio output.
     */
    /**
     * Shuffle or unshuffle the current play queue. Shuffling,
                      
     *  un-shuffling and then re-shuffling will yield two different
                      
     *  shufflings (which are not guaranteed to be different)
     */
    /**
     * Toggle repeat for the current playlist. If enabled,
                         
     *  playback will continue with the first item of the current
                        
     *   play queue when the last item has finished playing
     */
    /**
     * Set the playback rate
     */
    /**
     * Get or set volume, 0 is muted, and 1.0 means maximum
                         
     *  volume. Values outside this range will be capped
     */
    /**
     * Indicates whether Next() is available
     */
    /**
     * Indicates whether Previous() is available
     */
    /**
     * Indicates whether Pause() is available
     */
    /**
     * Indicates whether Play() is available
     */
    /**
     * Indicates whether Seek and SetPosition() are available
     */
    /**
     * Indicates the index in the play queue of the currently
                         
     *  playing track
     */
    /**
     * Indicates current playback status
     */
    /**
     * Indicates current position in the currently playing
                          track
     */
    /**
     * Indicates duration of the current track
     */
    std::vector<std::shared_ptr<PlayerStubAdapter>> stubAdapters_;
 private:
    class RemoteEventHandler: public PlayerStubRemoteEvent {
     public:
        RemoteEventHandler(PlayerServiceAbstract* defaultStub) :
        defaultStub_(defaultStub) {
}

        /**
         * Mute or unmute audio. When muted, the player backend will
                             
         *  not produce any audio output.
         */
void onRemoteMuteAttributeChanged() {
	assert(false);  // we don't expect this method to be called
}

bool onRemoteSetMuteAttribute(PlayerTypes::MuteStatus value) {
    defaultStub_->setMuteAttribute(value);
    return false;	// We let the service implementation take care of triggering the "property changed"" notifications
}

bool onRemoteSetMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value) {
    return onRemoteSetMuteAttribute(value);
}


        /**
         * Shuffle or unshuffle the current play queue. Shuffling,
                          
         *  un-shuffling and then re-shuffling will yield two different
                          
         *  shufflings (which are not guaranteed to be different)
         */
void onRemoteShuffleAttributeChanged() {
	assert(false);  // we don't expect this method to be called
}

bool onRemoteSetShuffleAttribute(PlayerTypes::ShuffleStatus value) {
    defaultStub_->setShuffleAttribute(value);
    return false;	// We let the service implementation take care of triggering the "property changed"" notifications
}

bool onRemoteSetShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value) {
    return onRemoteSetShuffleAttribute(value);
}


        /**
         * Toggle repeat for the current playlist. If enabled,
                             
         *  playback will continue with the first item of the current
                            
         *   play queue when the last item has finished playing
         */
void onRemoteRepeatAttributeChanged() {
	assert(false);  // we don't expect this method to be called
}

bool onRemoteSetRepeatAttribute(PlayerTypes::RepeatStatus value) {
    defaultStub_->setRepeatAttribute(value);
    return false;	// We let the service implementation take care of triggering the "property changed"" notifications
}

bool onRemoteSetRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value) {
    return onRemoteSetRepeatAttribute(value);
}


        /**
         * Set the playback rate
         */
void onRemoteRateAttributeChanged() {
	assert(false);  // we don't expect this method to be called
}

bool onRemoteSetRateAttribute(double value) {
    defaultStub_->setRateAttribute(value);
    return false;	// We let the service implementation take care of triggering the "property changed"" notifications
}

bool onRemoteSetRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    return onRemoteSetRateAttribute(value);
}


        /**
         * Get or set volume, 0 is muted, and 1.0 means maximum
                             
         *  volume. Values outside this range will be capped
         */
void onRemoteVolumeAttributeChanged() {
	assert(false);  // we don't expect this method to be called
}

bool onRemoteSetVolumeAttribute(double value) {
    defaultStub_->setVolumeAttribute(value);
    return false;	// We let the service implementation take care of triggering the "property changed"" notifications
}

bool onRemoteSetVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    return onRemoteSetVolumeAttribute(value);
}


        /**
         * Indicates whether Next() is available
         */

        /**
         * Indicates whether Previous() is available
         */

        /**
         * Indicates whether Pause() is available
         */

        /**
         * Indicates whether Play() is available
         */

        /**
         * Indicates whether Seek and SetPosition() are available
         */

        /**
         * Indicates the index in the play queue of the currently
                             
         *  playing track
         */

        /**
         * Indicates current playback status
         */

        /**
         * Indicates current position in the currently playing
                              track
         */

        /**
         * Indicates duration of the current track
         */


     private:
        PlayerServiceAbstract* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;

    CommonAPI::Version interfaceVersion_;

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) override {
    	return interfaceVersion_;
   	}

};

} // namespace mediamanager
} // namespace genivi
} // namespace org

