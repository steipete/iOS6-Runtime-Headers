/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSError, NSArray, ISOperation, NSMutableArray, NSLock, NSRunLoop, SSOperationProgress, NSString, <ISOperationDelegate>;

@interface ISOperation : NSOperation  {
    <ISOperationDelegate> *_delegate;
    NSError *_error;
    NSLock *_lock;
    NSRunLoop *_operationRunLoop;
    ISOperation *_parentOperation;
    SSOperationProgress *_progress;
    BOOL _shouldMessageMainThread;
    NSString *_powerAssertionIdentifier;
    NSArray *_serializationLockIdentifiers;
    NSMutableArray *_subOperations;
    BOOL _shouldRunWithBackgroundPriority;
    BOOL _stopped;
    BOOL _success;
    id _threadSafeDelegate;
}

@property <ISOperationDelegate> * delegate;
@property BOOL shouldMessageMainThread;
@property(retain) NSString * powerAssertionIdentifier;
@property(readonly) NSString * uniqueKey;
@property BOOL shouldRunWithBackgroundPriority;
@property(retain) NSError * error;
@property BOOL success;
@property(readonly) int progressWeight;
@property(retain) ISOperation * parentOperation;
@property(readonly) SSOperationProgress * progress;
@property(retain) NSRunLoop * operationRunLoop;
@property(readonly) id threadSafeDelegate;
@property(copy) NSArray * serializationLockIdentifiers;


- (BOOL)loadSoftwareMapReturningError:(id*)arg1;
- (BOOL)copyAccountID:(id*)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id*)arg3;
- (BOOL)loadURLBagWithContext:(id)arg1 returningError:(id*)arg2;
- (id)authenticatedAccountDSID;
- (void)setShouldRunWithBackgroundPriority:(BOOL)arg1;
- (void)setPowerAssertionIdentifier:(id)arg1;
- (void)setSerializationLockIdentifiers:(id)arg1;
- (void)sendDidTakeSerializationLocks;
- (id)copySerializationLocks;
- (BOOL)shouldMessageMainThread;
- (BOOL)runSubOperation:(id)arg1 onQueue:(id)arg2 error:(id*)arg3;
- (BOOL)runSubOperation:(id)arg1 returningError:(id*)arg2;
- (long)runRunLoopUntilStopped;
- (int)progressWeight;
- (void)_sendSuccessToDelegate;
- (void)run:(BOOL)arg1;
- (void)_sendWillStartToDelegate;
- (void)sendProgressToDelegate;
- (void)setOperationRunLoop:(id)arg1;
- (void)_sendErrorToDelegate:(id)arg1;
- (id)threadSafeDelegate;
- (id)serializationLockIdentifiers;
- (id)copyActivePowerAssertionIdentifiers;
- (id)parentOperation;
- (void)_failAfterException;
- (void)_main:(BOOL)arg1;
- (BOOL)shouldRunWithBackgroundPriority;
- (id)powerAssertionIdentifier;
- (BOOL)shouldFailAfterUniquePredecessorError:(id)arg1;
- (id)uniqueKey;
- (void)setShouldMessageMainThread:(BOOL)arg1;
- (id)operationRunLoop;
- (BOOL)stopRunLoop;
- (void)_removeSubOperation:(id)arg1;
- (void)dispatchCompletionBlock;
- (void)_addSubOperation:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)_keepAliveTimer:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (id)init;
- (void)dealloc;
- (id)progress;
- (void)setError:(id)arg1;
- (void)run;
- (void)cancel;
- (void)main;
- (id)error;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)unlock;
- (void)lock;

@end
