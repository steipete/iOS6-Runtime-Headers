/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSDate, NSMutableArray, NSArray;

@interface IMAVCallManager : NSObject  {
    unsigned int _callState;
    NSDate *_lastCallStateChange;
    unsigned int _telephonyCallState;
    int _token;
    unsigned int _globalCallState;
    NSMutableArray *_chatArray;
}

@property(readonly) unsigned int callState;
@property(readonly) BOOL hasActiveCall;
@property(readonly) NSArray * calls;
@property(setter=_setCallState:) unsigned int _callState;
@property(setter=_setTelephonyCallState:) unsigned int _telephonyCallState;
@property(readonly) NSArray * _FTCalls;

+ (id)sharedInstance;

- (BOOL)_hasActiveFaceTimeCall;
- (BOOL)_hasActiveTelephonyCall;
- (void)_setTelephonyCallState:(unsigned int)arg1;
- (unsigned int)_telephonyCallState;
- (void)__setTelephonyCallState:(unsigned int)arg1;
- (void)_postStateChangeIfNecessary;
- (void)_postStateChangeNamed:(id)arg1 fromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)_nonRetainingChatList;
- (id)_FTCalls;
- (void)_setCallState:(unsigned int)arg1 quietly:(BOOL)arg2;
- (unsigned int)_callState;
- (void)_updateOverallChatState;
- (void)_setCallState:(unsigned int)arg1;
- (id)calls;
- (unsigned int)callState;
- (id)init;
- (void)dealloc;
- (BOOL)hasActiveCall;

@end
