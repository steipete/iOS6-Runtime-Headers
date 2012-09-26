/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@class MSObjectQueue, <MSPublishStorageProtocol>, <MSPublisherDelegate>, MSMediaStreamDaemon, MSPublishStreamsProtocol, NSMutableArray, NSURL, NSMutableDictionary;

@interface MSPublisher : MSCupidStateMachine <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate> {
    <MSPublisherDelegate> *_delegate;
    MSMediaStreamDaemon *_daemon;
    int _state;
    MSObjectQueue *_uploadQueue;
    NSMutableArray *_requestAuthQueue;
    unsigned int _sendingQueueCount;
    NSMutableArray *_sendingQueue;
    NSMutableDictionary *_fileHashToAssetMap;
    MSPublishStreamsProtocol *_protocol;
    <MSPublishStorageProtocol> *_storageProtocol;
    NSURL *_storageProtocolURL;
    NSMutableArray *_tempFiles;
    NSMutableDictionary *_maxSizeByUTI;
    long long _publishTargetByteCount;
    int _publishBatchSize;
    int _maxErrorCount;
}

@property MSMediaStreamDaemon * daemon;
@property(retain) NSURL * storageProtocolURL;
@property long long publishTargetByteCount;
@property int publishBatchSize;
@property <MSPublisherDelegate> * delegate;

+ (id)nextActivityDateForPersonID:(id)arg1;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (id)_clearInstantiatedPublishersByPersonID;
+ (void)forgetPersonID:(id)arg1;
+ (void)stopAllActivities;
+ (id)existingPublisherForPersonID:(id)arg1;
+ (id)publisherForPersonID:(id)arg1;
+ (BOOL)isInRetryState;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDate;

- (void)setPublishTargetByteCount:(long long)arg1;
- (long long)publishTargetByteCount;
- (id)storageProtocolURL;
- (id)daemon;
- (void)_forget;
- (void)_removeAssetFromFileHashMap:(id)arg1;
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;
- (void)setPublishBatchSize:(int)arg1;
- (int)publishBatchSize;
- (void)submitAssetCollectionsForPublication:(id)arg1;
- (void)_abort;
- (id)_abortedError;
- (int)_stop;
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(BOOL*)arg2 setOutIsCounted:(BOOL*)arg3 setOutIsFatal:(BOOL*)arg4 setOutNeedsBackoff:(BOOL*)arg5 setOutIsTemporary:(BOOL*)arg6 setOutIsTokenAuth:(BOOL*)arg7 setOutIsAuthError:(BOOL*)arg8;
- (void)setStorageProtocolURL:(id)arg1;
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;
- (void)_addAssetToFileHashMap:(id)arg1;
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;
- (void)_didFinishUsingAssetCollections:(id)arg1;
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;
- (void)_sendUploadComplete;
- (void)_sendFilesToMMCS;
- (void)_sendMetadataToStreams;
- (void)_requestDerivatives;
- (BOOL)_isAllowedToUpload;
- (void)_updateMasterManifest;
- (void)_refreshServerSideConfiguredParameters;
- (void)_serverSideConfigurationDidChange:(id)arg1;
- (BOOL)_isInRetryState;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)computeHashForAsset:(id)arg1;
- (BOOL)enqueueAssetCollections:(id)arg1 outError:(id*)arg2;
- (void)setDaemon:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)deactivate;
- (void)stop;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)publish;
- (void)abort;

@end
