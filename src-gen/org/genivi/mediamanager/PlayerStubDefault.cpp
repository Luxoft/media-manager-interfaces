/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.6.v20140519.
* Used org.franca.core 0.8.10.201309262002.
*
* 
*/
#include <org/genivi/mediamanager/PlayerStubDefault.h>

namespace org {
namespace genivi {
namespace mediamanager {

PlayerStubDefault::PlayerStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(Player::getInterfaceVersion()) {
}

const CommonAPI::Version& PlayerStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) {
    return interfaceVersion_;
}

PlayerStubRemoteEvent* PlayerStubDefault::initStubAdapter(const std::shared_ptr<PlayerStubAdapter>& stubAdapter) {
    CommonAPI::Stub<PlayerStubAdapter, PlayerStubRemoteEvent>::stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}

const PlayerTypes::MuteStatus& PlayerStubDefault::getMuteAttribute() {
    return muteAttributeValue_;
}

const PlayerTypes::MuteStatus& PlayerStubDefault::getMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getMuteAttribute();
}

void PlayerStubDefault::setMuteAttribute(PlayerTypes::MuteStatus value) {
    const bool valueChanged = trySetMuteAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireMuteAttributeChanged(muteAttributeValue_);
    }
}

bool PlayerStubDefault::trySetMuteAttribute(PlayerTypes::MuteStatus value) {
    if (!validateMuteAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (muteAttributeValue_ != value);
    muteAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateMuteAttributeRequestedValue(const PlayerTypes::MuteStatus& value) {
    return true;
}

void PlayerStubDefault::setMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value) {
    setMuteAttribute(value);
}

void PlayerStubDefault::onRemoteMuteAttributeChanged() {
    // No operation in default
}

void PlayerStubDefault::RemoteEventHandler::onRemoteMuteAttributeChanged() {
    defaultStub_->onRemoteMuteAttributeChanged();
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetMuteAttribute(PlayerTypes::MuteStatus value) {
    return defaultStub_->trySetMuteAttribute(std::move(value));
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value) {
    return onRemoteSetMuteAttribute(value);
}

const PlayerTypes::ShuffleStatus& PlayerStubDefault::getShuffleAttribute() {
    return shuffleAttributeValue_;
}

const PlayerTypes::ShuffleStatus& PlayerStubDefault::getShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getShuffleAttribute();
}

void PlayerStubDefault::setShuffleAttribute(PlayerTypes::ShuffleStatus value) {
    const bool valueChanged = trySetShuffleAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireShuffleAttributeChanged(shuffleAttributeValue_);
    }
}

bool PlayerStubDefault::trySetShuffleAttribute(PlayerTypes::ShuffleStatus value) {
    if (!validateShuffleAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (shuffleAttributeValue_ != value);
    shuffleAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateShuffleAttributeRequestedValue(const PlayerTypes::ShuffleStatus& value) {
    return true;
}

void PlayerStubDefault::setShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value) {
    setShuffleAttribute(value);
}

void PlayerStubDefault::onRemoteShuffleAttributeChanged() {
    // No operation in default
}

void PlayerStubDefault::RemoteEventHandler::onRemoteShuffleAttributeChanged() {
    defaultStub_->onRemoteShuffleAttributeChanged();
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetShuffleAttribute(PlayerTypes::ShuffleStatus value) {
    return defaultStub_->trySetShuffleAttribute(std::move(value));
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value) {
    return onRemoteSetShuffleAttribute(value);
}

const PlayerTypes::RepeatStatus& PlayerStubDefault::getRepeatAttribute() {
    return repeatAttributeValue_;
}

const PlayerTypes::RepeatStatus& PlayerStubDefault::getRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRepeatAttribute();
}

void PlayerStubDefault::setRepeatAttribute(PlayerTypes::RepeatStatus value) {
    const bool valueChanged = trySetRepeatAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireRepeatAttributeChanged(repeatAttributeValue_);
    }
}

bool PlayerStubDefault::trySetRepeatAttribute(PlayerTypes::RepeatStatus value) {
    if (!validateRepeatAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (repeatAttributeValue_ != value);
    repeatAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateRepeatAttributeRequestedValue(const PlayerTypes::RepeatStatus& value) {
    return true;
}

void PlayerStubDefault::setRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value) {
    setRepeatAttribute(value);
}

void PlayerStubDefault::onRemoteRepeatAttributeChanged() {
    // No operation in default
}

void PlayerStubDefault::RemoteEventHandler::onRemoteRepeatAttributeChanged() {
    defaultStub_->onRemoteRepeatAttributeChanged();
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetRepeatAttribute(PlayerTypes::RepeatStatus value) {
    return defaultStub_->trySetRepeatAttribute(std::move(value));
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value) {
    return onRemoteSetRepeatAttribute(value);
}

const double& PlayerStubDefault::getRateAttribute() {
    return rateAttributeValue_;
}

const double& PlayerStubDefault::getRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getRateAttribute();
}

void PlayerStubDefault::setRateAttribute(double value) {
    const bool valueChanged = trySetRateAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireRateAttributeChanged(rateAttributeValue_);
    }
}

bool PlayerStubDefault::trySetRateAttribute(double value) {
    if (!validateRateAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (rateAttributeValue_ != value);
    rateAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateRateAttributeRequestedValue(const double& value) {
    return true;
}

void PlayerStubDefault::setRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    setRateAttribute(value);
}

void PlayerStubDefault::onRemoteRateAttributeChanged() {
    // No operation in default
}

void PlayerStubDefault::RemoteEventHandler::onRemoteRateAttributeChanged() {
    defaultStub_->onRemoteRateAttributeChanged();
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetRateAttribute(double value) {
    return defaultStub_->trySetRateAttribute(std::move(value));
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    return onRemoteSetRateAttribute(value);
}

const double& PlayerStubDefault::getVolumeAttribute() {
    return volumeAttributeValue_;
}

const double& PlayerStubDefault::getVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getVolumeAttribute();
}

void PlayerStubDefault::setVolumeAttribute(double value) {
    const bool valueChanged = trySetVolumeAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireVolumeAttributeChanged(volumeAttributeValue_);
    }
}

bool PlayerStubDefault::trySetVolumeAttribute(double value) {
    if (!validateVolumeAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (volumeAttributeValue_ != value);
    volumeAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateVolumeAttributeRequestedValue(const double& value) {
    return true;
}

void PlayerStubDefault::setVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    setVolumeAttribute(value);
}

void PlayerStubDefault::onRemoteVolumeAttributeChanged() {
    // No operation in default
}

void PlayerStubDefault::RemoteEventHandler::onRemoteVolumeAttributeChanged() {
    defaultStub_->onRemoteVolumeAttributeChanged();
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetVolumeAttribute(double value) {
    return defaultStub_->trySetVolumeAttribute(std::move(value));
}

bool PlayerStubDefault::RemoteEventHandler::onRemoteSetVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value) {
    return onRemoteSetVolumeAttribute(value);
}

const bool& PlayerStubDefault::getCanGoNextAttribute() {
    return canGoNextAttributeValue_;
}

const bool& PlayerStubDefault::getCanGoNextAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanGoNextAttribute();
}

void PlayerStubDefault::setCanGoNextAttribute(bool value) {
    const bool valueChanged = trySetCanGoNextAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCanGoNextAttributeChanged(canGoNextAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCanGoNextAttribute(bool value) {
    if (!validateCanGoNextAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (canGoNextAttributeValue_ != value);
    canGoNextAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCanGoNextAttributeRequestedValue(const bool& value) {
    return true;
}


const bool& PlayerStubDefault::getCanGoPreviousAttribute() {
    return canGoPreviousAttributeValue_;
}

const bool& PlayerStubDefault::getCanGoPreviousAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanGoPreviousAttribute();
}

void PlayerStubDefault::setCanGoPreviousAttribute(bool value) {
    const bool valueChanged = trySetCanGoPreviousAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCanGoPreviousAttributeChanged(canGoPreviousAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCanGoPreviousAttribute(bool value) {
    if (!validateCanGoPreviousAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (canGoPreviousAttributeValue_ != value);
    canGoPreviousAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCanGoPreviousAttributeRequestedValue(const bool& value) {
    return true;
}


const bool& PlayerStubDefault::getCanPauseAttribute() {
    return canPauseAttributeValue_;
}

const bool& PlayerStubDefault::getCanPauseAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanPauseAttribute();
}

void PlayerStubDefault::setCanPauseAttribute(bool value) {
    const bool valueChanged = trySetCanPauseAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCanPauseAttributeChanged(canPauseAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCanPauseAttribute(bool value) {
    if (!validateCanPauseAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (canPauseAttributeValue_ != value);
    canPauseAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCanPauseAttributeRequestedValue(const bool& value) {
    return true;
}


const bool& PlayerStubDefault::getCanPlayAttribute() {
    return canPlayAttributeValue_;
}

const bool& PlayerStubDefault::getCanPlayAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanPlayAttribute();
}

void PlayerStubDefault::setCanPlayAttribute(bool value) {
    const bool valueChanged = trySetCanPlayAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCanPlayAttributeChanged(canPlayAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCanPlayAttribute(bool value) {
    if (!validateCanPlayAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (canPlayAttributeValue_ != value);
    canPlayAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCanPlayAttributeRequestedValue(const bool& value) {
    return true;
}


const bool& PlayerStubDefault::getCanSeekAttribute() {
    return canSeekAttributeValue_;
}

const bool& PlayerStubDefault::getCanSeekAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCanSeekAttribute();
}

void PlayerStubDefault::setCanSeekAttribute(bool value) {
    const bool valueChanged = trySetCanSeekAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCanSeekAttributeChanged(canSeekAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCanSeekAttribute(bool value) {
    if (!validateCanSeekAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (canSeekAttributeValue_ != value);
    canSeekAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCanSeekAttributeRequestedValue(const bool& value) {
    return true;
}


const uint64_t& PlayerStubDefault::getCurrentTrackAttribute() {
    return currentTrackAttributeValue_;
}

const uint64_t& PlayerStubDefault::getCurrentTrackAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getCurrentTrackAttribute();
}

void PlayerStubDefault::setCurrentTrackAttribute(uint64_t value) {
    const bool valueChanged = trySetCurrentTrackAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireCurrentTrackAttributeChanged(currentTrackAttributeValue_);
    }
}

bool PlayerStubDefault::trySetCurrentTrackAttribute(uint64_t value) {
    if (!validateCurrentTrackAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (currentTrackAttributeValue_ != value);
    currentTrackAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateCurrentTrackAttributeRequestedValue(const uint64_t& value) {
    return true;
}


const PlayerTypes::PlaybackStatus& PlayerStubDefault::getPlaybackStatusAttribute() {
    return playbackStatusAttributeValue_;
}

const PlayerTypes::PlaybackStatus& PlayerStubDefault::getPlaybackStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getPlaybackStatusAttribute();
}

void PlayerStubDefault::setPlaybackStatusAttribute(PlayerTypes::PlaybackStatus value) {
    const bool valueChanged = trySetPlaybackStatusAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->firePlaybackStatusAttributeChanged(playbackStatusAttributeValue_);
    }
}

bool PlayerStubDefault::trySetPlaybackStatusAttribute(PlayerTypes::PlaybackStatus value) {
    if (!validatePlaybackStatusAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (playbackStatusAttributeValue_ != value);
    playbackStatusAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validatePlaybackStatusAttributeRequestedValue(const PlayerTypes::PlaybackStatus& value) {
    return true;
}


const uint64_t& PlayerStubDefault::getPositionAttribute() {
    return positionAttributeValue_;
}

const uint64_t& PlayerStubDefault::getPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getPositionAttribute();
}

void PlayerStubDefault::setPositionAttribute(uint64_t value) {
    trySetPositionAttribute(std::move(value));
}

bool PlayerStubDefault::trySetPositionAttribute(uint64_t value) {
    if (!validatePositionAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (positionAttributeValue_ != value);
    positionAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validatePositionAttributeRequestedValue(const uint64_t& value) {
    return true;
}


const uint64_t& PlayerStubDefault::getDurationAttribute() {
    return durationAttributeValue_;
}

const uint64_t& PlayerStubDefault::getDurationAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId) {
    return getDurationAttribute();
}

void PlayerStubDefault::setDurationAttribute(uint64_t value) {
    const bool valueChanged = trySetDurationAttribute(std::move(value));
    if (valueChanged && stubAdapter_ != NULL) {
        stubAdapter_->fireDurationAttributeChanged(durationAttributeValue_);
    }
}

bool PlayerStubDefault::trySetDurationAttribute(uint64_t value) {
    if (!validateDurationAttributeRequestedValue(value))
        return false;

    const bool valueChanged = (durationAttributeValue_ != value);
    durationAttributeValue_ = std::move(value);
    return valueChanged;
}

bool PlayerStubDefault::validateDurationAttributeRequestedValue(const uint64_t& value) {
    return true;
}



/**
 * Skip to the next track in the play queue. If there is no
                      
 *  next track, playback is stopped. If playback is paused or
                    
 *    stopped, this function will set the next plack to be
                      
 *  played once playback is activated
 */
void PlayerStubDefault::next(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    next(e);
}
void PlayerStubDefault::next(PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Open the supplied Uri for playback in the playback engine.
         returns:
 *  INVALID_URI When an invalid URI is supplied
                              
 *  (decided by playback engine)
                   NO_ERROR    On success
 * @param uri URI of media to play, uri format is decided by backend
 */
void PlayerStubDefault::openUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    openUri(uri, e);
}
void PlayerStubDefault::openUri(std::string uri, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Enqueue the supplied Uri for playback in the playback engine.
         returns:
 *  INVALID_URI When an invalid URI is supplied
                              
 *  (decided by playback engine)
                  NO_ERROR    On success
 * @param uri URI of media to enqueue, uri format is decided by backend
 */
void PlayerStubDefault::enqueueUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    enqueueUri(uri, e);
}
void PlayerStubDefault::enqueueUri(std::string uri, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Dequeue the item with the supplied index in the playback
                     
 *  engine.
 * @param pos index of media to dequeue
 */
void PlayerStubDefault::dequeueIndex(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    dequeueIndex(pos, e);
}
void PlayerStubDefault::dequeueIndex(uint64_t pos, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Retrieve the current play queue. The format of the result
                     
 *  object is described in MediaTypes.fidl
         returns: Current play queue
 */
void PlayerStubDefault::getCurrentPlayQueue(const std::shared_ptr<CommonAPI::ClientId> clientId, MediaTypes::ResultMapList& playQueue, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    getCurrentPlayQueue(playQueue, e);
}
void PlayerStubDefault::getCurrentPlayQueue(MediaTypes::ResultMapList& playQueue, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Dequeue all elements, emptying the play queue
 */
void PlayerStubDefault::dequeueAll(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    dequeueAll(e);
}
void PlayerStubDefault::dequeueAll(PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Use the supplied playlist as the current play queue. If
                     
 *  the play queue is invalid, the old play queue is
                     
 *  untouched.
         returns: BAD_PLAYLIST If playlist can not be loaded
      
 *              NO_ERROR     On success
 */
void PlayerStubDefault::openPlaylist(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    openPlaylist(uri, e);
}
void PlayerStubDefault::openPlaylist(std::string uri, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Pause playback in the playback engine.
                       If already
 *  paused, this has no effect
                       Note: If CanPause is false,
 *  this has no effect
 */
void PlayerStubDefault::pause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    pause(e);
}
void PlayerStubDefault::pause(PlayerTypes::PlayerError& e) {
    // No operation in default
}

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
void PlayerStubDefault::play(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    play(e);
}
void PlayerStubDefault::play(PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Starts playback (see Play) if paused
                      Pauses playback (see
 *  Pause) is playing
 */
void PlayerStubDefault::playPause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    playPause(e);
}
void PlayerStubDefault::playPause(PlayerTypes::PlayerError& e) {
    // No operation in default
}

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
void PlayerStubDefault::previous(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    previous(e);
}
void PlayerStubDefault::previous(PlayerTypes::PlayerError& e) {
    // No operation in default
}

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
void PlayerStubDefault::seek(const std::shared_ptr<CommonAPI::ClientId> clientId, int64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    seek(pos, e);
}
void PlayerStubDefault::seek(int64_t pos, PlayerTypes::PlayerError& e) {
    // No operation in default
}

/**
 * Jump to the specified position in the current
                       If the
 *  position is not within range of the current track,
                       do
 *  nothing
         Note: If CanSeek is false, this has no effect
 * @param pos Absolute position in microseconds
 */
void PlayerStubDefault::setPosition(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e) {
    // Call old style methods in default 
    setPosition(pos, e);
}
void PlayerStubDefault::setPosition(uint64_t pos, PlayerTypes::PlayerError& e) {
    // No operation in default
}




PlayerStubDefault::RemoteEventHandler::RemoteEventHandler(PlayerStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace mediamanager
} // namespace genivi
} // namespace org
