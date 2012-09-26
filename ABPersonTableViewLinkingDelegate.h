/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, ABPersonViewControllerHelper, ABPersonTableViewDataSource, NSMutableArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {
    NSMutableArray *_linkedInfos;
    int _currentIndexInLinkedInfos;
    BOOL _ignoresReloadLinkedInfos;
    BOOL _shouldAllowLinkingAnotherContact;
    BOOL _hasLinkChanges;
    ABPersonTableViewDataSource *_dataSource;
    ABPersonViewControllerHelper *_helper;
    BOOL _shouldShowLinkingUIOnCard;
    BOOL _showsLinkedPeople;
    BOOL _appearsInLinkingPeoplePicker;
    BOOL _updateShouldAllowLinkingAnotherContact;
}

@property(readonly) NSArray * linkedInfos;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUIOnCard;
@property BOOL appearsInLinkingPeoplePicker;
@property BOOL updateShouldAllowLinkingAnotherContact;
@property(readonly) BOOL hasLinkChanges;
@property ABPersonTableViewDataSource * dataSource;
@property(readonly) ABPersonViewControllerHelper * helper;


- (BOOL)updateShouldAllowLinkingAnotherContact;
- (id)linkedInfoAtRow:(int)arg1;
- (id)newLinkedInfoForPerson:(void*)arg1;
- (int)indexOfLinkedInfoAtRow:(int)arg1;
- (BOOL)canUnlinkCardAtRow:(int)arg1;
- (BOOL)manuallyUnlinkCardAtRow:(int)arg1;
- (id)personNameForCardAtRow:(int)arg1;
- (id)sourceNameForCardAtRow:(int)arg1;
- (BOOL)shouldIncludeLinkingUISectionWhenEditing:(BOOL)arg1;
- (BOOL)shouldAllowLinkingAnotherContact;
- (id)initWithHelper:(id)arg1;
- (int)numberOfLinkedCardRows;
- (void)setUpdateShouldAllowLinkingAnotherContact:(BOOL)arg1;
- (id)newPeoplePickerForLinking;
- (id)newPersonViewControllerForLinkedCardAtRow:(int)arg1;
- (BOOL)shouldAllowLinkingPersonWithRecordID:(int)arg1;
- (void)_finalizeLinkChanges;
- (BOOL)reloadLinkedInfos;
- (id)allNonUnifiedPeople;
- (id)linkedInfos;
- (void)reloadLinkingUI;
- (void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(int)arg2;
- (BOOL)manuallyLinkPerson:(void*)arg1;
- (BOOL)appearsInLinkingPeoplePicker;
- (BOOL)hasLinkChanges;
- (id)sourceNameForCurrentCard;
- (BOOL)isLinkedCard;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUIOnCard;
- (id)helper;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setShouldShowLinkingUIOnCard:(BOOL)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;

@end
