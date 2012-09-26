/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSSQLCore;

@interface NSSQLRowCache : NSPersistentStoreCache  {
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;

- (void)registerRow:(id)arg1 forObjectID:(struct _NSScalarObjectID { Class x1; }*)arg2;
- (void)registerSnapshots:(id)arg1;
- (void)forgetRowForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (void)registerToMany:(id)arg1 forSourceObjectID:(struct _NSScalarObjectID { Class x1; }*)arg2 relationshipName:(id)arg3 andTimestamp:(double)arg4;
- (id)toManyForSourceObjectID:(id)arg1 relationshipName:(id)arg2 after:(double)arg3;
- (id)rowForObjectID:(id)arg1 after:(double)arg2;
- (id)adapter;
- (id)initWithSQLCore:(id)arg1;
- (id)rowForObjectID:(id)arg1;
- (void)forgetAllExternalData;
- (void)dealloc;

@end
