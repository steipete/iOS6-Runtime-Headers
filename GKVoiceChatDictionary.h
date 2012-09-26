/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject  {
    NSMutableDictionary *actualDictionary;
    unsigned int type;
    int orignalCallID;
}

@property int callID;
@property(readonly) int originalCallID;
@property int nonce;

+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(int)arg4 focus:(BOOL)arg5;
+ (BOOL)validateFocus:(id)arg1;
+ (BOOL)validateCancel:(id)arg1;
+ (BOOL)validateReply:(id)arg1;
+ (BOOL)validateInvite:(id)arg1;
+ (BOOL)validateDictionary:(id)arg1;

- (id)connectionData;
- (id)participantID;
- (id)setRemoteVCPartyID:(id)arg1;
- (id)setLocalVCPartyID:(id)arg1;
- (id)createBlob;
- (void)setFocus:(BOOL)arg1;
- (BOOL)isFocus;
- (void)setNonce:(int)arg1;
- (void)setFromParticipantID:(id)arg1;
- (BOOL)matchesResponse:(id)arg1;
- (BOOL)isFocusDictionary;
- (BOOL)isReplyDictionary;
- (BOOL)isCancelDictionary;
- (BOOL)isInviteDictionary;
- (id)focusDictionary:(BOOL)arg1;
- (id)cancelDictionary;
- (id)replyDictionary:(unsigned int)arg1 connectionData:(id)arg2 callID:(int)arg3 focus:(BOOL)arg4;
- (int)originalCallID;
- (BOOL)matchesNonce:(int)arg1;
- (id)localVCPartyID;
- (id)remoteVCPartyID;
- (id)fromParticipantID;
- (unsigned int)response;
- (int)callID;
- (void)setCallID:(int)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)type;
- (id)version;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)nonce;

@end
