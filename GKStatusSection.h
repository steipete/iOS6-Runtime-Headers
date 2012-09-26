/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSError, NSString, NSMapTable;

@interface GKStatusSection : GKFlexibleSpaceSection  {
    BOOL _loading;
    NSString *_status;
    NSString *_info;
    NSError *_error;
    float _statusHeight;
    NSMapTable *_statusViews;
}

@property(getter=isLoading) BOOL loading;
@property(retain) NSString * status;
@property(retain) NSString * info;
@property(retain) NSError * error;
@property float statusHeight;
@property(retain) NSMapTable * statusViews;


- (void)setStatusViews:(id)arg1;
- (id)statusViews;
- (void)setStatusHeight:(float)arg1;
- (float)statusHeight;
- (void)updateDisplayState;
- (id)statusViewForTableView:(id)arg1;
- (void)applyStatusToView:(id)arg1;
- (void)setLoading:(BOOL)arg1;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (struct { unsigned int x1; unsigned char x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; })currentMetricsInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)rowCountInTableView:(id)arg1;
- (BOOL)isLoading;
- (void)setStatus:(id)arg1;
- (void)setInfo:(id)arg1;
- (id)info;
- (id)init;
- (void)dealloc;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setError:(id)arg1;
- (id)error;
- (id)status;

@end
