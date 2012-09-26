/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSURL, NSString;

@interface ISOpenURLRequest : NSObject <NSCopying> {
    BOOL _isITunesStoreURL;
    NSString *_targetIdentifier;
    NSString *_urlBagKey;
    NSURL *_url;
}

@property(retain) NSURL * URL;
@property(copy) NSString * URLBagKey;
@property(getter=isITunesStoreURL) BOOL ITunesStoreURL;
@property(copy) NSString * targetIdentifier;

+ (id)openURLRequestWithURL:(id)arg1;

- (id)initWithURLBagKey:(id)arg1;
- (id)targetIdentifier;
- (BOOL)isITunesStoreURL;
- (void)setTargetIdentifier:(id)arg1;
- (id)URLBagKey;
- (void)setURLBagKey:(id)arg1;
- (void)setITunesStoreURL:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setURL:(id)arg1;
- (id)URL;

@end
