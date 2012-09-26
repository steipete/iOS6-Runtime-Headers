/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableArray, NSMutableSet;

@interface MessageStore : NSObject <NSCopying> {
    NSMutableSet *_uniqueStrings;
    union { 
        struct { 
            NSMutableArray *_headerDataCache; 
            NSMutableArray *_headerCache; 
            NSMutableArray *_bodyDataCache; 
            NSMutableArray *_bodyCache; 
        } objectCaches; 
        struct { 
            struct __CFDictionary {} *_headerDataCache; 
            struct __CFDictionary {} *_headerCache; 
            struct __CFDictionary {} *_bodyDataCache; 
            struct __CFDictionary {} *_bodyCache; 
        } intKeyCaches; 
    } _caches;
}

+ (void)setDefaultMessageHeadersClass:(Class)arg1;
+ (Class)classForMimePart;
+ (Class)headersClass;

- (id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (void)_flushAllMessageData;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)decryptedTopLevelPartForPart:(id)arg1;
- (id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3;
- (void)_flushAllCaches;
- (void)_flushAllCachesLocking:(BOOL)arg1;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1;
- (id)additionalHeadersForForwardOfMessage:(id)arg1;
- (id)additionalHeadersForReplyOfMessage:(id)arg1;
- (id)bestAlternativeForPart:(id)arg1;
- (id)defaultAlternativeForPart:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)uniquedString:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3;
- (id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)setMessageClass:(Class)arg1;
- (id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
