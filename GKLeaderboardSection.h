/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayer, GKSparseLeaderboard, NSIndexPath, GKThreadsafeDictionary, NSString, NSObject<GKLeaderboardDelegate>, GKDecoratedLabel, NSArray;

@interface GKLeaderboardSection : GKInterleavedListTableSection  {
    NSString *_title;
    GKGame *_game;
    GKPlayer *_player;
    NSString *_categoryID;
    NSArray *_searchPlayers;
    int _timeScope;
    int _playerScope;
    BOOL _usesUppercaseTitles;
    NSArray *_leaderboards;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    NSObject<GKLeaderboardDelegate> *_leaderboardDelegate;
    GKDecoratedLabel *_statusView;
    NSIndexPath *_previouslySelectedIndexPath;
    GKThreadsafeDictionary *_playerDictionary;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property(retain) NSString * categoryID;
@property(retain) NSArray * searchPlayers;
@property BOOL usesUppercaseTitles;
@property int timeScope;
@property int playerScope;
@property(retain) NSArray * leaderboards;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property NSObject<GKLeaderboardDelegate> * leaderboardDelegate;
@property(retain) GKDecoratedLabel * statusView;
@property(retain) GKThreadsafeDictionary * playerDictionary;
@property(retain) NSIndexPath * previouslySelectedIndexPath;


- (void)setPlayerDictionary:(id)arg1;
- (id)playerDictionary;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (void)forwardHandlePressGesture:(id)arg1 forTableView:(id)arg2;
- (id)iconURLStringForItem:(id)arg1;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(int)arg2 playerScope:(int)arg3;
- (BOOL)tableView:(id)arg1 row:(int*)arg2 column:(int*)arg3 forItem:(id)arg4;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (void)setPreviouslySelectedIndexPath:(id)arg1;
- (id)previouslySelectedIndexPath;
- (BOOL)canSelectPlayer:(id)arg1;
- (id)tableView:(id)arg1 indexPathsForLeaderboardRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inSection:(unsigned int)arg3;
- (BOOL)tableView:(id)arg1 isShowcasedScoreRow:(int)arg2;
- (float)tableView:(id)arg1 baseHeightForScoreRowAtIndexPath:(id)arg2;
- (BOOL)showPortraitForScoreAtRow:(int)arg1;
- (int)_defaultPlayerScopeForColumnIndex:(int)arg1;
- (void)updateStatusViewInTableView:(id)arg1;
- (void)setStatusView:(id)arg1;
- (id)statusView;
- (Class)leaderboardCellClass;
- (id)tableView:(id)arg1 scoreCellWithIdentifiers:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 statusCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 headerCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)_showDisclosureChevronForPlayer:(id)arg1;
- (Class)leaderboardCellContentsClass;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (id)playerForScore:(id)arg1;
- (id)tableView:(id)arg1 reuseIdentifiersForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2 column:(int)arg3;
- (BOOL)tableView:(id)arg1 isShowMoreRow:(int)arg2;
- (Class)leaderboardClass;
- (void)cachePlayer:(id)arg1 inDictionary:(id)arg2;
- (id)searchPlayers;
- (void)setSearchPlayers:(id)arg1;
- (id)tableView:(id)arg1 headerTextForLeaderboard:(id)arg2 uppercase:(BOOL)arg3;
- (BOOL)usesUppercaseTitles;
- (id)tableView:(id)arg1 headerTextForLeaderboardWithPlayerScope:(int)arg2 andScoreCount:(int)arg3 uppercase:(BOOL)arg4;
- (id)playerForPlayerID:(id)arg1;
- (id)searchableLeaderboard;
- (int)sectionShowcasedScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionScoreCountInTableView:(id)arg1 column:(int)arg2;
- (void)loadLeaderboards:(id)arg1 complete:(id)arg2;
- (id)leaderboards;
- (void)setLeaderboards:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (int)footerRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1 column:(int)arg2;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (int)contentRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)headerRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (void)tableView:(id)arg1 refreshCellAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 loadAdditionalDataForSection:(int)arg2 rows:(id)arg3 thenUpdateView:(id)arg4;
- (void)filterWithSearchText:(id)arg1;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)viewForSectionHeaderInTableView:(id)arg1;
- (id)titleForHeaderInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (void)prepareLeaderboards;
- (void)setUsesUppercaseTitles:(BOOL)arg1;
- (id)globalLeaderboard;
- (id)friendLeaderboard;
- (id)leaderboardDelegate;
- (void)purgeCachedData;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (id)categoryID;
- (void)setCategoryID:(id)arg1;
- (id)initWithGame:(id)arg1;
- (void)setPlayerScope:(int)arg1;
- (int)playerScope;
- (void)setTimeScope:(int)arg1;
- (int)timeScope;
- (void)setGame:(id)arg1;
- (id)game;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
