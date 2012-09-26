/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

@interface MSObjectQueue : NSObject  {
    struct sqlite3 { } *_db;
    struct __CFDictionary { } *_statements;
}

@property(readonly) long long count;


- (id)_objectWrapperFromQueueQuery:(struct sqlite3_stmt { }*)arg1 outSize:(long long*)arg2;
- (struct sqlite3_stmt { }*)_statementLabel:(id)arg1 query:(const char *)arg2;
- (void)commitObjectsWrappers:(id)arg1;
- (id)allObjectWrappersMaxCount:(long long)arg1;
- (void)commitErrorCountsForObjectWrappers:(id)arg1;
- (void)removeObjectWrappersFromQueue:(id)arg1;
- (id)objectWrappersWithZeroSizeMaxCount:(long long)arg1;
- (id)smallestObjectWrappersTargetTotalSize:(long long)arg1 maxCount:(long long)arg2;
- (void)appendObjectWrappers:(id)arg1;
- (void)dealloc;
- (long long)count;
- (id)initWithPath:(id)arg1;

@end
