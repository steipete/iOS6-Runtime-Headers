/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem;

@interface MPUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {
    MPMediaItem *_mediaItem;
}

+ (id)mzPropertyValueForMediaProperty:(id)arg1 mediaValue:(id)arg2;
+ (id)mediaPropertiesToMZProperties;
+ (id)mzPropertiesToMediaProperties;

- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (void)dealloc;

@end
