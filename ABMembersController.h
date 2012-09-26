/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSIndexPath, ABMembersFilteredDataSource, <ABMembersControllerDelegate>, <ABMembersControllerSearchCompletionDelegate>, ABMembersDataSource, <ABStyleProvider>, UIView, UIViewController, UISearchDisplayController, NSString, NSOperationQueue, UISearchBar;

@interface ABMembersController : ABContentController <ABMembersDataSourceDelegate, UITextFieldDelegate, UISearchDisplayDelegate, ABSearchOperationDelegate, UISearchBarDelegate> {
    ABMembersDataSource *_membersDataSource;
    ABMembersFilteredDataSource *_searchDataSource;
    <ABStyleProvider> *_styleProvider;
    unsigned int _cellsCreated;
    unsigned int _memberCount;
    UIView *_tableAccessoryView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchController;
    UIViewController *_parentViewController;
    unsigned int _searchSequenceNumber;
    NSOperationQueue *_operationQueue;
    <ABMembersControllerDelegate> *_membersControllerDelegate;
    BOOL _resumeForPhoneApp;
    BOOL _showingCardFromSearch;
    BOOL _wasKeyboardShowing;
    BOOL _shouldRestoreScrollPosition;
    BOOL _shouldDeactivateSearch;
    NSIndexPath *_selectedIndexPath;
    BOOL _searchEnabled;
    BOOL _needToClearOldResults;
    <ABMembersControllerSearchCompletionDelegate> *_searchCompletionDelegate;
}

@property(getter=isSearchEnabled) BOOL searchEnabled;
@property(retain) <ABStyleProvider> * styleProvider;
@property <ABMembersControllerDelegate> * membersControllerDelegate;
@property <ABMembersControllerSearchCompletionDelegate> * searchCompletionDelegate;
@property(readonly) BOOL isServerSearchGroup;
@property(readonly) NSString * currentSearchText;

+ (id)newNameSearchOperationWithString:(id)arg1 contactsFilter:(id)arg2 addressBook:(void*)arg3 delegate:(id)arg4 inOutSequenceNumber:(unsigned int*)arg5;

- (void)searchCurrentContactsGroupForWords:(id)arg1 animated:(BOOL)arg2;
- (void)setSearchCompletionDelegate:(id)arg1;
- (id)searchCompletionDelegate;
- (void)setSearchEnabled:(BOOL)arg1;
- (BOOL)isSearchEnabled;
- (void)_deselectAllRowsWithAnimation;
- (void)displayedMembersListChanged;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)cancelSearching:(id)arg1;
- (void)resetStateForDisplayedFilterChange;
- (void)setCellsCreated:(unsigned int)arg1;
- (unsigned int)cellsCreated;
- (void)loadState;
- (void)saveState:(void*)arg1;
- (void)stopScrolling;
- (void)setMembersControllerDelegate:(id)arg1;
- (BOOL)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (BOOL)abDataSource:(id)arg1 selectedPerson:(void*)arg2 atIndexPath:(id)arg3 withMemberCell:(id)arg4 animate:(BOOL)arg5;
- (void)_updateNoContactsViewAnimated:(BOOL)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3;
- (BOOL)selectAndScrollMemberVisible:(void*)arg1;
- (void)makeMainTableViewVisible;
- (id)currentSearchText;
- (void)_searchForWords:(id)arg1;
- (id)_localizedStringForError:(int)arg1;
- (void)_cancelGALSearch;
- (BOOL)shouldShowGroups;
- (id)currentTableView;
- (void)_updateEmptyTableViewAnimated:(BOOL)arg1;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)_reselectLastSelectedCellIfNeeded;
- (void)cancelSearchingAnimated:(BOOL)arg1;
- (BOOL)isServerSearchGroup;
- (void)restoreScrollPosition;
- (void)saveScrollPosition:(void*)arg1;
- (id)tableViewPathToMember:(void*)arg1;
- (int)globalIndexOfMember:(void*)arg1;
- (BOOL)isSearching;
- (void)_updateCountString;
- (id)searchDataSource;
- (id)membersDataSource;
- (id)contactsFilter;
- (id)membersControllerDelegate;
- (id)styleProvider;
- (void)setStyleProvider:(id)arg1;
- (void)_applyStylesToTableView:(id)arg1;
- (void)_setSelectedIndexPath:(id)arg1;
- (void)_reloadFontSizes;
- (void*)_selectedPerson;
- (id)selectedCell;
- (id)operationQueue;
- (void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3;
- (void)setAddressBook:(void*)arg1;
- (id)initWithAddressBook:(void*)arg1;
- (void)reload;
- (void)suspend;
- (id)contentView;
- (void)dealloc;
- (BOOL)shouldShowIndex;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (BOOL)_shouldDeactivateOnCancelButtonClicked;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)accessoryView;
- (id)tableView;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)resume;

@end
