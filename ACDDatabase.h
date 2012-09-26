/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSPersistentStore, NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface ACDDatabase : NSObject  {
    NSString *_path;
    NSManagedObjectContext *_context;
    NSManagedObjectModel *_model;
    NSPersistentStoreCoordinator *_storeCoordinator;
    NSPersistentStore *_store;
}

@property(readonly) NSString * path;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property int version;

+ (struct __CFString { }*)_copyRootPath;
+ (id)defaultPath;

- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (BOOL)_databaseFileExists;
- (id)_store;
- (void)_setupManagedObjectContext;
- (id)objectForObjectURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (unsigned int)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (id)initWithDefaultPath;
- (void).cxx_destruct;
- (id)managedObjectContext;
- (void)setVersion:(int)arg1;
- (int)version;
- (id)initWithPath:(id)arg1;
- (id)path;

@end
