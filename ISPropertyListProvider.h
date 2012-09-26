/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
    BOOL _shouldPostFooterSectionChanged;
    BOOL _shouldProcessAccount;
    BOOL _shouldProcessAuthenticationDialogs;
    BOOL _shouldProcessDialogs;
    BOOL _shouldProcessProtocol;
    BOOL _shouldTriggerDownloads;
}

@property BOOL shouldPostFooterSectionChanged;
@property BOOL shouldProcessAccount;
@property BOOL shouldProcessAuthenticationDialogs;
@property BOOL shouldProcessDialogs;
@property BOOL shouldProcessProtocol;
@property BOOL shouldTriggerDownloads;


- (void)setShouldTriggerDownloads:(BOOL)arg1;
- (void)setShouldProcessDialogs:(BOOL)arg1;
- (void)setShouldProcessAuthenticationDialogs:(BOOL)arg1;
- (void)setShouldProcessAccount:(BOOL)arg1;
- (void)setShouldPostFooterSectionChanged:(BOOL)arg1;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
- (void)_selectFooterSection:(id)arg1;
- (void)_checkDownloadQueues;
- (BOOL)processPropertyList:(id)arg1 returningError:(id*)arg2;
- (BOOL)_processFailureTypeFromPropertyList:(id)arg1 error:(id*)arg2;
- (void)_performActionsForResponse:(id)arg1;
- (BOOL)processDialogFromPropertyList:(id)arg1 returningError:(id*)arg2;
- (BOOL)shouldTriggerDownloads;
- (BOOL)shouldProcessProtocol;
- (BOOL)shouldProcessDialogs;
- (BOOL)shouldProcessAuthenticationDialogs;
- (BOOL)shouldProcessAccount;
- (BOOL)shouldPostFooterSectionChanged;
- (void)setShouldProcessProtocol:(BOOL)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
