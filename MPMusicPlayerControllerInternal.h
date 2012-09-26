/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPMediaQuery, MPMediaItemCollection, MPMusicPlayerController;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
    unsigned int _clientPort;
    int _inBlockHandlingPlaybackStateChangedMessageFromServer;
    MPMediaItemCollection *_itemCollection;
    MPMusicPlayerController *_musicPlayerController;
    int _playbackNotificationObservers;
    int _playbackState;
    BOOL _preparedToPlay;
    struct SBSProcessAssertion { } *_processAssertion;
    MPMediaQuery *_query;
    struct __CFRunLoopSource { } *_runLoopSource;
    unsigned int _didCheckIn : 1;
    unsigned int _useApplicationSpecificQueue : 1;
    unsigned int _useCachedPlaybackState : 1;
    unsigned int _cachedPlaybackStateIsValid : 1;
    unsigned int _allowsRemoteUIAccess : 1;
}

@property BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;


- (void)serverConnectionDied;
- (void)didPrepareForRemoteSelectorInvocation;
- (id)_bundleIdentifier;
- (BOOL)prepareForRemoteSelectorInvocation;
- (BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
- (void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)arg1;
- (void)acquireProcessAssertion;
- (id)initWithMusicPlayerController:(id)arg1;
- (void)dealloc;

@end
