/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSURL, NSString, NSData;

@interface MCWebClipPayload : MCPayload  {
    NSURL *_URL;
    NSString *_label;
    NSData *_iconData;
    BOOL _isRemovable;
    BOOL _precomposed;
    BOOL _fullScreen;
}

@property(readonly) NSURL * URL;
@property(readonly) NSString * label;
@property(readonly) NSData * iconData;
@property(readonly) BOOL isRemovable;
@property(readonly) BOOL precomposed;
@property(readonly) BOOL fullScreen;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (BOOL)precomposed;
- (BOOL)isRemovable;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)title;
- (id)iconData;
- (void).cxx_destruct;
- (id)description;
- (BOOL)fullScreen;
- (id)label;
- (id)URL;

@end
