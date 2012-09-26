/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@interface NSPersistentStoreCache : NSObject  {
    id _externalData;
    unsigned int _capacity;
}

+ (void)initialize;

- (id)externalDataForSourceObjectID:(id)arg1 key:(id)arg2 timestamp:(double)arg3;
- (void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 key:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;
- (unsigned int)optionsForObjectID:(id)arg1;
- (id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2;
- (void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (int)refCountForObjectID:(id)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (void)decrementRefCountForObjectID:(id)arg1;
- (void)forgetAllExternalData;
- (void)_growRegistrationCollectionTo:(unsigned int)arg1;
- (void)forgetExternalDataForObjectID:(id)arg1;
- (void)_doForgetAllExternalData:(void*)arg1;
- (id)_initWithValueCallbacks:(void*)arg1;
- (void)_createExternalDataDictWithValueCallbacks:(void*)arg1;
- (id)init;
- (void)dealloc;

@end
