/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSString, NSDictionary;

@interface AVChatParticipantStatusNugget : NSObject <NSCoding> {
    NSString *_imHandleName;
    NSString *_imHandleID;
    NSString *_invitedBy;
    NSString *_vcPartyID;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    BOOL _usingICE;
    int _ardRole;
    unsigned int _state;
    unsigned int _newState;
    int _error;
    unsigned int _reason;
}

@property(readonly) NSDictionary * dictionaryDescription;
@property(readonly) NSString * name;
@property(readonly) NSString * ID;
@property(readonly) NSString * invitedBy;
@property(readonly) NSString * vcPartyID;
@property(readonly) BOOL sendingAudio;
@property(readonly) BOOL sendingVideo;
@property(readonly) BOOL isUsingICE;
@property(readonly) int ardRole;
@property(readonly) unsigned int state;
@property(readonly) unsigned int newState;
@property(readonly) int error;
@property(readonly) unsigned int reason;

+ (id)filterNuggets:(id)arg1 filterEndedState:(BOOL)arg2 convertFromDict:(BOOL)arg3;
+ (id)nuggetWithDictionaryDescription:(id)arg1;

- (void)setVCPartyID:(id)arg1;
- (int)ardRole;
- (BOOL)sendingVideo;
- (BOOL)sendingAudio;
- (id)initWithParticipant:(id)arg1;
- (id)dictionaryDescription;
- (void)_configureWithDictionaryDescription:(id)arg1;
- (id)vcPartyID;
- (unsigned int)newState;
- (BOOL)isUsingICE;
- (id)ID;
- (id)invitedBy;
- (unsigned int)state;
- (void)dealloc;
- (unsigned int)reason;
- (id)name;
- (id)description;
- (int)error;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
