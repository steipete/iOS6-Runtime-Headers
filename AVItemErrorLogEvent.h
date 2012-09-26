/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, AVItemErrorLogEventInternal, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)errorComment;
- (id)errorDomain;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)URI;
- (id)init;
- (void)dealloc;
- (id)date;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;

@end
