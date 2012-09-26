/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSMutableDictionary, NSObject<OS_dispatch_source>, ABFavoritesList, NSMutableArray, <BBPushDataProviderFactory>, NSString, NSMutableSet, NSDate, NSArray;

@interface BBServer : NSObject <ABPredicateDelegate, XPCProxyTarget> {
    NSMutableSet *_observers;
    NSMutableSet *_listObservers;
    NSMutableSet *_modalAlertObservers;
    NSMutableSet *_bannerObservers;
    NSMutableSet *_lockscreenObservers;
    NSMutableSet *_soundObservers;
    NSMutableSet *_settingsObservers;
    NSMutableSet *_settingsGateways;
    NSMutableArray *_sortedSectionIDs;
    NSMutableArray *_sortedPreviousSectionIDs;
    unsigned int _sectionOrderRule;
    NSMutableDictionary *_sectionInfoByID;
    NSMutableDictionary *_sectionParametersByID;
    NSMutableDictionary *_sectionSortDescriptorsByID;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_transactionsByObserver;
    NSMutableDictionary *_listBulletinIDsBySectionID;
    NSArray *_behaviorOverrides;
    int _behaviorOverrideStatus;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    unsigned int _activeBehaviorOverrides;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    unsigned int _privilegedSenderTypes;
    int _privilegedAddressBookGroupRecordID;
    NSString *_privilegedAddressBookGroupName;
    NSMutableDictionary *_lastContactTimeForSender;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    BOOL _privilegedSenderFilteringNecessary;
    NSMutableArray *_interruptingBulletinIDs;
    NSMutableArray *_expiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSMutableDictionary *_dataProvidersBySection;
    NSMutableSet *_pushDataProviders;
    NSMutableDictionary *_clearedSections;
    <BBPushDataProviderFactory> *_pushDataProviderFactory;
    NSMutableDictionary *_dataProviderFactoriesBySection;
    int _demo_lockscreen_token;
    unsigned int _currentSystemState;
    NSMutableDictionary *_bulletinRequestsByID;
    void *_addressBook;
    ABFavoritesList *_favoritesList;
    BOOL _entryFound;
}

+ (void)initialize;

- (BOOL)_doesFavoritesListContainDestinationID:(id)arg1;
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (BOOL)_doesAddressBookContainDestinationID:(id)arg1;
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)arg1;
- (BOOL)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (void)publishBulletinRequest:(id)arg1 destinations:(int)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (id)_removalsForListSection:(id)arg1 addition:(id)arg2 keepAddition:(BOOL*)arg3;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_favoritesList;
- (void*)_addressBook;
- (void)_loadDataProvidersAndSettings;
- (void)_noteSystemStateChanged;
- (void)_expireBulletinsDueToSystemEvent:(unsigned int)arg1;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (id)_behaviorOverridesPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (id)_clearedSectionsPath;
- (id)_dataDirectoryPath;
- (id)_copyDefaultEnabledWeeAppIDs;
- (void)_weeApp:(id)arg1 setHiddenFromUser:(BOOL)arg2;
- (BOOL)_weeAppIsHiddenFromUser:(id)arg1 callback:(id)arg2;
- (void)_noteUserEnabledPushDeliveryForDataProvider:(id)arg1;
- (void)_removePushDataProvider:(id)arg1;
- (void)_removeSection:(id)arg1;
- (void)_removeDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_updatePushSettingsForPushDataProvider:(id)arg1;
- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2 sortNowAndNotifyObservers:(BOOL)arg3;
- (void)_updateSectionInfo:(id)arg1 withSectionDisplayProperties:(id)arg2;
- (void)_updateSectionInfo:(id)arg1 withDefaultInfo:(id)arg2;
- (void)_addSortedSectionID:(id)arg1 sortNow:(BOOL)arg2;
- (id)_defaultSectionInfoForSection:(id)arg1;
- (void)_addPushDataProvider:(id)arg1 sortNowAndNotifyObservers:(BOOL)arg2;
- (void)_addDataProvider:(id)arg1 sortSectionsNow:(BOOL)arg2;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)publishBulletinRequest:(id)arg1 destinations:(int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (id)_configureSectionInfoForDataProvider:(id)arg1;
- (void)updateListSection:(id)arg1 withBulletinRequests:(id)arg2;
- (BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (unsigned int)_filtersForSectionID:(id)arg1;
- (unsigned int)listBulletinCapForSectionID:(id)arg1;
- (void)_updateBulletinsForDataProvider:(id)arg1 enabledSectionIDs:(id)arg2;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (void)_sortSectionIDsUsingDefaultOrder;
- (id)_migrateSavedSectionOrder:(id)arg1;
- (void)_readSavedSectionOrder:(id*)arg1 andRule:(unsigned int*)arg2;
- (void)_loadAllWeeAppSections;
- (void)_publishBulletinsForAllDataProviders;
- (void)_loadAllDataProviderPluginBundles;
- (void)_loadClearedSections;
- (void)_loadSavedSectionInfo;
- (void)_loadBehaviorOverrides;
- (void)_ensureDataDirectoryExists;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (void)_updateSectionInfoForDataProvider:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)_publishBulletinRequest:(id)arg1 forDataProvider:(id)arg2 forDestinations:(int)arg3 alwaysToLockScreen:(BOOL)arg4;
- (void)_publishBulletinRequest:(id)arg1 forDataProvider:(id)arg2 forDestinations:(int)arg3;
- (BOOL)shouldPresentNotificationFromSenderWithDestinationID:(id)arg1;
- (void)_writeBehaviorOverrides;
- (void)_setBehaviorOverridesTimer;
- (void)_behaviorOverrideStatusChanged;
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned int)arg1 privilegedSenderTypes:(unsigned int)arg2;
- (void)_checkPrivilegedSenderFilteringState;
- (unsigned int)_adjustedBehaviorOverrideTypes:(unsigned int)arg1 basedOnSystemState:(unsigned int)arg2;
- (void)_behaviorOverridesChanged;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_sortSectionIDsUsingGuideArray:(id)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_writeSectionOrder;
- (id)_interruptingBulletinIDsForFeeds:(unsigned int)arg1;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (id)_sectionInfoArray:(BOOL)arg1;
- (void)removeBulletinID:(id)arg1 fromListSection:(id)arg2;
- (void)_clearSection:(id)arg1;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(int)arg2;
- (unsigned int)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)_nextExpireInterruptionsDate;
- (void)_expireInterruptions;
- (id)_nextExpireBulletinsDate;
- (void)_expireBulletins;
- (void)_updateBehaviorOverrides;
- (void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_sendUpdateSectionInfo:(id)arg1;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (id)_defaultSectionOrder;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (id)listBulletinIDsForSectionID:(id)arg1;
- (void)_sendUpdateSectionOrder;
- (void)_writeSectionInfo;
- (id)_allBulletinsForSectionID:(id)arg1;
- (void)_clearBulletins:(id)arg1 forSectionID:(id)arg2;
- (id)_listBulletinsForSectionID:(id)arg1;
- (void)_updateBulletinsForDataProvider:(id)arg1;
- (void)_writeClearedSections;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2;
- (void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;
- (id)_currentTransactionForObserver:(id)arg1 bulletinID:(id)arg2;
- (unsigned int)_incrementedTransactionIDForObserver:(id)arg1 bulletinID:(id)arg2;
- (id)_observersForFeeds:(unsigned int)arg1;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)_removeSettingsGateway:(id)arg1;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (unsigned int)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)arg1;
- (void)_removeObserver:(id)arg1;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(BOOL)arg2;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_removeBulletin:(id)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_addInterruptingBulletin:(id)arg1;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_modifyBulletin:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_addBulletin:(id)arg1;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (void)noteOccurrenceOfEvent:(unsigned int)arg1;
- (void)noteChangeOfState:(unsigned int)arg1 newValue:(BOOL)arg2;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)getShouldPresentNotificationFromSenderWithDestinationID:(id)arg1 handler:(id)arg2;
- (void)settingsGateway:(id)arg1 setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg2;
- (void)settingsGateway:(id)arg1 setPrivilegedSenderAddressBookGroupRecordID:(int)arg2 name:(id)arg3;
- (void)settingsGateway:(id)arg1 setPrivilegedSenderTypes:(unsigned int)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrideStatus:(int)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrides:(id)arg2;
- (void)settingsGateway:(id)arg1 setSectionInfo:(id)arg2 forSectionID:(id)arg3;
- (void)settingsGateway:(id)arg1 setOrderedSectionIDs:(id)arg2;
- (void)settingsGateway:(id)arg1 setSectionOrderRule:(unsigned int)arg2;
- (void)settingsGateway:(id)arg1 getBehaviorOverridesEnabledWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getBehaviorOverridesWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)_clearBehaviorOverridesTimer;
- (void)_clearExpirationTimer;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)_handleSystemStateConnection:(id)arg1;
- (void)_handleUtilitiesConnection:(id)arg1;
- (void)_addSettingsGatewayWithConnection:(id)arg1;
- (void)_addObserverWithConnection:(id)arg1;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned int)arg3;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 getRecentUnacknowledgedBulletinsForFeeds:(unsigned int)arg2 withHandler:(id)arg3;
- (void)settingsGateway:(id)arg1 getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getPrivilegedSenderTypesWithHandler:(id)arg2;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)observer:(id)arg1 requestListBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoWithHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2;
- (void)deliverResponse:(id)arg1;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (id)init;
- (void)dealloc;

@end
