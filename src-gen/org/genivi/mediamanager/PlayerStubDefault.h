/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core Unknown.
* Used org.franca.core Unknown.
*
* 
*/
#ifndef ORG_GENIVI_MEDIAMANAGER_Player_STUB_DEFAULT_H_
#define ORG_GENIVI_MEDIAMANAGER_Player_STUB_DEFAULT_H_


#include <org/genivi/mediamanager/PlayerStub.h>
#include <sstream>

namespace org {
namespace genivi {
namespace mediamanager {

/**
 * Provides a default implementation for PlayerStubRemoteEvent and
 * PlayerStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class PlayerStubDefault : public virtual PlayerStub {
public:
    PlayerStubDefault();

    PlayerStubRemoteEvent* initStubAdapter(const std::shared_ptr<PlayerStubAdapter>& stubAdapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId);

    virtual const PlayerTypes::MuteStatus& getMuteAttribute();
    virtual const PlayerTypes::MuteStatus& getMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setMuteAttribute(PlayerTypes::MuteStatus value);
    virtual void setMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value);
    virtual const PlayerTypes::ShuffleStatus& getShuffleAttribute();
    virtual const PlayerTypes::ShuffleStatus& getShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setShuffleAttribute(PlayerTypes::ShuffleStatus value);
    virtual void setShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value);
    virtual const PlayerTypes::RepeatStatus& getRepeatAttribute();
    virtual const PlayerTypes::RepeatStatus& getRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setRepeatAttribute(PlayerTypes::RepeatStatus value);
    virtual void setRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value);
    virtual const double& getRateAttribute();
    virtual const double& getRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setRateAttribute(double value);
    virtual void setRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value);
    virtual const double& getVolumeAttribute();
    virtual const double& getVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setVolumeAttribute(double value);
    virtual void setVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value);
    virtual const bool& getCanGoNextAttribute();
    virtual const bool& getCanGoNextAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCanGoNextAttribute(bool value);
    virtual const bool& getCanGoPreviousAttribute();
    virtual const bool& getCanGoPreviousAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCanGoPreviousAttribute(bool value);
    virtual const bool& getCanPauseAttribute();
    virtual const bool& getCanPauseAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCanPauseAttribute(bool value);
    virtual const bool& getCanPlayAttribute();
    virtual const bool& getCanPlayAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCanPlayAttribute(bool value);
    virtual const bool& getCanSeekAttribute();
    virtual const bool& getCanSeekAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCanSeekAttribute(bool value);
    virtual const uint64_t& getCurrentTrackAttribute();
    virtual const uint64_t& getCurrentTrackAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setCurrentTrackAttribute(uint64_t value);
    virtual const PlayerTypes::PlaybackStatus& getPlaybackStatusAttribute();
    virtual const PlayerTypes::PlaybackStatus& getPlaybackStatusAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setPlaybackStatusAttribute(PlayerTypes::PlaybackStatus value);
    virtual const uint64_t& getPositionAttribute();
    virtual const uint64_t& getPositionAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setPositionAttribute(uint64_t value);
    virtual const uint64_t& getDurationAttribute();
    virtual const uint64_t& getDurationAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId);
    virtual void setDurationAttribute(uint64_t value);

    /**
     * Skip to the next track in the play queue. If there is no
                          
     *  next track, playback is stopped. If playback is paused or
                        
     *    stopped, this function will set the next plack to be
                          
     *  played once playback is activated
     */
    virtual void next(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void next(PlayerTypes::PlayerError& e);

    /**
     * Open the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                       NO_ERROR    On success
     * @param uri URI of media to play, uri format is decided by backend
     */
    virtual void openUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e);
    virtual void openUri(std::string uri, PlayerTypes::PlayerError& e);

    /**
     * Enqueue the supplied Uri for playback in the playback engine.
             returns:
     *  INVALID_URI When an invalid URI is supplied
                                  
     *  (decided by playback engine)
                      NO_ERROR    On success
     * @param uri URI of media to enqueue, uri format is decided by backend
     */
    virtual void enqueueUri(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e);
    virtual void enqueueUri(std::string uri, PlayerTypes::PlayerError& e);

    /**
     * Dequeue the item with the supplied index in the playback
                         
     *  engine.
     * @param pos index of media to dequeue
     */
    virtual void dequeueIndex(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e);
    virtual void dequeueIndex(uint64_t pos, PlayerTypes::PlayerError& e);

    /**
     * Retrieve the current play queue in JSON format
             returns: Current play
     *  queue in JSON format
     */
    virtual void getCurrentPlayQueue(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string& playQueue, PlayerTypes::PlayerError& e);
    virtual void getCurrentPlayQueue(std::string& playQueue, PlayerTypes::PlayerError& e);

    /**
     * Dequeue all elements, emptying the play queue
     */
    virtual void dequeueAll(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void dequeueAll(PlayerTypes::PlayerError& e);

    /**
     * Use the supplied playlist as the current play queue. If
                         
     *  the play queue is invalid, the old play queue is
                         
     *  untouched.
             returns: BAD_PLAYLIST If playlist can not be loaded
          
     *              NO_ERROR     On success
     */
    virtual void openPlaylist(const std::shared_ptr<CommonAPI::ClientId> clientId, std::string uri, PlayerTypes::PlayerError& e);
    virtual void openPlaylist(std::string uri, PlayerTypes::PlayerError& e);

    /**
     * Pause playback in the playback engine.
                           If already
     *  paused, this has no effect
                           Note: If CanPause is false,
     *  this has no effect
     */
    virtual void pause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void pause(PlayerTypes::PlayerError& e);

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
    virtual void play(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void play(PlayerTypes::PlayerError& e);

    /**
     * Starts playback (see Play) if paused
                          Pauses playback (see
     *  Pause) is playing
     */
    virtual void playPause(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void playPause(PlayerTypes::PlayerError& e);

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
    virtual void previous(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::PlayerError& e);
    virtual void previous(PlayerTypes::PlayerError& e);

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
    virtual void seek(const std::shared_ptr<CommonAPI::ClientId> clientId, int64_t pos, PlayerTypes::PlayerError& e);
    virtual void seek(int64_t pos, PlayerTypes::PlayerError& e);

    /**
     * Jump to the specified position in the current
                           If the
     *  position is not within range of the current track,
                           do
     *  nothing
             Note: If CanSeek is false, this has no effect
     * @param pos Absolute position in microseconds
     */
    virtual void setPosition(const std::shared_ptr<CommonAPI::ClientId> clientId, uint64_t pos, PlayerTypes::PlayerError& e);
    virtual void setPosition(uint64_t pos, PlayerTypes::PlayerError& e);




protected:
    /**
     * Mute or unmute audio. When muted, the player backend will
                         
     *  not produce any audio output.
     */
    virtual bool trySetMuteAttribute(PlayerTypes::MuteStatus value);
    virtual bool validateMuteAttributeRequestedValue(const PlayerTypes::MuteStatus& value);
    virtual void onRemoteMuteAttributeChanged();
    /**
     * Shuffle or unshuffle the current play queue. Shuffling,
                      
     *  un-shuffling and then re-shuffling will yield two different
                      
     *  shufflings (which are not guaranteed to be different)
     */
    virtual bool trySetShuffleAttribute(PlayerTypes::ShuffleStatus value);
    virtual bool validateShuffleAttributeRequestedValue(const PlayerTypes::ShuffleStatus& value);
    virtual void onRemoteShuffleAttributeChanged();
    /**
     * Toggle repeat for the current playlist. If enabled,
                         
     *  playback will continue with the first item of the current
                        
     *   play queue when the last item has finished playing
     */
    virtual bool trySetRepeatAttribute(PlayerTypes::RepeatStatus value);
    virtual bool validateRepeatAttributeRequestedValue(const PlayerTypes::RepeatStatus& value);
    virtual void onRemoteRepeatAttributeChanged();
    /**
     * Set the playback rate
     */
    virtual bool trySetRateAttribute(double value);
    virtual bool validateRateAttributeRequestedValue(const double& value);
    virtual void onRemoteRateAttributeChanged();
    /**
     * Get or set volume, 0 is muted, and 1.0 means maximum
                         
     *  volume. Values outside this range will be capped
     */
    virtual bool trySetVolumeAttribute(double value);
    virtual bool validateVolumeAttributeRequestedValue(const double& value);
    virtual void onRemoteVolumeAttributeChanged();
    /**
     * Indicates whether Next() is available
     */
    virtual bool trySetCanGoNextAttribute(bool value);
    virtual bool validateCanGoNextAttributeRequestedValue(const bool& value);
    /**
     * Indicates whether Previous() is available
     */
    virtual bool trySetCanGoPreviousAttribute(bool value);
    virtual bool validateCanGoPreviousAttributeRequestedValue(const bool& value);
    /**
     * Indicates whether Pause() is available
     */
    virtual bool trySetCanPauseAttribute(bool value);
    virtual bool validateCanPauseAttributeRequestedValue(const bool& value);
    /**
     * Indicates whether Play() is available
     */
    virtual bool trySetCanPlayAttribute(bool value);
    virtual bool validateCanPlayAttributeRequestedValue(const bool& value);
    /**
     * Indicates whether Seek and SetPosition() are available
     */
    virtual bool trySetCanSeekAttribute(bool value);
    virtual bool validateCanSeekAttributeRequestedValue(const bool& value);
    /**
     * Indicates the index in the play queue of the currently
                         
     *  playing track
     */
    virtual bool trySetCurrentTrackAttribute(uint64_t value);
    virtual bool validateCurrentTrackAttributeRequestedValue(const uint64_t& value);
    /**
     * Indicates current playback status
     */
    virtual bool trySetPlaybackStatusAttribute(PlayerTypes::PlaybackStatus value);
    virtual bool validatePlaybackStatusAttributeRequestedValue(const PlayerTypes::PlaybackStatus& value);
    /**
     * Indicates current position in the currently playing
                          track
     */
    virtual bool trySetPositionAttribute(uint64_t value);
    virtual bool validatePositionAttributeRequestedValue(const uint64_t& value);
    /**
     * Indicates duration of the current track
     */
    virtual bool trySetDurationAttribute(uint64_t value);
    virtual bool validateDurationAttributeRequestedValue(const uint64_t& value);
    class RemoteEventHandler: public virtual PlayerStubRemoteEvent {
     public:
        RemoteEventHandler(PlayerStubDefault* defaultStub);

        /**
         * Mute or unmute audio. When muted, the player backend will
                             
         *  not produce any audio output.
         */
        virtual bool onRemoteSetMuteAttribute(PlayerTypes::MuteStatus value);
        virtual bool onRemoteSetMuteAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::MuteStatus value);
        virtual void onRemoteMuteAttributeChanged();

        /**
         * Shuffle or unshuffle the current play queue. Shuffling,
                          
         *  un-shuffling and then re-shuffling will yield two different
                          
         *  shufflings (which are not guaranteed to be different)
         */
        virtual bool onRemoteSetShuffleAttribute(PlayerTypes::ShuffleStatus value);
        virtual bool onRemoteSetShuffleAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::ShuffleStatus value);
        virtual void onRemoteShuffleAttributeChanged();

        /**
         * Toggle repeat for the current playlist. If enabled,
                             
         *  playback will continue with the first item of the current
                            
         *   play queue when the last item has finished playing
         */
        virtual bool onRemoteSetRepeatAttribute(PlayerTypes::RepeatStatus value);
        virtual bool onRemoteSetRepeatAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, PlayerTypes::RepeatStatus value);
        virtual void onRemoteRepeatAttributeChanged();

        /**
         * Set the playback rate
         */
        virtual bool onRemoteSetRateAttribute(double value);
        virtual bool onRemoteSetRateAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value);
        virtual void onRemoteRateAttributeChanged();

        /**
         * Get or set volume, 0 is muted, and 1.0 means maximum
                             
         *  volume. Values outside this range will be capped
         */
        virtual bool onRemoteSetVolumeAttribute(double value);
        virtual bool onRemoteSetVolumeAttribute(const std::shared_ptr<CommonAPI::ClientId> clientId, double value);
        virtual void onRemoteVolumeAttributeChanged();

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
        PlayerStubDefault* defaultStub_;
    };
private:
    PlayerStubDefault::RemoteEventHandler remoteEventHandler_;

    /**
     * Mute or unmute audio. When muted, the player backend will
                         
     *  not produce any audio output.
     */
    PlayerTypes::MuteStatus muteAttributeValue_;
    /**
     * Shuffle or unshuffle the current play queue. Shuffling,
                      
     *  un-shuffling and then re-shuffling will yield two different
                      
     *  shufflings (which are not guaranteed to be different)
     */
    PlayerTypes::ShuffleStatus shuffleAttributeValue_;
    /**
     * Toggle repeat for the current playlist. If enabled,
                         
     *  playback will continue with the first item of the current
                        
     *   play queue when the last item has finished playing
     */
    PlayerTypes::RepeatStatus repeatAttributeValue_;
    /**
     * Set the playback rate
     */
    double rateAttributeValue_;
    /**
     * Get or set volume, 0 is muted, and 1.0 means maximum
                         
     *  volume. Values outside this range will be capped
     */
    double volumeAttributeValue_;
    /**
     * Indicates whether Next() is available
     */
    bool canGoNextAttributeValue_;
    /**
     * Indicates whether Previous() is available
     */
    bool canGoPreviousAttributeValue_;
    /**
     * Indicates whether Pause() is available
     */
    bool canPauseAttributeValue_;
    /**
     * Indicates whether Play() is available
     */
    bool canPlayAttributeValue_;
    /**
     * Indicates whether Seek and SetPosition() are available
     */
    bool canSeekAttributeValue_;
    /**
     * Indicates the index in the play queue of the currently
                         
     *  playing track
     */
    uint64_t currentTrackAttributeValue_;
    /**
     * Indicates current playback status
     */
    PlayerTypes::PlaybackStatus playbackStatusAttributeValue_;
    /**
     * Indicates current position in the currently playing
                          track
     */
    uint64_t positionAttributeValue_;
    /**
     * Indicates duration of the current track
     */
    uint64_t durationAttributeValue_;

    CommonAPI::Version interfaceVersion_;
};

} // namespace mediamanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_MEDIAMANAGER_Player_STUB_DEFAULT_H_
