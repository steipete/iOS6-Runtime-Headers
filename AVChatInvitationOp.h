/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSMutableDictionary;

@interface AVChatInvitationOp : AVChatNegotiationOp  {
    NSMutableDictionary *_inviteesInfo;
    BOOL _audioOnly;
}


- (id)initWithParticipant:(id)arg1 conferenceID:(id)arg2;
- (void)createChildOperations;
- (void)didFinish;
- (void)dealloc;
- (void)main;

@end
