/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
    unsigned int _dataDetectorTypes;
    BOOL _allowsInlineMediaPlayback;
    BOOL _mediaPlaybackRequiresUserAction;
    BOOL _mediaPlaybackAllowsAirPlay;
    BOOL _suppressesIncrementalRendering;
    NSString *_customUserAgent;
}

@property unsigned int dataDetectorTypes;
@property BOOL allowsInlineMediaPlayback;
@property BOOL mediaPlaybackRequiresUserAction;
@property BOOL mediaPlaybackAllowsAirPlay;
@property BOOL suppressesIncrementalRendering;
@property(copy) NSString * customUserAgent;

+ (id)defaultSettings;

- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)suppressesIncrementalRendering;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_encodeAsDictionary;
- (id)_initWithDictionary:(id)arg1;
- (id)customUserAgent;
- (BOOL)mediaPlaybackRequiresUserAction;
- (void)setMediaPlaybackRequiresUserAction:(BOOL)arg1;
- (BOOL)allowsInlineMediaPlayback;
- (void)setAllowsInlineMediaPlayback:(BOOL)arg1;
- (void)setSuppressesIncrementalRendering:(BOOL)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(BOOL)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (unsigned int)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned int)arg1;

@end
