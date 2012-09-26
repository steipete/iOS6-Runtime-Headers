/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementSection, GKGameRecord, NSOrderedSet;

@interface GKAchievementDataSource : GKSectionArrayDataSource  {
    GKAchievementSection *_achievementSection;
    GKGameRecord *_gameRecord;
    NSOrderedSet *_achievements;
}

@property(readonly) GKGameRecord * gameRecord;
@property(readonly) NSOrderedSet * achievements;
@property(retain) GKAchievementSection * achievementSection;

+ (id)sectionArrayDataSourceWithSection:(id)arg1 inParentMultiDataSource:(id)arg2;
+ (id)sectionArrayDataSourceWithSection:(id)arg1 inController:(id)arg2;

- (id)achievementSection;
- (void)setAchievementSection:(id)arg1;
- (void)tableView:(id)arg1 updateStatusViewAfterLoading:(id)arg2 withError:(id)arg3;
- (void)tableView:(id)arg1 updateStatusViewBeforeLoading:(id)arg2;
- (id)gameRecord;
- (id)achievements;
- (void)dealloc;

@end
