/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation  {
    NSString *_categoryID;
    NSString *_localizedTitle;
    unsigned int _maxRank;
    NSString *_scoreType;
    NSString *_groupID;
}

@property(retain) NSString * categoryID;
@property(retain) NSString * localizedTitle;
@property unsigned int maxRank;
@property(retain) NSString * scoreType;
@property(retain) NSString * groupID;

+ (id)codedPropertyKeys;

- (void)setGroupID:(id)arg1;
- (id)scoreType;
- (id)initWithLeaderboardID:(id)arg1 serverRepresentation:(id)arg2;
- (void)setScoreType:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (id)groupID;
- (void)setMaxRank:(unsigned int)arg1;
- (unsigned int)maxRank;
- (id)categoryID;
- (void)setCategoryID:(id)arg1;
- (id)localizedTitle;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;

@end
