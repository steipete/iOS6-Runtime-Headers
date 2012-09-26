/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, HSLibrary, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface MPHomeSharingML3DataProvider : MPMediaLibraryDataProviderML3  {
    HSLibrary *_homeSharingLibrary;
    NSMutableDictionary *_tokenDataForDSIDs;
    NSMutableSet *_loadedContainerPIDs;
    NSMutableDictionary *_blocksForLoadingContainerPIDs;
    NSObject<OS_dispatch_queue> *_containerFillQueue;
    unsigned int _updateCheckEnabled : 1;
}

@property(readonly) HSLibrary * homeSharingLibrary;
@property(readonly) BOOL isSupportedSharingVersion;

+ (id)homeSharingGroupID;
+ (BOOL)isScanningForLibraries;
+ (void)_determineHomeSharingGroupIDIfNecessary;
+ (void)endScanningForLibraries;
+ (void)beginScanningForLibraries;
+ (BOOL)isConnecting;

- (void)setRentalPlaybackStartDateForItemID:(unsigned long long)arg1;
- (void)updateUbiquitousValuesForTrackWithKey:(id)arg1 mediaPropertyValues:(id)arg2;
- (void)setTokenData:(id)arg1 forAuthorizedDSID:(unsigned long long)arg2;
- (id)_tokenDataForMediaItem:(id)arg1;
- (void)_fillContainerForQueryCriteria:(id)arg1 completionBlock:(id)arg2;
- (void)_fetchTokensForAuthorizedDSIDs;
- (void)_scheduleUpdateCheck;
- (BOOL)isSupportedSharingVersion;
- (void)_homeSharingGroupIDDidChangeNotification:(id)arg1;
- (id)homeSharingLibrary;
- (id)initWithHomeSharingLibrary:(id)arg1;
- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;
- (void)loadCoverFlowArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadBestTimedArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (id)errorResolverForMediaItem:(id)arg1;
- (id)protectedContentSupportStorageURL;
- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;
- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;
- (id)itemResultSetForQueryCriteria:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)performUbiquitousDatabaseUpdateTransaction:(id)arg1;
- (void)downloadItemWithIdentifier:(long long)arg1 completionHandler:(id)arg2;
- (BOOL)hasGeniusMixes;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id)arg2 progressHandler:(id)arg3;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)disconnect;
- (void)dealloc;
- (id)name;
- (id)uniqueIdentifier;

@end
