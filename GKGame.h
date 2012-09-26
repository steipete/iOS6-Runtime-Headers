/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKStoreItemInternal, NSDictionary, NSNumber, GKGameInternal;

@interface GKGame : NSObject <NSCoding> {
    GKGameInternal *_internal;
    GKStoreItemInternal *_storeItem;
    BOOL _sandboxed;
}

@property(getter=isInstalled,readonly) BOOL installed;
@property(getter=isInternal,readonly) BOOL internal;
@property(getter=isDownloading,readonly) BOOL downloading;
@property(retain) GKGameInternal * internal;
@property(getter=isPrerendered) BOOL prerendered;
@property(getter=isSandboxed) BOOL sandboxed;
@property(readonly) NSDictionary * gameDescriptor;
@property(readonly) NSNumber * adamID;
@property(readonly) NSNumber * externalVersion;
@property(readonly) NSString * bundleIdentifier;
@property(readonly) NSString * bundleVersion;
@property(readonly) NSString * cacheKey;
@property unsigned int platform;
@property(readonly) NSString * name;
@property(readonly) NSString * defaultCategory;
@property(retain) GKStoreItemInternal * storeItem;
@property(readonly) struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; } gameInfo;

+ (id)lookupMobileInstallation:(id)arg1;
+ (id)defaultGameIconWithStyle:(int)arg1;
+ (void)loadStoreItemsForGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id)arg2;
+ (struct CGSize { float x1; float x2; })serverImageSizeForIconStyle:(int)arg1;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2;
+ (BOOL)isGameCenter;
+ (id)currentGame;

- (void)loadTellAFriendMessageWithCompletionHandler:(id)arg1;
- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (BOOL)isInternal;
- (void)setSandboxed:(BOOL)arg1;
- (BOOL)isStoreItemUnexpired;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg1 handler:(id)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(id)arg2;
- (void)loadGameRatingWithCompletionHandler:(id)arg1;
- (void)loadStoreItemWithCompletionHandler:(id)arg1;
- (id)loadIconForStyle:(int)arg1 withCompletionHandler:(id)arg2;
- (id)cachedIconForStyle:(int)arg1;
- (void)updateWithInternal:(id)arg1;
- (id)_imageURLForIconStyle:(int)arg1;
- (id)macBrushForIconStyle:(int)arg1;
- (id)imageSourceForiOSIconStyle:(int)arg1;
- (void)setInternal:(id)arg1;
- (id)gameDescriptor;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;
- (id)URLStringForImageWithShineIfNeeded;
- (id)imageSourceForIconStyle:(int)arg1;
- (BOOL)isSandboxed;
- (struct GKGameInfo { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned int x5; unsigned int x6; unsigned int x7; })gameInfo;
- (id)internal;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cacheKey;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end