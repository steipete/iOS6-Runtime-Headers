/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCHacks : NSObject  {
}

+ (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1;
+ (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1;
+ (void)_checkCarrierBundleRelatedSettings;
+ (id)_permittedAutoLockNumbers;
+ (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
+ (id)_permittedGracePeriodNumbers;
+ (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
+ (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;
+ (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1;
+ (BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3;
+ (void)_applyChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;
+ (id)_deviceSpecificDefaultSettings;


@end
