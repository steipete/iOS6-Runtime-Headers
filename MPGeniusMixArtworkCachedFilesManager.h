/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPGeniusMixArtworkCachedFilesManager : NSObject  {
    NSObject<OS_dispatch_queue> *_cleanupQueue;
}

+ (id)sharedInstance;

- (void)cleanupIfNecessaryWithCompletionHandler:(id)arg1;
- (void)_mediaLibraryDisplayValuesWillChangeNotification:(id)arg1;
- (id)init;
- (void)dealloc;

@end
