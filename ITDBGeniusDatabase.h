/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary, ML3SqliteDatabase;

@interface ITDBGeniusDatabase : NSObject  {
    ML3MusicLibrary *_musicLibrary;
    ML3SqliteDatabase *_geniusDB;
    double _connectionFailedTime;
    struct __CFDictionary { } *_statementCache;
    BOOL _isInTransaction;
}

@property BOOL isInTransaction;

+ (id)sharedGeniusDatabase;

- (void)setIsInTransaction:(BOOL)arg1;
- (BOOL)isInTransaction;
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1 intoData:(id)arg2;
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)arg1;
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)arg1;
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)arg1;
- (unsigned int)geniusConfigurationVersion;
- (id)copyGeniusConfigrationDataAndBytes;
- (unsigned int)defaultTrackCount;
- (unsigned int)defaultMinTrackCount;
- (BOOL)hasGeniusFeatureEnabled;
- (BOOL)hasGeniusDataAvailable;
- (BOOL)hasDatabase;
- (unsigned long long)_getInt64ValueInTable:(id)arg1 column:(id)arg2 where:(id)arg3 limit:(unsigned int)arg4;
- (BOOL)_readBlobForRowID:(unsigned long long)arg1 intoData:(id)arg2 table:(const char *)arg3 blobColumn:(const char *)arg4;
- (BOOL)_readBlobIntoData:(id)arg1 table:(id)arg2 blobColumn:(id)arg3 where:(id)arg4;
- (id)_copyBlobDataAndBytesInTable:(id)arg1 blobColumn:(id)arg2 where:(id)arg3;
- (unsigned int)_getInt32ValueInTable:(id)arg1 column:(id)arg2;
- (unsigned int)_hasRowsInTable:(id)arg1;
- (BOOL)_hasAnySongs;
- (BOOL)_copyBlobData:(id*)arg1 blobAllocType:(int)arg2 table:(id)arg3 blobColumn:(id)arg4 where:(id)arg5;
- (id)database;
- (void)_invalidateDatabase;
- (void)_connect;
- (id)init;
- (void).cxx_destruct;

@end
