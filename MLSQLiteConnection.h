/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class MLSQLiteConnectionQueue, NSHashTable, NSObject<OS_dispatch_queue>, NSMutableArray, CPLRUDictionary, <MLSQLiteConnectionSQLiteDelegate>, NSString;

@interface MLSQLiteConnection : NSObject  {
    NSString *_path;
    NSHashTable *_registeredStatements;
    NSMutableArray *_registeredFunctions;
    NSMutableArray *_registeredModules;
    CPLRUDictionary *_statementCache;
    struct sqlite3 { } *_db;
    unsigned int _writeStatementCount;
    unsigned int _busyHandlingCounter;
    int _openFlags;
    int _activeTransactionKind;
    int _profilingLevel;
    BOOL _activeTransactionHasWrites;
    NSObject<OS_dispatch_queue> *_queue;
    MLSQLiteConnectionQueue *_connectionQueue;
    <MLSQLiteConnectionSQLiteDelegate> *_SQLiteDelegate;
}

@property(retain) MLSQLiteConnectionQueue * connectionQueue;
@property(readonly) BOOL activeTransactionHasWrites;
@property(readonly) int activeTransactionKind;
@property int profilingLevel;
@property(readonly) struct sqlite3 { }* db;
@property <MLSQLiteConnectionSQLiteDelegate> * SQLiteDelegate;


- (id)SQLiteDelegate;
- (int)profilingLevel;
- (int)activeTransactionKind;
- (BOOL)activeTransactionHasWrites;
- (BOOL)enumerateRowsWithSQL:(id)arg1 parameters:(id)arg2 handler:(id)arg3;
- (BOOL)enumerateRowsWithSQL:(id)arg1 valueHandler:(id)arg2;
- (id)initForWritingWithURL:(id)arg1;
- (id)initForReadingWithURL:(id)arg1;
- (void)incrementWriteStatementRunCount;
- (void)unregisterStatement:(id)arg1;
- (void)registerStatement:(id)arg1;
- (void)registerModuleName:(id)arg1 moduleMethods:(const struct sqlite3_module { int x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); }*)arg2;
- (void*)moduleContextForModuleName:(id)arg1;
- (void)setModuleContext:(void*)arg1 forModuleName:(id)arg2 contextReleaseBlock:(id)arg3;
- (id)_endStatement;
- (void)_incrementalVaccuumIfAppropriate;
- (BOOL)rollbackTransactionWithBusyHandler:(id)arg1;
- (BOOL)commitTransactionWithBusyHandler:(id)arg1;
- (BOOL)beginTransactionKind:(int)arg1 withBusyHandler:(id)arg2;
- (BOOL)endTransactionWithBusyHandler:(id)arg1;
- (id)_rollbackStatement;
- (id)_commitStatement;
- (void)disableBusyHandling;
- (void)enableBusyHandling;
- (id)_beginImmediateStatement;
- (id)_beginStatement;
- (id)_initWithFlags:(int)arg1 path:(id)arg2;
- (void)_addRegisteredModule:(id)arg1 name:(id)arg2;
- (id)_registeredModuleNamed:(id)arg1;
- (void)_addRegisteredFunction:(id)arg1 name:(id)arg2 argumentCount:(int)arg3;
- (BOOL)enumerateRowsWithSQL:(id)arg1 handler:(id)arg2;
- (void)registerFunctionName:(id)arg1 argumentCount:(int)arg2 block:(id)arg3;
- (BOOL)performTransactionKind:(int)arg1 withBlock:(id)arg2;
- (BOOL)performTransactionKind:(int)arg1 withBusyHandler:(id)arg2 block:(id)arg3;
- (id)statementWithSQL:(id)arg1;
- (BOOL)deleteDatabase;
- (void)registerFunctionName:(id)arg1 argumentCount:(int)arg2 function:(int (*)())arg3;
- (id)initForReadingWithPath:(id)arg1;
- (id)initForWritingWithPath:(id)arg1;
- (BOOL)runSQL:(id)arg1;
- (void)setProfilingLevel:(int)arg1;
- (id)connectionQueue;
- (void)setConnectionQueue:(id)arg1;
- (void)setSQLiteDelegate:(id)arg1;
- (void)statementWithSQLPrefix:(id)arg1 inPersistentIDs:(const long long*)arg2 count:(unsigned int)arg3 usingBlock:(id)arg4;
- (void)statementWithSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (BOOL)performTransactionWithBlock:(id)arg1;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (id)description;
- (BOOL)endTransaction;

@end
