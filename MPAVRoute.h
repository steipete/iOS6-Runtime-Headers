/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPAVRoute : NSObject  {
    BOOL _displayIsPicked;
    int _displayRouteType;
    BOOL _isPicked;
    BOOL _requiresPassword;
    unsigned int _routeIndex;
    NSString *_routeName;
    int _routeType;
    NSString *_routeUID;
}

@property(readonly) NSString * name;
@property(readonly) int routeType;
@property(readonly) NSString * routeUID;
@property(readonly) unsigned int routeIndex;
@property BOOL isPicked;
@property(readonly) BOOL requiresPassword;
@property BOOL displayIsPicked;
@property int displayRouteType;

+ (id)videoRouteForRoute:(id)arg1;
+ (id)_availableRoutesFromAudioDeviceController:(id)arg1 forType:(unsigned int)arg2;
+ (id)wirelessDisplayRouteForRoute:(id)arg1;
+ (BOOL)availableRoutesExistForType:(unsigned int)arg1;
+ (id)_audioDeviceController;
+ (id)availableRoutesForType:(unsigned int)arg1;

- (int)displayRouteType;
- (BOOL)displayIsPicked;
- (void)setDisplayRouteType:(int)arg1;
- (void)setDisplayIsPicked:(BOOL)arg1;
- (void)setIsPicked:(BOOL)arg1;
- (id)_initWithName:(id)arg1 routeType:(int)arg2 routeUID:(id)arg3 routeIndex:(unsigned int)arg4 requiresPassword:(BOOL)arg5;
- (id)routeUID;
- (BOOL)requiresPassword;
- (unsigned int)routeIndex;
- (BOOL)isPicked;
- (int)routeType;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)name;

@end
