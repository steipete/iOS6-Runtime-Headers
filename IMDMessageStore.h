/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSNumber, NSString;

@interface IMDMessageStore : NSObject  {
    NSString *_modificationStamp;
    NSNumber *_cachedUnreadMessageCount;
    BOOL _databaseOpen;
    BOOL _pendingDatabaseClose;
    BOOL _suppressedUpdates;
    BOOL _pendingDBUpdatePost;
}

@property(retain) NSString * modificationStamp;

+ (void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3;
+ (id)sharedInstance;

- (BOOL)isCurrentThreadDBThread;
- (void)performBlock:(id)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)setSuppressDatabaseUpdates:(BOOL)arg1;
- (void)cleanseAttachments;
- (long long)unreadMessageCountWithRoomName:(id)arg1 onService:(id)arg2;
- (long long)unreadMessageCountWithHandle:(id)arg1 onService:(id)arg2;
- (long long)unreadMessagesCount;
- (id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 fromMe:(BOOL)arg4;
- (id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 fromMe:(BOOL)arg4;
- (id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 fromMe:(BOOL)arg4;
- (id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 fromMe:(BOOL)arg4;
- (id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3;
- (id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(id)arg4;
- (id)chatsForMessage:(id)arg1;
- (id)chatForMessage:(id)arg1;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (void)markMessageAsDeduplicated:(id)arg1;
- (id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5;
- (BOOL)hasStoredMessageWithGUID:(id)arg1;
- (BOOL)canStoreMessage:(id)arg1 onService:(id)arg2;
- (id)storeMessage:(id)arg1 forceReplace:(BOOL)arg2 modifyError:(BOOL)arg3 modifyFlags:(BOOL)arg4 flagMask:(unsigned long long)arg5;
- (void)closeDatabase;
- (void)_postDBUpdate;
- (void)_updateModificationDate;
- (id)modificationStamp;
- (void)__postDBUpdate;
- (id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(id)arg4;
- (void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned int)arg5 completion:(id)arg6;
- (id)deleteMessageGUIDs:(id)arg1;
- (id)chatsForMessageGUID:(id)arg1;
- (id)chatForMessageGUID:(id)arg1;
- (id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned int)arg3;
- (id)messagesWithGUIDs:(id)arg1;
- (BOOL)_hasMessagesWithGUIDs:(id)arg1;
- (void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2;
- (void)updateStamp;
- (void)_storeAttachmentsForMessage:(id)arg1;
- (id)_messagesWithGUIDs:(id)arg1;
- (id)messageWithGUID:(id)arg1;
- (void)_setDatabaseCloseTimer;
- (void)_clearDatabaseCloseTimer;
- (void)__closeDatabase;
- (void)openDatabase;
- (void)_performInitialHousekeeping;
- (void)setModificationStamp:(id)arg1;
- (void)systemDidLeaveMemoryPressure;
- (void)systemDidEnterMemoryPressure;
- (id)init;
- (void)dealloc;
- (void)performBlock:(id)arg1;

@end
