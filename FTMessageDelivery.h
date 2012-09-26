/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageQueue, NSArray, NSString, FTMessage, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _retries;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    NSString *_userAgent;
    unsigned int _maxConcurrentMessages;
    BOOL _retryInAirplaneMode;
    IMTimer *_timer;
}

@property(copy) NSString * userAgent;
@property(copy) NSNumber * protocolVersion;
@property(readonly) BOOL hasQueuedItems;
@property(readonly) BOOL busy;
@property BOOL retryInAirplaneMode;
@property(readonly) FTMessage * currentMessage;
@property(readonly) NSArray * queuedMessages;
@property(readonly) NSArray * allMessages;
@property(readonly) int maxMessageSize;
@property unsigned int maxConcurrentMessages;

+ (Class)HTTPMessageDeliveryClass;
+ (Class)APNSMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void)setRetryInAirplaneMode:(BOOL)arg1;
- (BOOL)retryInAirplaneMode;
- (void)setMaxConcurrentMessages:(unsigned int)arg1;
- (unsigned int)maxConcurrentMessages;
- (void)_signMessage:(id)arg1 useDataSignatures:(BOOL)arg2 body:(id)arg3 queryString:(id)arg4 intoDictionary:(id)arg5;
- (int)maxMessageSize;
- (void)_setRetryTimer:(double)arg1;
- (void)cancelMessage:(id)arg1;
- (BOOL)hasQueuedItems;
- (BOOL)busy;
- (id)allMessages;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (id)queuedMessages;
- (void)_clearRetryTimer;
- (void)setProtocolVersion:(id)arg1;
- (id)protocolVersion;
- (id)userAgent;
- (void)setUserAgent:(id)arg1;
- (id)_queue;
- (id)currentMessage;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)sendMessage:(id)arg1;

@end
