/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks//CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, <MSSharingProtocolDelegate>, NSURL;

@interface MSSharingProtocol : NSObject  {
    struct __MSShPCContext { 
        struct __MSSPCContext { 
            void *owner; 
            struct __CFString {} *personID; 
            struct __CFString {} *authToken; 
            struct __CFDictionary {} *deviceInfo; 
            double connectionTimeout; 
            int (*__didReceiveDataCallback)(); 
            int (*__didFinishCallback)(); 
            int (*__didFailAuthenticationCallback)(); 
            int (*__didReceiveServerSideConfigVersionCallback)(); 
            int (*__didReceiveRetryAfterCallback)(); 
            struct CFURLConnectionClient_V1 {} *__client; 
            struct _CFURLConnection {} *__connection; 
            struct __CFData {} *__responseData; 
            struct __CFHTTPMessage {} *__response; 
            struct __CFError {} *__error; 
        } _super; 
        int (*didFindShareStateCallback)(); 
        int (*didFinishTransactionCallback)(); 
        int (*didFailAuthenticationCallback)(); 
        int (*didReceiveServerSideConfigurationVersionCallback)(); 
        int __contextType; 
    } _context;
    NSString *_personID;
    NSURL *_inviteURL;
    NSURL *_manageURL;
    NSURL *_respondURL;
    NSURL *_statusURL;
    NSArray *_shares;
    int _transactionType;
    <MSSharingProtocolDelegate> *_delegate;
}

@property <MSSharingProtocolDelegate> * delegate;
@property(readonly) NSString * personID;

+ (id)_sharesFromShareDictsArray:(id)arg1;
+ (id)_shareDictsArrayFromShares:(id)arg1;
+ (id)_shareDictFromShare:(id)arg1;
+ (id)_shareFromShareDict:(id)arg1;
+ (id)_dictShareStateFromShareState:(int)arg1;
+ (int)_shareStateFromShareDictShareState:(id)arg1;
+ (id)shareStateFromProtocol:(id)arg1;
+ (id)shareFromPushUserInfo:(id)arg1 outSourcePersonID:(id*)arg2 outTargetPersonID:(id*)arg3 outError:(id*)arg4;
+ (id)_invalidFieldErrorWithFieldName:(id)arg1;

- (id)personID;
- (void)_didFailAuthenticationWithError:(id)arg1;
- (void)_didFinishTransactionWithResponseObject:(id)arg1 error:(id)arg2;
- (void)_didFindShareState:(id)arg1;
- (void)_checkForFailedInvitesWithResponse:(id)arg1;
- (void)requestCurrentShareState;
- (void)modifyShares:(id)arg1;
- (void)sendResponseToInvitation:(id)arg1 accept:(BOOL)arg2;
- (void)sendInvitations:(id)arg1;
- (void)deleteShares:(id)arg1;
- (void)_didFindServerSideConfigurationVersion:(id)arg1;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)abort;

@end
